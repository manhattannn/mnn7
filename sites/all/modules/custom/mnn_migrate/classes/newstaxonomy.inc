<?php
/**
 * Migrate news categories terms
 */
class NewsCategoriesMigration extends Migration {
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate the mnn new categories.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D6 Unique Term ID',
          'alias' => 'td',
        )
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    // Get the news categories terms.
    $query = Database::getConnection('default', 'migrate')
      ->select('term_data', 'td')
      ->fields('td', array('tid', 'vid', 'name', 'description', 'weight'))
      ->condition('td.vid', 3, '=');

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

    // Set up our destination - term in this case.
    $this->destination = new MigrateDestinationTerm('sections');

    // Assign mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('description', 'description');
    $this->addFieldMapping('format')->defaultValue('plain_text');
    $this->addFieldMapping('weight', 'weight');
    $this->addFieldMapping('parent', 'parent');

    // Unmapped source fields
    $this->addUnmigratedSources(array('vid'));
  }

  public function prepareRow($current_row) {
    $current_row->parent = $this->getParentTermId();
    return TRUE;
  }

  /**
   * Function to retrieve 'News' term id.
   *
   * @return Integer
   *   News term id.
   */
  protected function getParentTermId() {

    static $vocabs;
    static $vocabulary_id;
    static $parent_term;

    if (empty($vocabs)) {
      $vocabs= taxonomy_vocabulary_get_names();
    }

    if (empty($vocabulary_id)) {
      $vocabulary_id = $vocabs['sections']->vid;
    }

    if (empty($parent_term)) {
      $parent_term = current(taxonomy_term_load_multiple(array(), array('name' => trim('News'), 'vid' => $vocabulary_id)));
    }

    if (empty($parent_term)) {
      $parent_term = (object) array(
        'name' => 'News',
        'vid' => $vocabulary_id,
      );
      taxonomy_term_save($parent_term);
    }

    return $parent_term->tid;
  }
}
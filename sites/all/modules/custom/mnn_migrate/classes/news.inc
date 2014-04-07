<?php
/**
 * News migration class for Mnn.
 */
class NewsMigration extends Migration {

  const OLD_SITE_URL = 'http://www.mnn.org/';

  public function __construct() {
    parent::__construct();

    $this->description = t('Migration of the news nodes.');

    // Define the field which normally is a primary key
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'nid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D6 Unique Node ID',
          'alias' => 'n',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Grab data from tables in source database
    $query = Database::getConnection('default', 'migrate')
      ->select('node', 'n')
      ->fields('n', array('nid', 'vid', 'title', 'uid', 'status', 'created', 'changed', 'comment', 'promote', 'moderate', 'sticky', 'tnid', 'translate'))
      ->condition('n.type', 'news', '=');
    $query->join('node_revisions', 'nr', 'n.vid = nr.vid');
    $query->fields('nr', array('body', 'teaser', 'format'));
    $query->orderBy('n.nid', 'ASC');

    // Add source fields which are not queried in $query, will be populated in prepareRow()
    $source_fields = array(
      'url_alias' => t('The url alias of the node'),
      'categories' => t('The category for the node'),
      'image_filename' => t('image_filename'),
      'image_filepath' => t('image_filepath'),
    );

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, $source_fields);

    // Set up our destination - nodes of type migrate_example_beer
    $this->destination = new MigrateDestinationNode('article');

    // Mapping: Assign mappings TO destination fields FROM source fields.
    // Simple Mappings : map the fields with the same name
    $this->addSimpleMappings(array('title', 'created', 'changed', 'status', 'promote', 'sticky'));
    // Define default value for some fields
    $this->addFieldMapping('is_new')->defaultValue(TRUE);
    $this->addFieldMapping('revision')->defaultValue(TRUE);
    $this->addFieldMapping('revision_uid', 'uid')->sourceMigration('User');
    $this->addFieldMapping('uid', 'uid')->sourceMigration('User');

    // Mapping of the body field
    $body_arguments = MigrateTextFieldHandler::arguments(array('source_field' => 'teaser'), array('source_field' => 'format'));
    $this->addFieldMapping('body', 'body')->arguments($body_arguments);

    // Pass values from prepareRow()
    $this->addFieldMapping('path', 'url_alias');
    $this->addFieldMapping('field_site_section', 'categories')
      ->separator(',');
    $this->addFieldMapping('field_image', 'image_filename');
    $this->addFieldMapping('field_image:source_dir', 'image_filepath');

    // Unmapped source fields
    $this->addUnmigratedSources(array('vid', 'tnid', 'translate', 'teaser', 'format'));
    // Unmapped destination fields
    $this->addUnmigratedDestinations(array('log', 'tnid', 'translate', 'body:summary', 'body:format', 'body:language', 'comment'));
  }

  public function prepareRow($current_row) {

    // Set the text format for the node.
    $current_row->format = MnnMigrateUtil::getTextFormat($current_row->format);

    // Run the old body text throught check_markup filter to
    // get the html of the body text. Since the last site's filter
    // used the linebreak converter, and not wysiwyg editor, the
    // wysiwyg editor mangled the text because it had no tags.
    if ($current_row->format == 'filtered_html') {
      $current_row->body = check_markup(trim($current_row->body), $current_row->format);
    }
    // Set the terms for the node.
    $current_row->categories = MnnMigrateUtil::getProperCategories($current_row->vid);

    // Set the url alias for the node.
    $current_row->url_alias = MnnMigrateUtil::getUrlAlias($current_row->nid);

    // Set file data for the attachment file fields.
    $query = Database::getConnection('default', 'migrate')
      ->select('content_field_image', 'cfi')
      ->fields('cfi', array('field_image_data'))
      ->condition('cfi.vid', $current_row->vid, '=');
    $query->join('files', 'f', 'cfi.field_image_fid = f.fid');
    $query->addField('f', 'filename');
    $query->addField('f', 'filepath');
    $result = $query->execute();

    foreach ($result as $row) {
      $field = array(
        'filename' => $row->filename,
        'filepath' => str_replace($row->filename, '', $row->filepath),
      );
      $current_row->image_filename[] = $field['filename'];
      $current_row->image_filepath[] = self::OLD_SITE_URL . $field['filepath'];
    }

    return TRUE;
  }
}

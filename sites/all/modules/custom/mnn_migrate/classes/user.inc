<?php
/**
 * User migration class for Mnn.
 */
class UserMigration extends Migration {
  public function __construct() {

    parent::__construct(MigrateGroup::getInstance('UserMigration'));

    // Select fields from the Drupal 6 user table.
    $query = Database::getConnection('default', 'migrate')
      ->select('users', 'u')
      ->fields('u', array('uid', 'name', 'pass', 'mail', 'created', 'access',
        'login', 'status', 'picture', 'init'))
      ->condition('u.uid', 1, '>');
    // This is supposed to get roles not sure how.
    $source_fields = array(
      'uid' => t('User ID'),
      'roles' => t('The set of roles assigned to a user.'),
    );
    // Set source and destination.
    $this->source = new MigrateSourceSQL($query, $source_fields);
    $this->destination = new MigrateDestinationUser(array('md5_passwords' => TRUE));
    // Set up database maping.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'uid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D6 Unique User ID',
          'alias' => 'u',
        )
      ),
      MigrateDestinationUser::getKeySchema()
    );
    // Add simple field mappings
    $this->addFieldMapping('name', 'name')->dedupe('users', 'name');
    $this->addFieldMapping('pass', 'pass');
    $this->addFieldMapping('mail', 'mail')->dedupe('users', 'mail');
    $this->addFieldMapping('language')->defaultValue('');
    $this->addFieldMapping('theme')->defaultValue('');
    $this->addFieldMapping('signature')->defaultValue('');
    $this->addFieldMapping('signature_format')->defaultValue('filtered_html');
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('access', 'access');
    $this->addFieldMapping('login', 'login');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('picture')->defaultValue(0);
    $this->addFieldMapping('init', 'init');
    $this->addFieldMapping('timezone')->defaultValue(NULL);
    $this->addFieldMapping('roles', 'roles');
  }
  // Set up Roles.
  public function prepareRow($current_row) {
    // Add the Authenticated role for everyone.
    $roles = array(
      '2' => '2',
      '5' => '5'
    );

    $current_row->roles = $roles;
    return TRUE;
  }
}
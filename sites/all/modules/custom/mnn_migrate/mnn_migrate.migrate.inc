<?php

/**
* @file
* Migrate module auto loads this file if the the name is  [module name] plus
* '.migrate.inc', when hook_migrate_api is invoked by the Migrate module.
*/

/**
 * Implements hook_migrate_api().
 *
 * Registers migration classes.
 */
function mnn_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'User' => array('class_name' => 'UserMigration'),
    ),
  );
  return $api;
}

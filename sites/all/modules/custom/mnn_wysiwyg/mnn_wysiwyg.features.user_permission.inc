<?php
/**
 * @file
 * mnn_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mnn_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access assets overview'.
  $permissions['access assets overview'] = array(
    'name' => 'access assets overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'access search widget'.
  $permissions['access search widget'] = array(
    'name' => 'access search widget',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'asset_widget',
  );

  // Exported permission: 'administer asset types'.
  $permissions['administer asset types'] = array(
    'name' => 'administer asset types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'administer assets'.
  $permissions['administer assets'] = array(
    'name' => 'administer assets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'asset',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'create asset with type document'.
  $permissions['create asset with type document'] = array(
    'name' => 'create asset with type document',
    'roles' => array(),
    'module' => 'asset',
  );

  // Exported permission: 'create asset with type image'.
  $permissions['create asset with type image'] = array(
    'name' => 'create asset with type image',
    'roles' => array(),
    'module' => 'asset',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete asset with type document'.
  $permissions['delete asset with type document'] = array(
    'name' => 'delete asset with type document',
    'roles' => array(),
    'module' => 'asset',
  );

  // Exported permission: 'delete asset with type image'.
  $permissions['delete asset with type image'] = array(
    'name' => 'delete asset with type image',
    'roles' => array(),
    'module' => 'asset',
  );

  // Exported permission: 'edit asset with type document'.
  $permissions['edit asset with type document'] = array(
    'name' => 'edit asset with type document',
    'roles' => array(),
    'module' => 'asset',
  );

  // Exported permission: 'edit asset with type image'.
  $permissions['edit asset with type image'] = array(
    'name' => 'edit asset with type image',
    'roles' => array(),
    'module' => 'asset',
  );

  return $permissions;
}

<?php
/**
 * @file
 * mnn_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mnn_user_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 99,
  );

  // Exported role: member.
  $roles['member'] = array(
    'name' => 'member',
    'weight' => 2,
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 3,
  );

  return $roles;
}

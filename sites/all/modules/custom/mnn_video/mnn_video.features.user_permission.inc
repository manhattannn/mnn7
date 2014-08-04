<?php
/**
 * @file
 * mnn_video.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mnn_video_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access fblikebutton'.
  $permissions['access fblikebutton'] = array(
    'name' => 'access fblikebutton',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'fblikebutton',
  );

  // Exported permission: 'access tweetbutton'.
  $permissions['access tweetbutton'] = array(
    'name' => 'access tweetbutton',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'tweetbutton',
  );

  return $permissions;
}

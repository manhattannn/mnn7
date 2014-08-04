<?php
/**
 * @file
 * mnn_channel.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mnn_channel_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['fblikebutton-fblikebutton_static_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'fblikebutton_static_block',
    'module' => 'fblikebutton',
    'node_types' => array(),
    'pages' => 'live/*',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'mnn_theme',
        'weight' => -21,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}

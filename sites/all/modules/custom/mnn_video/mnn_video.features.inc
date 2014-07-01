<?php
/**
 * @file
 * mnn_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mnn_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mnn_video_node_info() {
  $items = array(
    'mnn_video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('A video item imported from Vimeo or YouTube.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

<?php
/**
 * @file
 * mnn_common.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mnn_common_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function mnn_common_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: featured_content
  $nodequeues['featured_content'] = array(
    'name' => 'featured_content',
    'title' => 'Featured content',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'Add to featured content',
    'link_remove' => 'Remove from featured content',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'mnn_video',
      2 => 'page',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

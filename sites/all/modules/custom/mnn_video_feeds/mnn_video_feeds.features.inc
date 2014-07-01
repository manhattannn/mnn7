<?php
/**
 * @file
 * mnn_video_feeds.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mnn_video_feeds_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mnn_video_feeds_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function mnn_video_feeds_node_info() {
  $items = array(
    'mnn_video_feed' => array(
      'name' => t('Video Feed'),
      'base' => 'node_content',
      'description' => t('Feeds that pull in video content from an RSS or similar feed.'),
      'has_title' => '1',
      'title_label' => t('Feed Name'),
      'help' => '',
    ),
  );
  return $items;
}

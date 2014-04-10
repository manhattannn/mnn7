<?php
/**
 * @file
 * mnn_channel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mnn_channel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mnn_channel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

<?php
/**
 * @file
 * mnn_exported_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mnn_exported_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

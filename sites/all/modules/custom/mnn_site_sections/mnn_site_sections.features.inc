<?php
/**
 * @file
 * mnn_site_sections.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mnn_site_sections_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

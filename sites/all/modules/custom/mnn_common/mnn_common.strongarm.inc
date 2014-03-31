<?php
/**
 * @file
 * mnn_common.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mnn_common_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'MNN';
  $export['site_name'] = $strongarm;

  return $export;
}

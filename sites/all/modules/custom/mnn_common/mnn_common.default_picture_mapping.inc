<?php
/**
 * @file
 * mnn_common.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function mnn_common_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'teaser';
  $picture_mapping->breakpoint_group = 'teaser';
  $picture_mapping->mapping = array(
    'breakpoints.theme.cm_theme_zen.narrow' => array(
      '1x' => 'teaser_breakpoints_theme_cm_theme_zen_narrow_1x',
    ),
    'breakpoints.theme.cm_theme_zen.medium' => array(
      '1x' => 'teaser_breakpoints_theme_cm_theme_zen_medium_1x',
    ),
  );
  $export['teaser'] = $picture_mapping;

  return $export;
}

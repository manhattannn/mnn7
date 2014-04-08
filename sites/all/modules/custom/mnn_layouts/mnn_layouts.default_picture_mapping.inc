<?php
/**
 * @file
 * mnn_layouts.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function mnn_layouts_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'full';
  $picture_mapping->breakpoint_group = 'full';
  $picture_mapping->mapping = array(
    'breakpoints.theme.cm_theme_zen.narrow' => array(
      '1x' => 'teaser_breakpoints_theme_cm_theme_zen_medium_1x',
    ),
    'breakpoints.theme.cm_theme_zen.wide' => array(
      '1x' => 'cm_full',
    ),
  );
  $export['full'] = $picture_mapping;

  return $export;
}

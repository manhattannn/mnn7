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
    'custom.user.mobile_images' => array(
      '1x' => 'cm_wide_small',
    ),
    'custom.user.larger_images' => array(
      '1x' => 'cm_wide_large',
    ),
  );
  $export['full'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'teaser';
  $picture_mapping->breakpoint_group = 'teaser';
  $picture_mapping->mapping = array(
    'breakpoints.theme.cm_theme_zen.mobile' => array(
      '1x' => 'cm_teaser',
    ),
  );
  $export['teaser'] = $picture_mapping;

  return $export;
}

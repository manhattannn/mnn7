<?php
/**
 * @file
 * mnn_site_sections.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mnn_site_sections_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access';
  $strongarm->value = 'taxonomy';
  $export['workbench_access'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_allow_multiple';
  $strongarm->value = 0;
  $export['workbench_access_allow_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_auto_assign';
  $strongarm->value = 1;
  $export['workbench_access_auto_assign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_custom_form';
  $strongarm->value = 1;
  $export['workbench_access_custom_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_label';
  $strongarm->value = 'Section';
  $export['workbench_access_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_menu';
  $strongarm->value = array(
    'main-menu' => 0,
    'management' => 0,
    'navigation' => 0,
    'user-menu' => 0,
  );
  $export['workbench_access_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_menu_limit';
  $strongarm->value = 1;
  $export['workbench_access_menu_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_cm_slideshow_slide';
  $strongarm->value = 1;
  $export['workbench_access_node_type_cm_slideshow_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_page';
  $strongarm->value = 1;
  $export['workbench_access_node_type_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_taxonomy';
  $strongarm->value = array(
    'section_1' => 'section_1',
    'section_2' => 'section_2',
    'section_3' => 'section_3',
    'tags' => 0,
  );
  $export['workbench_access_taxonomy'] = $strongarm;

  return $export;
}
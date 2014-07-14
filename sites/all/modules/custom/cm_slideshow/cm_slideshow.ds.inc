<?php
/**
 * @file
 * cm_slideshow.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function cm_slideshow_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cm_slideshow_slide|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cm_slideshow_slide';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|cm_slideshow_slide|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function cm_slideshow_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cm_slideshow_slide|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cm_slideshow_slide';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'mnn_theme_ds_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_cm_slideshow_image',
      ),
      'wrapper' => array(
        1 => 'title',
        2 => 'field_cm_slideshow_sub_header',
      ),
    ),
    'fields' => array(
      'field_cm_slideshow_image' => 'media',
      'title' => 'wrapper',
      'field_cm_slideshow_sub_header' => 'wrapper',
    ),
    'classes' => array(),
    'wrappers' => array(
      'media' => 'div',
      'wrapper' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|cm_slideshow_slide|teaser'] = $ds_layout;

  return $export;
}

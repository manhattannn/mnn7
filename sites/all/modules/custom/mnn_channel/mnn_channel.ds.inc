<?php
/**
 * @file
 * mnn_channel.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mnn_channel_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|channel|term_teaser';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'channel';
  $ds_fieldsetting->view_mode = 'term_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['taxonomy_term|channel|term_teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mnn_channel_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|channel|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'channel';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'panels-cm_theme_two_columns';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_channel_embed',
        1 => 'field_channel_logo',
        2 => 'description',
        3 => 'field_channel_where_to_watch',
      ),
    ),
    'fields' => array(
      'field_channel_embed' => 'top',
      'field_channel_logo' => 'top',
      'description' => 'top',
      'field_channel_where_to_watch' => 'top',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'center' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['taxonomy_term|channel|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|channel|term_teaser';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'channel';
  $ds_layout->view_mode = 'term_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_channel_logo',
        1 => 'title',
        2 => 'description',
      ),
    ),
    'fields' => array(
      'field_channel_logo' => 'ds_content',
      'title' => 'ds_content',
      'description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|channel|term_teaser'] = $ds_layout;

  return $export;
}

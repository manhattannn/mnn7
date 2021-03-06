<?php
/**
 * @file
 * mnn_video.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mnn_video_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|mnn_video|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'mnn_video';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
    'fblikebutton_ds_field' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|mnn_video|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|mnn_video|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'mnn_video';
  $ds_fieldsetting->view_mode = 'teaser';
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
  $export['node|mnn_video|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mnn_video_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'file|video|default';
  $ds_layout->entity_type = 'file';
  $ds_layout->bundle = 'video';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'file',
      ),
    ),
    'fields' => array(
      'file' => 'ds_content',
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
  $export['file|video|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|mnn_video|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'mnn_video';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-cm_theme_two_columns';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_video',
        1 => 'title',
        2 => 'post_date',
        3 => 'body',
        4 => 'field_addthis',
        5 => 'field_tweetbutton',
        6 => 'fblikebutton_ds_field',
      ),
    ),
    'fields' => array(
      'field_video' => 'top',
      'title' => 'top',
      'post_date' => 'top',
      'body' => 'top',
      'field_addthis' => 'top',
      'field_tweetbutton' => 'top',
      'fblikebutton_ds_field' => 'top',
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
  );
  $export['node|mnn_video|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|mnn_video|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'mnn_video';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'mnn_theme_ds_teaser_grid';
  $ds_layout->settings = array(
    'regions' => array(
      'wrapper' => array(
        0 => 'field_video',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_video' => 'wrapper',
      'title' => 'wrapper',
    ),
    'classes' => array(),
    'wrappers' => array(
      'wrapper' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|mnn_video|teaser'] = $ds_layout;

  return $export;
}

<?php
/**
 * @file
 * mnn_layouts.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mnn_layouts_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
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
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_mnn_article',
    ),
  );
  $export['node|article|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
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
  $export['node|page|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function mnn_layouts_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-cm_theme_two_columns';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_image',
        1 => 'body',
        2 => 'field_addthis',
        3 => 'field_tweetbutton',
        4 => 'fblikebutton_ds_field',
      ),
    ),
    'fields' => array(
      'field_image' => 'top',
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
  $export['node|article|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'cm_theme_ds_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'wrapper' => array(
        0 => 'search_snippet',
        2 => 'body',
      ),
      'media' => array(
        1 => 'field_image',
      ),
    ),
    'fields' => array(
      'search_snippet' => 'wrapper',
      'field_image' => 'media',
      'body' => 'wrapper',
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
  $export['node|article|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'mnn_theme_ds_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_image',
      ),
      'wrapper' => array(
        1 => 'title',
        2 => 'post_date',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'field_image' => 'media',
      'title' => 'wrapper',
      'post_date' => 'wrapper',
      'body' => 'wrapper',
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
  $export['node|article|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-cm_theme_two_columns';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_image',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_image' => 'top',
      'body' => 'top',
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
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'panels-cm_theme_two_columns';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'field_image',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_image' => 'top',
      'body' => 'top',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'mnn_theme_ds_teaser';
  $ds_layout->settings = array(
    'regions' => array(
      'media' => array(
        0 => 'field_image',
      ),
      'wrapper' => array(
        1 => 'body',
        2 => 'title',
      ),
    ),
    'fields' => array(
      'field_image' => 'media',
      'body' => 'wrapper',
      'title' => 'wrapper',
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
  $export['node|page|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|channel|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'channel';
  $ds_layout->view_mode = 'default';
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
  );
  $export['taxonomy_term|channel|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function mnn_layouts_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'term_teaser';
  $ds_view_mode->label = 'Term Teaser';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['term_teaser'] = $ds_view_mode;

  return $export;
}

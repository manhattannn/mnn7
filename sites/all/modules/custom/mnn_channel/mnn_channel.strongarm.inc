<?php
/**
 * @file
 * mnn_channel.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mnn_channel_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_block_url';
  $strongarm->value = 'http://mnn7.local';
  $export['fblikebutton_block_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_bl_action';
  $strongarm->value = 'like';
  $export['fblikebutton_bl_action'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_bl_color_scheme';
  $strongarm->value = 'light';
  $export['fblikebutton_bl_color_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_bl_font';
  $strongarm->value = 'arial';
  $export['fblikebutton_bl_font'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_bl_iframe_css';
  $strongarm->value = '';
  $export['fblikebutton_bl_iframe_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_bl_iframe_height';
  $strongarm->value = '80';
  $export['fblikebutton_bl_iframe_height'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_bl_iframe_width';
  $strongarm->value = '450';
  $export['fblikebutton_bl_iframe_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_bl_language';
  $strongarm->value = 'en_US';
  $export['fblikebutton_bl_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_bl_layout';
  $strongarm->value = 'button_count';
  $export['fblikebutton_bl_layout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fblikebutton_bl_show_faces';
  $strongarm->value = '0';
  $export['fblikebutton_bl_show_faces'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__channel';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'term_teaser' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
        'name' => array(
          'weight' => '-5',
        ),
        'description' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'term_teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_channel';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'term_teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_channel_pattern';
  $strongarm->value = 'live/[term:field_channel_id]-[term:name]';
  $export['pathauto_taxonomy_term_channel_pattern'] = $strongarm;

  return $export;
}

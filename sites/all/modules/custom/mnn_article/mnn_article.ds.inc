<?php
/**
 * @file
 * mnn_article.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function mnn_article_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'fblikebutton_ds_field' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|article|default'] = $ds_fieldsetting;

  return $export;
}

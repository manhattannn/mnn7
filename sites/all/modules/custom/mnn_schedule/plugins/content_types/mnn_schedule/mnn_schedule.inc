<?php

/**
 * @file
 * content_type plugin generated by drush ctools plugin stub.
 */

$plugin = array(
  'title' => t('MNN Full Schedule'),
  'description' => t('A full listing of all the channels and shows per day.'),
  'content_types' => array('mnn_schedule'),
  'defaults' => array('mnn_schedule_mnn_schedule_YOUR_VAR' => ''),
  'icon' => 'ctools_stub.png',
  'category' => t('Schedule'),
  'single' => TRUE,
);

/**
 * 'Edit' callback for the content type.
 */
function mnn_schedule_mnn_schedule_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['mnn_schedule_mnn_schedule_YOUR_VAR'] = array(
    '#type' => 'textfield',
    '#title' => t('TITLE'),
    '#description' => t('DESCRIPTION.'),
    '#default_value' => !empty($conf['mnn_schedule_mnn_schedule_YOUR_VAR']) ? $conf['mnn_schedule_mnn_schedule_YOUR_VAR'] : '',
  );
  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function mnn_schedule_mnn_schedule_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Put the output for your content type in the pane object's content.
 */
function mnn_schedule_mnn_schedule_content_type_render($subtype, $conf, $args, $context) {
  drupal_add_js(libraries_get_path('angular') . '/angular.min.js');
  drupal_add_js(libraries_get_path('angular') . '/angular-animate.min.js');
  drupal_add_js(libraries_get_path('angular') . '/angular-resource.min.js');
  drupal_add_js(libraries_get_path('angular') . '/angular-route.min.js');

  $pane = new stdClass();
  $pane->content = '';
  return $pane;
}

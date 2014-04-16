<?php

ctools_include('mnn_show.common', 'mnn_show', '');

/**
 * Page callback.
 */
function mnn_show_schedule() {
  drupal_add_library('system','ui.datepicker');

  // Add schedule css from mnn_show module.
  drupal_add_css(drupal_get_path('module', 'mnn_show').'/css/mnn_show_schedule.css');

  mnn_show_include_tooltip();

  drupal_add_js(drupal_get_path('module', 'mnn_show').'/mnn_show.js');
  $content = '<div id="schedule"><header id="schedule-header"><div class="inner"><div class="nav clearfix"></div><div class="channels"></div></div></header><div id="cols"></div></div> ';
  return $content;
}
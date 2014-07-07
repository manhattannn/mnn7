<?php
/**
 * @file
 * mnn_snippets.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function mnn_snippets_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Producer login';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'producer_login';
  $fe_block_boxes->body = '<p><a href="http://cm.mnn.org/user" target="_blank">Producer login</a></p>
<div class="description">Click here to access your producer profile and upload media</div>
';

  $export['producer_login'] = $fe_block_boxes;

  return $export;
}

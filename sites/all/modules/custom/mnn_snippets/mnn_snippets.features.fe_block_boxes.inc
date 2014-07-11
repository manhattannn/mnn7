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
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'producer_login';
  $fe_block_boxes->body = '<div class="prod-login"><a href="http://cm.mnn.org/user" target="_blank" title="Producer Login">Producer Login</a></div>
<div class="prod-link"><a href="/user/login" title="Upload Media">Upload Media</a></div>
';

  $export['producer_login'] = $fe_block_boxes;

  return $export;
}

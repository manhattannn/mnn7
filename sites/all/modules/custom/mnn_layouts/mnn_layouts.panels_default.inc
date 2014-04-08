<?php
/**
 * @file
 * mnn_layouts.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function mnn_layouts_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'sidebar';
  $mini->category = 'Regions';
  $mini->admin_title = 'Sidebar';
  $mini->admin_description = 'Holds all of the sidebar blocks.';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b7ecddb7-b224-4274-b51b-54a5f554da4c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d54dcab-d539-49e2-9179-e806c5577dcd';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'mnn_channel_lists';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d54dcab-d539-49e2-9179-e806c5577dcd';
    $display->content['new-1d54dcab-d539-49e2-9179-e806c5577dcd'] = $pane;
    $display->panels['main'][0] = 'new-1d54dcab-d539-49e2-9179-e806c5577dcd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1d54dcab-d539-49e2-9179-e806c5577dcd';
  $mini->display = $display;
  $export['sidebar'] = $mini;

  return $export;
}

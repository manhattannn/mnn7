<?php
/**
 * @file
 * mnn_layouts.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function mnn_layouts_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default:default';
  $panelizer->title = 'Content';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'cm_theme_two_columns';
  $display->layout_settings = array(
    'top_classes' => '',
    'center_classes' => '',
    'left_classes' => '',
    'right_classes' => '',
    'bottom_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'd5cc52cb-866d-488b-b7dc-280c34616e36';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-24ae844c-e357-4808-a63f-daccd2894ccd';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'picture',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'large',
        'picture_group' => 'full',
        'fallback_image_style' => '',
        'colorbox' => 'full',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '24ae844c-e357-4808-a63f-daccd2894ccd';
    $display->content['new-24ae844c-e357-4808-a63f-daccd2894ccd'] = $pane;
    $display->panels['top'][0] = 'new-24ae844c-e357-4808-a63f-daccd2894ccd';
    $pane = new stdClass();
    $pane->pid = 'new-c9e786f8-a745-41ab-8044-af6fea00b805';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c9e786f8-a745-41ab-8044-af6fea00b805';
    $display->content['new-c9e786f8-a745-41ab-8044-af6fea00b805'] = $pane;
    $display->panels['top'][1] = 'new-c9e786f8-a745-41ab-8044-af6fea00b805';
    $pane = new stdClass();
    $pane->pid = 'new-52454388-9cd5-4a41-91d3-3fbc213232ce';
    $pane->panel = 'top';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '52454388-9cd5-4a41-91d3-3fbc213232ce';
    $display->content['new-52454388-9cd5-4a41-91d3-3fbc213232ce'] = $pane;
    $display->panels['top'][2] = 'new-52454388-9cd5-4a41-91d3-3fbc213232ce';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-24ae844c-e357-4808-a63f-daccd2894ccd';
  $panelizer->display = $display;
  $export['node:page:default:default'] = $panelizer;

  return $export;
}

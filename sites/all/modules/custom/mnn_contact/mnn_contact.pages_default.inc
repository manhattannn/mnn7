<?php
/**
 * @file
 * mnn_contact.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function mnn_contact_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'contact_site_panel_context';
  $handler->task = 'contact_site';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contact',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->uuid = '5d7575e2-14d8-4aaf-a1d7-55adc833380f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f03fc0b6-4752-4eb3-b530-731775e3c071';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p style="margin-top: 0px; margin-bottom: 10px; font-family: \'Helvetica Neue\', Helvetica, Arial, sans-serif; font-size: 13px; line-height: 20px;">Phone: 212-757-2670</p>
<p style="margin-top: 0px; margin-bottom: 10px; font-family: \'Helvetica Neue\', Helvetica, Arial, sans-serif; font-size: 13px; line-height: 20px;">Departments Broadcast Operations - ext: 302, 335&nbsp;<br />
	Community Media - ext: 319&nbsp;<br />
	Firehouse - ext: 200&nbsp;<br />
	General Administration - ext: 301&nbsp;<br />
	Programming - ext: 305, 307, 334&nbsp;<br />
	Training &amp; Facilitation - ext: 309, 312, 317&nbsp;<br />
	Youth Channel - ext: 200</p>
<p style="margin-top: 0px; margin-bottom: 0px; font-family: \'Helvetica Neue\', Helvetica, Arial, sans-serif; font-size: 13px; line-height: 20px;">Fax: 212-757-1603</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f03fc0b6-4752-4eb3-b530-731775e3c071';
    $display->content['new-f03fc0b6-4752-4eb3-b530-731775e3c071'] = $pane;
    $display->panels['main'][0] = 'new-f03fc0b6-4752-4eb3-b530-731775e3c071';
    $pane = new stdClass();
    $pane->pid = 'new-8476ed3c-4c11-4dbb-a608-5ae248ae2899';
    $pane->panel = 'main';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Contact Us',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8476ed3c-4c11-4dbb-a608-5ae248ae2899';
    $display->content['new-8476ed3c-4c11-4dbb-a608-5ae248ae2899'] = $pane;
    $display->panels['main'][1] = 'new-8476ed3c-4c11-4dbb-a608-5ae248ae2899';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f03fc0b6-4752-4eb3-b530-731775e3c071';
  $handler->conf['display'] = $display;
  $export['contact_site_panel_context'] = $handler;

  return $export;
}

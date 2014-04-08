<?php
/**
 * @file
 * mnn_layouts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function mnn_layouts_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mnn_homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '-10',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mnn_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'mnn_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home Page',
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
      'top' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Homepage';
  $display->uuid = 'e82016ce-b792-4e9f-b0ae-3163fb3240b7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c9282315-b986-452b-8096-fe2c608f76d4';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'content_listing-mnn_content_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '6',
      'exposed' => array(
        'type' => array(
          'article' => 'article',
        ),
      ),
      'override_title' => 1,
      'override_title_text' => 'News',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c9282315-b986-452b-8096-fe2c608f76d4';
    $display->content['new-c9282315-b986-452b-8096-fe2c608f76d4'] = $pane;
    $display->panels['left'][0] = 'new-c9282315-b986-452b-8096-fe2c608f76d4';
    $pane = new stdClass();
    $pane->pid = 'new-3823636f-5df6-4d37-a4ad-88dd9535dbca';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'content_listing-mnn_layouts_section_content_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'exposed' => array(
        'type' => array(
          'page' => 'page',
        ),
        'field_site_section_tid' => array(
          18 => '18',
        ),
      ),
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
    $pane->uuid = '3823636f-5df6-4d37-a4ad-88dd9535dbca';
    $display->content['new-3823636f-5df6-4d37-a4ad-88dd9535dbca'] = $pane;
    $display->panels['right'][0] = 'new-3823636f-5df6-4d37-a4ad-88dd9535dbca';
    $pane = new stdClass();
    $pane->pid = 'new-ee58356a-b622-421c-9289-3ed280f99d96';
    $pane->panel = 'top';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:e472492a-2e76-4eb3-99aa-3958c48dff91';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ee58356a-b622-421c-9289-3ed280f99d96';
    $display->content['new-ee58356a-b622-421c-9289-3ed280f99d96'] = $pane;
    $display->panels['top'][0] = 'new-ee58356a-b622-421c-9289-3ed280f99d96';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c9282315-b986-452b-8096-fe2c608f76d4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mnn_homepage'] = $page;

  return $pages;

}

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
    $pane->pid = 'new-a12e95ef-97f8-47d7-8126-8f00135caa8d';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'content_listing-mnn_snippets_recent_content_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 1,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '3',
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
    $pane->uuid = 'a12e95ef-97f8-47d7-8126-8f00135caa8d';
    $display->content['new-a12e95ef-97f8-47d7-8126-8f00135caa8d'] = $pane;
    $display->panels['left'][0] = 'new-a12e95ef-97f8-47d7-8126-8f00135caa8d';
    $pane = new stdClass();
    $pane->pid = 'new-7d5ce20e-7b9e-4f46-9c81-df0e2f0b0afc';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Dummy: Featured Producer',
      'title' => 'Featured Producer',
      'body' => '<center><iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6478935/events/2616010/player?width=620&amp;height=450&amp;autoPlay=fase&amp;mute=false" width="620"></iframe></center><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>',
      'format' => 'full_html',
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
    $pane->uuid = '7d5ce20e-7b9e-4f46-9c81-df0e2f0b0afc';
    $display->content['new-7d5ce20e-7b9e-4f46-9c81-df0e2f0b0afc'] = $pane;
    $display->panels['right'][0] = 'new-7d5ce20e-7b9e-4f46-9c81-df0e2f0b0afc';
    $pane = new stdClass();
    $pane->pid = 'new-2b76f4e6-a634-4052-9277-68d8a02f97ab';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Dummy: Featured Series',
      'title' => 'Featured Series',
      'body' => '<center><iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6478935/events/2616010/player?width=620&amp;height=450&amp;autoPlay=fase&amp;mute=false" width="620"></iframe></center><p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2b76f4e6-a634-4052-9277-68d8a02f97ab';
    $display->content['new-2b76f4e6-a634-4052-9277-68d8a02f97ab'] = $pane;
    $display->panels['right'][1] = 'new-2b76f4e6-a634-4052-9277-68d8a02f97ab';
    $pane = new stdClass();
    $pane->pid = 'new-efc0e901-707f-427e-b9b0-c9b1a9e73a9a';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Dummy Header',
      'title' => '',
      'body' => '<iframe frameborder="0" height="450" scrolling="no" src="http://new.livestream.com/accounts/6478935/events/2616010/player?width=620&amp;height=450&amp;autoPlay=fase&amp;mute=false" width="620"></iframe>',
      'format' => 'full_html',
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
    $pane->uuid = 'efc0e901-707f-427e-b9b0-c9b1a9e73a9a';
    $display->content['new-efc0e901-707f-427e-b9b0-c9b1a9e73a9a'] = $pane;
    $display->panels['top'][0] = 'new-efc0e901-707f-427e-b9b0-c9b1a9e73a9a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mnn_homepage'] = $page;

  return $pages;

}

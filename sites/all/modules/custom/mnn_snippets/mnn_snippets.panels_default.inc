<?php
/**
 * @file
 * mnn_snippets.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function mnn_snippets_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'community_channel_featured_video';
  $mini->category = 'Channel';
  $mini->admin_title = 'Community Channel Featured Videos';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
    0 => array(
      'identifier' => 'Taxonomy vocabulary',
      'keyword' => 'taxonomy_vocabulary',
      'name' => 'entity:taxonomy_vocabulary',
      'entity_id' => '3',
      'id' => 1,
    ),
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '16ec37ce-1a0d-4a66-be6b-d02771432893';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6c1cfe5a-d2d8-4684-af8f-ce6094f00b15';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'mnn_channel_lists-mnn_channel_list_content_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '1',
      'exposed' => array(
        'tid' => array(
          20 => '20',
        ),
      ),
      'override_title' => 1,
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
    $pane->uuid = '6c1cfe5a-d2d8-4684-af8f-ce6094f00b15';
    $display->content['new-6c1cfe5a-d2d8-4684-af8f-ce6094f00b15'] = $pane;
    $display->panels['middle'][0] = 'new-6c1cfe5a-d2d8-4684-af8f-ce6094f00b15';
    $pane = new stdClass();
    $pane->pid = 'new-00bed933-8952-45a0-8244-31463af3140d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'content_listing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'exposed' => array(
        'type' => array(),
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '00bed933-8952-45a0-8244-31463af3140d';
    $display->content['new-00bed933-8952-45a0-8244-31463af3140d'] = $pane;
    $display->panels['middle'][1] = 'new-00bed933-8952-45a0-8244-31463af3140d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-6c1cfe5a-d2d8-4684-af8f-ce6094f00b15';
  $mini->display = $display;
  $export['community_channel_featured_video'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'culture_channel_featured_videos';
  $mini->category = 'Channel';
  $mini->admin_title = 'Culture Channel Featured Videos';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
    0 => array(
      'identifier' => 'Taxonomy vocabulary',
      'keyword' => 'taxonomy_vocabulary',
      'name' => 'entity:taxonomy_vocabulary',
      'entity_id' => '3',
      'id' => 1,
    ),
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '14828666-1955-4fe3-a986-b7b02d0130fa';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4f1fe3ac-aa7c-4fe4-ba6c-057848677ec2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'mnn_channel_lists-mnn_channel_list_content_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '10',
      'exposed' => array(
        'tid' => array(
          23 => '23',
        ),
      ),
      'override_title' => 1,
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
    $pane->uuid = '4f1fe3ac-aa7c-4fe4-ba6c-057848677ec2';
    $display->content['new-4f1fe3ac-aa7c-4fe4-ba6c-057848677ec2'] = $pane;
    $display->panels['middle'][0] = 'new-4f1fe3ac-aa7c-4fe4-ba6c-057848677ec2';
    $pane = new stdClass();
    $pane->pid = 'new-7f8b255b-e2d7-412d-b161-5d54c8b34691';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'content_listing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '3',
      'exposed' => array(
        'type' => array(),
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7f8b255b-e2d7-412d-b161-5d54c8b34691';
    $display->content['new-7f8b255b-e2d7-412d-b161-5d54c8b34691'] = $pane;
    $display->panels['middle'][1] = 'new-7f8b255b-e2d7-412d-b161-5d54c8b34691';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4f1fe3ac-aa7c-4fe4-ba6c-057848677ec2';
  $mini->display = $display;
  $export['culture_channel_featured_videos'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'lifestyle_channel_featured_video';
  $mini->category = 'Channel';
  $mini->admin_title = 'Lifestyle Channel Featured Videos';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
    0 => array(
      'identifier' => 'Taxonomy vocabulary',
      'keyword' => 'taxonomy_vocabulary',
      'name' => 'entity:taxonomy_vocabulary',
      'entity_id' => '3',
      'id' => 1,
    ),
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9c1840ce-9a24-49e1-adae-64ad703836f3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b3c258c-98fa-4d22-b913-f8f434d769df';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'mnn_channel_lists-mnn_channel_list_content_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '10',
      'exposed' => array(
        'tid' => array(
          22 => '22',
        ),
      ),
      'override_title' => 1,
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
    $pane->uuid = '7b3c258c-98fa-4d22-b913-f8f434d769df';
    $display->content['new-7b3c258c-98fa-4d22-b913-f8f434d769df'] = $pane;
    $display->panels['middle'][0] = 'new-7b3c258c-98fa-4d22-b913-f8f434d769df';
    $pane = new stdClass();
    $pane->pid = 'new-23de7bee-3d65-42fb-8a7e-16df12517b83';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'content_listing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '3',
      'exposed' => array(
        'type' => array(),
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '23de7bee-3d65-42fb-8a7e-16df12517b83';
    $display->content['new-23de7bee-3d65-42fb-8a7e-16df12517b83'] = $pane;
    $display->panels['middle'][1] = 'new-23de7bee-3d65-42fb-8a7e-16df12517b83';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-7b3c258c-98fa-4d22-b913-f8f434d769df';
  $mini->display = $display;
  $export['lifestyle_channel_featured_video'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'spirit_channel_featured_videos';
  $mini->category = 'Channel';
  $mini->admin_title = 'Spirit Channel Featured Videos';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array(
    0 => array(
      'identifier' => 'Taxonomy vocabulary',
      'keyword' => 'taxonomy_vocabulary',
      'name' => 'entity:taxonomy_vocabulary',
      'entity_id' => '3',
      'id' => 1,
    ),
  );
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a3d6b169-9705-4fc6-980c-70d8fb54b471';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1a858f65-cbf9-4cf6-a30a-4ac42a60b2f9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'mnn_channel_lists-mnn_channel_list_content_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '10',
      'exposed' => array(
        'tid' => array(
          21 => '21',
        ),
      ),
      'override_title' => 1,
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
    $pane->uuid = '1a858f65-cbf9-4cf6-a30a-4ac42a60b2f9';
    $display->content['new-1a858f65-cbf9-4cf6-a30a-4ac42a60b2f9'] = $pane;
    $display->panels['middle'][0] = 'new-1a858f65-cbf9-4cf6-a30a-4ac42a60b2f9';
    $pane = new stdClass();
    $pane->pid = 'new-87bbb3d3-b476-45c7-b849-64757f50965a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'content_listing-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '3',
      'exposed' => array(
        'type' => array(),
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '87bbb3d3-b476-45c7-b849-64757f50965a';
    $display->content['new-87bbb3d3-b476-45c7-b849-64757f50965a'] = $pane;
    $display->panels['middle'][1] = 'new-87bbb3d3-b476-45c7-b849-64757f50965a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1a858f65-cbf9-4cf6-a30a-4ac42a60b2f9';
  $mini->display = $display;
  $export['spirit_channel_featured_videos'] = $mini;

  return $export;
}

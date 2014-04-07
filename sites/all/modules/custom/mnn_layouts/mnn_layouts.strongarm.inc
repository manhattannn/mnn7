<?php
/**
 * @file
 * mnn_layouts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mnn_layouts_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_article';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_cm_slideshow_slide';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'rss' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'search_index' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'search_result' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'diff_standard' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_cm_slideshow_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_page';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 1,
        'choice' => 1,
      ),
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 1,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_channel';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'diff_standard' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_sections';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'diff_standard' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_sections'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_user_user';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'diff_standard' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_user_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:19:"panelizer_node:page";s:23:"allowed_layout_settings";a:11:{s:8:"flexible";b:0;s:14:"twocol_stacked";b:0;s:13:"twocol_bricks";b:0;s:6:"twocol";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"onecol";b:0;s:14:"zen_no_wrapper";b:0;s:20:"cm_theme_two_columns";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:page_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_types';
  $strongarm->value = array(
    'file_content-file_content' => 'file_content-file_content',
    'file_display-file_display' => 'file_display-file_display',
    'vocabulary_terms-vocabulary_terms' => 0,
    'user_picture-user_picture' => 0,
    'user_profile-user_profile' => 0,
    'user_signature-user_signature' => 0,
    'term_description-term_description' => 0,
    'term_list-term_list' => 0,
    'search_form-search_form' => 0,
    'search_result-search_result' => 0,
    'page_actions-page_actions' => 0,
    'page_breadcrumb-page_breadcrumb' => 0,
    'page_feed_icons-page_feed_icons' => 0,
    'page_help-page_help' => 0,
    'page_logo-page_logo' => 0,
    'page_messages-page_messages' => 0,
    'page_primary_links-page_primary_links' => 0,
    'page_secondary_links-page_secondary_links' => 0,
    'page_site_name-page_site_name' => 0,
    'page_slogan-page_slogan' => 0,
    'page_tabs-page_tabs' => 0,
    'page_title-page_title' => 0,
    'node_form_author-node_form_author' => 0,
    'node_form_buttons-node_form_buttons' => 0,
    'node_form_language-node_form_language' => 0,
    'node_form_log-node_form_log' => 0,
    'node_form_menu-node_form_menu' => 0,
    'node_form_path-node_form_path' => 0,
    'node_form_publishing-node_form_publishing' => 0,
    'node_form_title-node_form_title' => 0,
    'node_attachments-node_attachments' => 0,
    'node_author-node_author' => 0,
    'node_body-node_body' => 0,
    'node_content-node_content' => 0,
    'node_created-node_created' => 0,
    'node_links-node_links' => 0,
    'node_terms-node_terms' => 0,
    'node_title-node_title' => 0,
    'node_type_desc-node_type_desc' => 0,
    'node_updated-node_updated' => 0,
    'node-node' => 0,
    'form-form' => 0,
    'views_attachments-views_attachments' => 0,
    'views_empty-views_empty' => 0,
    'views_exposed-views_exposed' => 0,
    'views_feed-views_feed' => 0,
    'views_footer-views_footer' => 0,
    'views_header-views_header' => 0,
    'views_pager-views_pager' => 0,
    'views_row-views_row' => 0,
    'views_view-views_view' => 0,
    'panelizer_form_default-panelizer_form_default' => 0,
    'token-file:type' => 'token-file:type',
    'token-file:download-url' => 'token-file:download-url',
    'token-file:field_file_image_alt_text' => 'token-file:field_file_image_alt_text',
    'token-file:field_file_image_title_text' => 'token-file:field_file_image_title_text',
    'token-user:role-names' => 'token-user:role-names',
    'token-user:role-ids' => 'token-user:role-ids',
    'token-file-type:name' => 'token-file-type:name',
    'token-file-type:machine-name' => 'token-file-type:machine-name',
    'token-file-type:count' => 'token-file-type:count',
    'token-file-type:edit-url' => 'token-file-type:edit-url',
    'token-node:source' => 0,
    'token-node:log' => 0,
    'token-node:content-type' => 0,
    'token-node:diff' => 0,
    'token-node:diff-markdown' => 0,
    'token-node:nid' => 0,
    'token-node:vid' => 0,
    'token-node:title' => 0,
    'token-node:body' => 0,
    'token-node:summary' => 0,
    'token-node:language' => 0,
    'token-node:url' => 0,
    'token-node:edit-url' => 0,
    'token-node:created' => 0,
    'token-node:changed' => 0,
    'token-node:author' => 0,
    'token-node:uuid' => 0,
    'token-node:vuuid' => 0,
    'token-node:workbench-access-sections' => 0,
    'token-node:menu-link' => 0,
    'token-node:original' => 0,
    'token-node:field_cm_slideshow_image' => 0,
    'token-node:field_cm_sub_head' => 0,
    'token-node:field_cm_weight' => 0,
    'token-node:field_image' => 0,
    'token-node:field_site_section' => 0,
    'token-content-type:name' => 0,
    'token-content-type:machine-name' => 0,
    'token-content-type:description' => 0,
    'token-content-type:node-count' => 0,
    'token-content-type:edit-url' => 0,
    'token-term:edit-url' => 0,
    'token-term:parents' => 0,
    'token-term:root' => 0,
    'token-term:tid' => 0,
    'token-term:name' => 0,
    'token-term:description' => 0,
    'token-term:node-count' => 0,
    'token-term:url' => 0,
    'token-term:vocabulary' => 0,
    'token-term:parent' => 0,
    'token-term:uuid' => 0,
    'token-term:original' => 0,
    'token-term:field_channel_embed' => 0,
    'token-term:field_channel_id' => 0,
    'token-term:field_channel_logo' => 0,
    'token-term:field_channel_where_to_watch' => 0,
    'token-vocabulary:machine-name' => 0,
    'token-vocabulary:edit-url' => 0,
    'token-vocabulary:vid' => 0,
    'token-vocabulary:name' => 0,
    'token-vocabulary:description' => 0,
    'token-vocabulary:node-count' => 0,
    'token-vocabulary:term-count' => 0,
    'token-vocabulary:original' => 0,
    'token-file:basename' => 0,
    'token-file:extension' => 0,
    'token-file:size-raw' => 0,
    'token-file:fid' => 0,
    'token-file:name' => 0,
    'token-file:path' => 0,
    'token-file:mime' => 0,
    'token-file:size' => 0,
    'token-file:url' => 0,
    'token-file:timestamp' => 0,
    'token-file:owner' => 0,
    'token-file:uuid' => 0,
    'token-file:original' => 0,
    'token-user:cancel-url' => 0,
    'token-user:one-time-login-url' => 0,
    'token-user:picture' => 0,
    'token-user:roles' => 0,
    'token-user:uid' => 0,
    'token-user:name' => 0,
    'token-user:mail' => 0,
    'token-user:url' => 0,
    'token-user:edit-url' => 0,
    'token-user:last-login' => 0,
    'token-user:created' => 0,
    'token-user:uuid' => 0,
    'token-user:workbench-access-sections' => 0,
    'token-user:original' => 0,
    'token-current-user:ip-address' => 0,
    'token-menu-link:mlid' => 0,
    'token-menu-link:title' => 0,
    'token-menu-link:url' => 0,
    'token-menu-link:parent' => 0,
    'token-menu-link:parents' => 0,
    'token-menu-link:root' => 0,
    'token-menu-link:menu' => 0,
    'token-menu-link:edit-url' => 0,
    'token-current-page:title' => 0,
    'token-current-page:url' => 0,
    'token-current-page:page-number' => 0,
    'token-current-page:query' => 0,
    'token-url:path' => 0,
    'token-url:relative' => 0,
    'token-url:absolute' => 0,
    'token-url:brief' => 0,
    'token-url:unaliased' => 0,
    'token-url:args' => 0,
    'token-array:first' => 0,
    'token-array:last' => 0,
    'token-array:count' => 0,
    'token-array:reversed' => 0,
    'token-array:keys' => 0,
    'token-array:join' => 0,
    'token-array:value' => 0,
    'token-array:join-path' => 0,
    'token-random:number' => 0,
    'token-random:hash' => 0,
    'token-date-field-value:date' => 0,
    'token-date-field-value:to-date' => 0,
    'token-site:name' => 0,
    'token-site:slogan' => 0,
    'token-site:mail' => 0,
    'token-site:url' => 0,
    'token-site:url-brief' => 0,
    'token-site:login-url' => 0,
    'token-site:workbench-access-scheme' => 0,
    'token-date:short' => 0,
    'token-date:medium' => 0,
    'token-date:long' => 0,
    'token-date:custom' => 0,
    'token-date:since' => 0,
    'token-date:raw' => 0,
    'token-workbench-access-scheme:name' => 0,
    'token-workbench-access-scheme:machine-name' => 0,
    'token-workbench-access-scheme:description' => 0,
    'token-view:name' => 0,
    'token-view:description' => 0,
    'token-view:machine-name' => 0,
    'token-view:title' => 0,
    'token-view:url' => 0,
    'token-menu:name' => 0,
    'token-menu:machine-name' => 0,
    'token-menu:description' => 0,
    'token-menu:menu-link-count' => 0,
    'token-menu:edit-url' => 0,
    'entity_form_field-file:field_file_image_alt_text' => 'entity_form_field-file:field_file_image_alt_text',
    'entity_form_field-file:field_file_image_title_text' => 'entity_form_field-file:field_file_image_title_text',
    'entity_form_field-node:field_site_section' => 0,
    'entity_form_field-node:body' => 0,
    'entity_form_field-node:field_image' => 0,
    'entity_form_field-node:field_cm_slideshow_image' => 0,
    'entity_form_field-node:field_cm_sub_head' => 0,
    'entity_form_field-node:field_cm_weight' => 0,
    'entity_form_field-taxonomy_term:field_channel_embed' => 0,
    'entity_form_field-taxonomy_term:field_channel_id' => 0,
    'entity_form_field-taxonomy_term:field_channel_logo' => 0,
    'entity_form_field-taxonomy_term:field_channel_where_to_watch' => 0,
    'entity_field-file:field_file_image_alt_text' => 'entity_field-file:field_file_image_alt_text',
    'entity_field-file:field_file_image_title_text' => 'entity_field-file:field_file_image_title_text',
    'entity_field-node:field_site_section' => 0,
    'entity_field-node:body' => 0,
    'entity_field-node:field_image' => 0,
    'entity_field-node:field_cm_slideshow_image' => 0,
    'entity_field-node:field_cm_sub_head' => 0,
    'entity_field-node:field_cm_weight' => 0,
    'entity_field-taxonomy_term:field_channel_embed' => 0,
    'entity_field-taxonomy_term:field_channel_id' => 0,
    'entity_field-taxonomy_term:field_channel_logo' => 0,
    'entity_field-taxonomy_term:field_channel_where_to_watch' => 0,
    'entity_field_extra-file:file' => 'entity_field_extra-file:file',
    'entity_field_extra-fieldable_panels_pane:title' => 0,
    'entity_field_extra-taxonomy_term:description' => 0,
    'entity_field_extra-user:summary' => 0,
    'custom-custom' => 'custom-custom',
    'block-apachesolr_search-mlt-001' => 0,
    'block-apachesolr_search-sort' => 0,
    'block-diff-inline' => 0,
    'block-menu-devel' => 0,
    'block-node-syndicate' => 0,
    'block-node-recent' => 0,
    'block-search-form' => 0,
    'block-shortcut-shortcuts' => 0,
    'block-solr_devel-query_debug' => 0,
    'block-system-powered-by' => 0,
    'block-system-help' => 0,
    'block-system-navigation' => 0,
    'block-system-management' => 0,
    'block-system-user-menu' => 0,
    'block-system-main-menu' => 0,
    'block-user-login' => 0,
    'block-user-new' => 0,
    'block-user-online' => 0,
    'block-workbench-block' => 0,
    'block-devel-execute_php' => 0,
    'block-devel-switch_user' => 0,
    'block-cm_starterkit_easy-cmdrupal_credit' => 0,
    'block-cm_starterkit_easy-cm_theme_logo' => 0,
    'entity_view-node' => 'entity_view-node',
    'entity_view-file' => 'entity_view-file',
    'entity_view-fieldable_panels_pane' => 0,
    'entity_view-taxonomy_term' => 0,
    'entity_view-user' => 0,
    'fieldable_panels_pane-fieldable_panels_pane' => 'fieldable_panels_pane-fieldable_panels_pane',
    'fieldable_panels_pane-uuid:db2d981c-c406-4d9b-82ac-9f7511fc8110' => 'fieldable_panels_pane-uuid:db2d981c-c406-4d9b-82ac-9f7511fc8110',
    'panels_mini-sidebar' => 0,
    'views-media_default' => 'views-media_default',
    'views-content_listing' => 0,
    'views-cm_slideshow' => 0,
    'views-fieldable_pane_entities' => 0,
    'views-fieldable_pane_entity_revisions' => 0,
    'views-news' => 0,
    'views-workbench_access_content' => 0,
    'views-workbench_current_user' => 0,
    'views-workbench_edited' => 0,
    'views-workbench_recent_content' => 0,
    'views_panes-content_listing-mnn_content_listing' => 'views_panes-content_listing-mnn_content_listing',
  );
  $export['panelizer_node:page_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:page_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:page_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'panels_mini' => 'panels_mini',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:page_default'] = $strongarm;

  return $export;
}

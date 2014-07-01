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
  $strongarm->name = 'ds_extras_fields_extra';
  $strongarm->value = 0;
  $export['ds_extras_fields_extra'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_fields_extra_list';
  $strongarm->value = '';
  $export['ds_extras_fields_extra_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_field_permissions';
  $strongarm->value = 0;
  $export['ds_extras_field_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_field_template';
  $strongarm->value = 0;
  $export['ds_extras_field_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_hidden_region';
  $strongarm->value = 0;
  $export['ds_extras_hidden_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_hide_page_sidebars';
  $strongarm->value = 0;
  $export['ds_extras_hide_page_sidebars'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_hide_page_title';
  $strongarm->value = 1;
  $export['ds_extras_hide_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_region_to_block';
  $strongarm->value = 1;
  $export['ds_extras_region_to_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_switch_field';
  $strongarm->value = 1;
  $export['ds_extras_switch_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_switch_view_mode';
  $strongarm->value = 0;
  $export['ds_extras_switch_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_vd';
  $strongarm->value = 1;
  $export['ds_extras_vd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_current_filters_default';
  $strongarm->value = 1;
  $export['ds_search_apachesolr_current_filters_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_hide_current_filters';
  $strongarm->value = 1;
  $export['ds_search_apachesolr_hide_current_filters'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_multisite';
  $strongarm->value = 1;
  $export['ds_search_apachesolr_multisite'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_multisite_boost';
  $strongarm->value = 0;
  $export['ds_search_apachesolr_multisite_boost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_multisite_group';
  $strongarm->value = 0;
  $export['ds_search_apachesolr_multisite_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_multisite_group_config';
  $strongarm->value = '';
  $export['ds_search_apachesolr_multisite_group_config'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_file_render';
  $strongarm->value = 0;
  $export['ds_search_file_render'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_group_by_type';
  $strongarm->value = 0;
  $export['ds_search_group_by_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_group_by_type_other';
  $strongarm->value = 'Other';
  $export['ds_search_group_by_type_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_group_by_type_other_wrapper';
  $strongarm->value = 'fieldset';
  $export['ds_search_group_by_type_other_wrapper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_group_by_type_settings';
  $strongarm->value = array(
    'article' => array(
      'status' => 1,
      'label' => 'Results for article',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'page' => array(
      'status' => 1,
      'label' => 'Results for basic page',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
  );
  $export['ds_search_group_by_type_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_highlight';
  $strongarm->value = 1;
  $export['ds_search_highlight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_highlight_selector';
  $strongarm->value = '.view-mode-search_result';
  $export['ds_search_highlight_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_language';
  $strongarm->value = 0;
  $export['ds_search_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_node_form_alter';
  $strongarm->value = 0;
  $export['ds_search_node_form_alter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_node_limit';
  $strongarm->value = '10';
  $export['ds_search_node_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_path';
  $strongarm->value = 'ds';
  $export['ds_search_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_show_title';
  $strongarm->value = 0;
  $export['ds_search_show_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_type';
  $strongarm->value = 'apachesolr_search';
  $export['ds_search_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_variables';
  $strongarm->value = 'none';
  $export['ds_search_variables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_view_mode';
  $strongarm->value = 'search_result';
  $export['ds_search_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fitvids_customselectors';
  $strongarm->value = 'http://new.livestream.com';
  $export['fitvids_customselectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fitvids_selectors';
  $strongarm->value = 'body
field-name-field-channel-embed';
  $export['fitvids_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fitvids_simplifymarkup';
  $strongarm->value = 1;
  $export['fitvids_simplifymarkup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_fieldable_panels_pane_snippets_snippet';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_fieldable_panels_pane_snippets_snippet'] = $strongarm;

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
      'teaser' => array(
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
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
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
    'file_content-file_content' => 0,
    'file_display-file_display' => 0,
    'views_attachments-views_attachments' => 0,
    'views_empty-views_empty' => 0,
    'views_exposed-views_exposed' => 0,
    'views_feed-views_feed' => 0,
    'views_footer-views_footer' => 0,
    'views_header-views_header' => 0,
    'views_pager-views_pager' => 0,
    'views_row-views_row' => 0,
    'views_view-views_view' => 0,
    'dsc-dsc' => 0,
    'panelizer_form_default-panelizer_form_default' => 0,
    'token-node:source' => 0,
    'token-node:log' => 0,
    'token-node:content-type' => 0,
    'token-node:diff' => 0,
    'token-node:diff-markdown' => 0,
    'token-node:menu-link' => 0,
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
    'token-node:original' => 0,
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
    'token-file:type' => 0,
    'token-file:download-url' => 0,
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
    'token-file:field_file_image_alt_text' => 0,
    'token-file:field_file_image_title_text' => 0,
    'token-user:cancel-url' => 0,
    'token-user:one-time-login-url' => 0,
    'token-user:picture' => 0,
    'token-user:roles' => 0,
    'token-user:role-names' => 0,
    'token-user:role-ids' => 0,
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
    'token-file-type:name' => 0,
    'token-file-type:machine-name' => 0,
    'token-file-type:count' => 0,
    'token-file-type:edit-url' => 0,
    'token-menu:name' => 0,
    'token-menu:machine-name' => 0,
    'token-menu:description' => 0,
    'token-menu:menu-link-count' => 0,
    'token-menu:edit-url' => 0,
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
    'entity_form_field-fieldable_panels_pane:field_body' => 0,
    'entity_form_field-node:field_site_section' => 0,
    'entity_form_field-node:body' => 0,
    'entity_form_field-node:field_image' => 0,
    'entity_form_field-file:field_file_image_alt_text' => 0,
    'entity_form_field-file:field_file_image_title_text' => 0,
    'entity_form_field-taxonomy_term:field_channel_embed' => 0,
    'entity_form_field-taxonomy_term:field_channel_id' => 0,
    'entity_form_field-taxonomy_term:field_channel_logo' => 0,
    'entity_form_field-taxonomy_term:field_channel_where_to_watch' => 0,
    'entity_field-fieldable_panels_pane:field_body' => 0,
    'entity_field-node:field_site_section' => 0,
    'entity_field-node:body' => 0,
    'entity_field-node:field_image' => 0,
    'entity_field-file:field_file_image_alt_text' => 0,
    'entity_field-file:field_file_image_title_text' => 0,
    'entity_field-taxonomy_term:field_channel_embed' => 0,
    'entity_field-taxonomy_term:field_channel_id' => 0,
    'entity_field-taxonomy_term:field_channel_logo' => 0,
    'entity_field-taxonomy_term:field_channel_where_to_watch' => 0,
    'entity_field_extra-fieldable_panels_pane:title' => 0,
    'entity_field_extra-file:file' => 0,
    'entity_field_extra-taxonomy_term:description' => 0,
    'entity_field_extra-user:summary' => 0,
    'custom-custom' => 0,
    'block-apachesolr_search-mlt-001' => 0,
    'block-apachesolr_search-sort' => 0,
    'block-diff-inline' => 0,
    'block-menu-devel' => 0,
    'block-menu-features' => 0,
    'block-mnn_show-watch_now' => 0,
    'block-mnn_show-sch_geolocator_and_ch_listing' => 0,
    'block-mnn_show-channel_listing' => 0,
    'block-mnn_show-youth_channel_listing' => 0,
    'block-mnn_show-youth_channel_intro' => 0,
    'block-mnn_show-youth_channel_playing_now' => 0,
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
    'fieldable_panels_pane-snippets_snippet' => 'fieldable_panels_pane-snippets_snippet',
    'fieldable_panels_pane-uuid:9e845aae-7c3e-47ea-b028-f28477f702b3' => 'fieldable_panels_pane-uuid:9e845aae-7c3e-47ea-b028-f28477f702b3',
    'fieldable_panels_pane-uuid:068d0c80-64da-4565-8721-2972a53d9d82' => 'fieldable_panels_pane-uuid:068d0c80-64da-4565-8721-2972a53d9d82',
    'fieldable_panels_pane-uuid:647127f0-303d-4564-9035-139af4b8be81' => 'fieldable_panels_pane-uuid:647127f0-303d-4564-9035-139af4b8be81',
    'fieldable_panels_pane-uuid:48449e70-ab2c-4b60-aa40-eb4ca41eb839' => 'fieldable_panels_pane-uuid:48449e70-ab2c-4b60-aa40-eb4ca41eb839',
    'panels_mini-sidebar' => 0,
    'views-content_listing' => 0,
    'views-fieldable_pane_entities' => 0,
    'views-fieldable_pane_entity_revisions' => 0,
    'views-media_default' => 0,
    'views-mnn_channel_lists' => 0,
    'views-workbench_access_content' => 0,
    'views-workbench_current_user' => 0,
    'views-workbench_edited' => 0,
    'views-workbench_recent_content' => 0,
    'views_panes-content_listing-mnn_snippets_recent_content_pane' => 'views_panes-content_listing-mnn_snippets_recent_content_pane',
    'views_panes-content_listing-mnn_snippets_section_content_pane' => 'views_panes-content_listing-mnn_snippets_section_content_pane',
    'views_panes-mnn_channel_lists-mnn_channel_list_content_pane' => 'views_panes-mnn_channel_lists-mnn_channel_list_content_pane',
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
    'block' => 'block',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'panels_mini' => 'panels_mini',
    'views_panes' => 'views_panes',
    'token' => 0,
    'entity_form_field' => 0,
    'entity_field' => 0,
    'entity_field_extra' => 0,
    'custom' => 0,
    'entity_view' => 0,
    'views' => 0,
    'other' => 0,
  );
  $export['panelizer_node:page_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_cm_theme_zen_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 1,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_html5_respond_meta' => array(
      'respond' => 'respond',
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 0,
    'zen_wireframes' => 0,
    'user_menu' => 0,
    'responsive_nav' => 0,
    'sticky_footer' => 1,
  );
  $export['theme_cm_theme_zen_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'mnn_theme';
  $export['theme_default'] = $strongarm;

  return $export;
}

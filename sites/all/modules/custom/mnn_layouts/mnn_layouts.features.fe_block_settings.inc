<?php
/**
 * @file
 * mnn_layouts.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mnn_layouts_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['apachesolr_search-mlt-001'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'mlt-001',
    'module' => 'apachesolr_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['apachesolr_search-sort'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sort',
    'module' => 'apachesolr_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['cm_starterkit_easy-cm_theme_logo'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'cm_theme_logo',
    'module' => 'cm_starterkit_easy',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 9,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 9,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['cm_starterkit_easy-cmdrupal_credit'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'cmdrupal_credit',
    'module' => 'cm_starterkit_easy',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'cm_theme_zen',
        'weight' => -9,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -12,
      ),
      'mnn_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'mnn_theme',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['diff-inline'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'inline',
    'module' => 'diff',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['mnn_show-channel_listing'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'channel_listing',
    'module' => 'mnn_show',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['mnn_show-sch_geolocator_and_ch_listing'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sch_geolocator_and_ch_listing',
    'module' => 'mnn_show',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['mnn_show-watch_now'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'watch_now',
    'module' => 'mnn_show',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'cm_theme_zen',
        'weight' => -16,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['mnn_show-youth_channel_intro'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'youth_channel_intro',
    'module' => 'mnn_show',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['mnn_show-youth_channel_listing'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'youth_channel_listing',
    'module' => 'mnn_show',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['mnn_show-youth_channel_playing_now'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'youth_channel_playing_now',
    'module' => 'mnn_show',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['panels_mini-sidebar'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sidebar',
    'module' => 'panels_mini',
    'node_types' => array(),
    'pages' => 'schedule',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => -17,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'mnn_theme',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'cm_theme_zen',
        'weight' => 8,
      ),
      'ember' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'ember',
        'weight' => -8,
      ),
      'mnn_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'mnn_theme',
        'weight' => 8,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['solr_devel-query_debug'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'query_debug',
    'module' => 'solr_devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ember',
        'weight' => -15,
      ),
      'mnn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ember',
        'weight' => -13,
      ),
      'mnn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -11,
      ),
      'mnn_theme' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => 'Main Menu',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -10,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 10,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 10,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'cm_theme_zen',
        'weight' => -18,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => -9,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-9cf22433e0efbd8b206c8e4c2edb177c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '9cf22433e0efbd8b206c8e4c2edb177c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-workbench_current_user-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'workbench_current_user-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-workbench_edited-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'workbench_edited-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cm_theme_zen',
        'weight' => 0,
      ),
      'ember' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ember',
        'weight' => 0,
      ),
      'mnn_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'mnn_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['workbench-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block',
    'module' => 'workbench',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cm_theme_zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'cm_theme_zen',
        'weight' => -15,
      ),
      'ember' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ember',
        'weight' => -14,
      ),
      'mnn_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'mnn_theme',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}

<?php
/**
 * @file
 * mnn_snippets.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mnn_snippets_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-mailchimp_signup'] = array(
    'cache' => -1,
    'css_class' => 'mailchimp-signup',
    'custom' => 0,
    'machine_name' => 'mailchimp_signup',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'news',
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'mnn_theme',
        'weight' => -18,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-mailchimp_signup_news_page'] = array(
    'cache' => -1,
    'css_class' => 'mailchimp-signup news-page',
    'custom' => 0,
    'machine_name' => 'mailchimp_signup_news_page',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'news',
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'mnn_theme',
        'weight' => -21,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-producer_login'] = array(
    'cache' => -1,
    'css_class' => 'producer-login',
    'custom' => 0,
    'machine_name' => 'producer_login',
    'module' => 'block',
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'mnn_theme',
        'weight' => -20,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-cm_slideshow-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'cm_slideshow-block',
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

  return $export;
}

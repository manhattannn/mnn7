<?php
/**
 * @file
 * mnn_search.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function mnn_search_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'core_search';
  $searcher->label = 'Core Search';
  $searcher->description = 'Core Search';
  $searcher->search_path = 'search/solr';
  $searcher->page_title = 'Site';
  $searcher->env_id = 'solr';
  $searcher->settings = array(
    'fq' => array(),
    'apachesolr_search_custom_enable' => 0,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_allow_user_input' => 0,
    'apachesolr_search_browse' => 'browse',
  );
  $export['core_search'] = $searcher;

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'taxonomy_search';
  $searcher->label = 'Taxonomy Search';
  $searcher->description = 'Search all items with given term';
  $searcher->search_path = 'taxonomy/term/%';
  $searcher->page_title = '%value';
  $searcher->env_id = '';
  $searcher->settings = array(
    'apachesolr_search_search_type' => 'tid',
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_browse' => 'results',
    'apachesolr_search_spellcheck' => FALSE,
    'apachesolr_search_search_box' => FALSE,
  );
  $export['taxonomy_search'] = $searcher;

  return $export;
}

<?php
/**
 * @file
 * mnn_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function mnn_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8080/solr-mnn_cm';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 1,
    'apachesolr_index_last' => array(),
    'apachesolr_index_updated' => 1395677846,
    'apachesolr_last_optimize' => 1395677833,
    'apachesolr_read_only' => '0',
    'apachesolr_soft_commit' => 1,
    'multisitesearch' => 1,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'page',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}

<?php
/**
 * @file
 * mnn_channel.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mnn_channel_taxonomy_default_vocabularies() {
  return array(
    'channel' => array(
      'name' => 'Channel',
      'machine_name' => 'channel',
      'description' => 'Categorizes content for organizations with more than one channel.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}

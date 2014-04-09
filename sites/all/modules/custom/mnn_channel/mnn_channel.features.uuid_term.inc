<?php
/**
 * @file
 * mnn_channel.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function mnn_channel_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Channel 1',
    'description' => 'A DESCRIPTION',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2e0d0324-9e6c-4587-ba50-669fdd924689',
    'vocabulary_machine_name' => 'channel',
    'field_channel_embed' => array(),
    'field_channel_id' => array(
      'und' => array(
        0 => array(
          'value' => 1,
        ),
      ),
    ),
    'field_channel_logo' => array(),
    'field_channel_where_to_watch' => array(
      'und' => array(
        0 => array(
          'first' => 123,
          'second' => 456,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Channel 3',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '37d88f4f-6e0b-4b53-b802-d3ee547d4ca6',
    'vocabulary_machine_name' => 'channel',
    'field_channel_embed' => array(),
    'field_channel_id' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'field_channel_logo' => array(),
    'field_channel_where_to_watch' => array(),
  );
  $terms[] = array(
    'name' => 'Channel 2',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6ef4e31d-7b5a-4dec-9d10-8a47d3a8afd3',
    'vocabulary_machine_name' => 'channel',
    'field_channel_embed' => array(),
    'field_channel_id' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'field_channel_logo' => array(),
    'field_channel_where_to_watch' => array(),
  );
  $terms[] = array(
    'name' => 'Channel 4',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '73911ba6-0a70-4beb-af93-9f420a9af7d7',
    'vocabulary_machine_name' => 'channel',
    'field_channel_embed' => array(),
    'field_channel_id' => array(
      'und' => array(
        0 => array(
          'value' => 4,
        ),
      ),
    ),
    'field_channel_logo' => array(),
    'field_channel_where_to_watch' => array(),
  );
  return $terms;
}

<?php
/**
 * @file
 * mnn_video_feeds.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function mnn_video_feeds_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Producer Videos: Vimeo',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'aaa17a25-f634-4e25-ae47-a9e7eaa604de',
  'ds_switch' => '',
  'type' => 'mnn_video_feed',
  'language' => 'und',
  'created' => 1402695249,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '02429f6e-d990-4ef9-9e81-868e04257499',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Videos on Vimeo tagged with"mnnnyc"by MNN Producers.
',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Videos on Vimeo tagged with&quot;mnnnyc&quot;by MNN Producers.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_site_section' => array(
    'und' => array(
      0 => array(
        'tid' => 49,
        'uuid' => 'bf1ae404-1a05-4c4b-85aa-7d3be9ea4b4a',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
  'workbench_access' => array(
    49 => 49,
  ),
  'date' => '2014-06-13 17:34:09 -0400',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Example Vimeo Album',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9bda9547-3050-4779-8c4a-9ad5f8d8647a',
  'ds_switch' => '',
  'type' => 'mnn_video_feed',
  'language' => 'und',
  'created' => 1402695822,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '34c35a72-7260-461b-88c7-64d21a68582d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'This is currently the only album on the vimeo account. But the idea is once videos are in the correct albums, you can create a Feed for each album and place it into the appropriate section.
',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>This is currently the only album on the vimeo account. But the idea is once videos are in the correct albums, you can create a Feed for each album and place it into the appropriate section.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_site_section' => array(
    'und' => array(
      0 => array(
        'tid' => 48,
        'uuid' => 'ac0fba0b-093d-43af-86a4-05f2c46505cd',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
  'workbench_access' => array(
    48 => 48,
  ),
  'date' => '2014-06-13 17:43:42 -0400',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Producer Videos: YouTube',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cdf0b6c5-d610-476a-ae6c-76e082b6756a',
  'ds_switch' => '',
  'type' => 'mnn_video_feed',
  'language' => 'und',
  'created' => 1402695061,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4f86ce44-ab3e-4c61-8b93-9409b2260959',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Videos that were tagged with "mnnnyc" by MNN Producers on YouTube
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Videos that were tagged with "mnnnyc" by MNN Producers on YouTube</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_site_section' => array(
    'und' => array(
      0 => array(
        'tid' => 49,
        'uuid' => 'bf1ae404-1a05-4c4b-85aa-7d3be9ea4b4a',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
  'workbench_access' => array(
    49 => 49,
  ),
  'date' => '2014-06-13 17:31:01 -0400',
);
  return $nodes;
}

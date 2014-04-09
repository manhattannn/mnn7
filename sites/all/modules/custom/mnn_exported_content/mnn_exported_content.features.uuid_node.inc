<?php
/**
 * @file
 * mnn_exported_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function mnn_exported_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 29,
  'title' => 'What\'s On',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e8ad375f-f62f-4759-9c04-4ed0bb38de93',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1396301487,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '00366883-f866-41ac-a941-2f41727c0afc',
  'revision_uid' => 29,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<br />
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(),
  'field_site_section' => array(
    'und' => array(
      0 => array(
        'tid' => 18,
        'uuid' => '42c001b9-f87a-495a-8c53-4d51d5317983',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'panelizer' => array(
    'default' => array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Default',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => FALSE,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => TRUE,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-24ae844c-e357-4808-a63f-daccd2894ccd' => array(
            'pid' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'large',
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '24ae844c-e357-4808-a63f-daccd2894ccd',
          ),
          'new-c9e786f8-a745-41ab-8044-af6fea00b805' => array(
            'pid' => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9e786f8-a745-41ab-8044-af6fea00b805',
          ),
          'new-52454388-9cd5-4a41-91d3-3fbc213232ce' => array(
            'pid' => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'panels' => array(
          'top' => array(
            0 => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            1 => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            2 => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'cm_theme_two_columns',
        'layout_settings' => array(
          'top_classes' => '',
          'center_classes' => '',
          'left_classes' => '',
          'right_classes' => '',
          'bottom_classes' => '',
        ),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'middle' => NULL,
            'top' => NULL,
            'center' => NULL,
            'left' => NULL,
            'right' => NULL,
            'bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
        'hide_title' => 0,
        'title_pane' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
      ),
      'export_module' => 'mnn_layouts',
      'type' => 'Default',
      'export_type' => 2,
      'in_code_only' => TRUE,
      'table' => 'panelizer_defaults',
      'did' => NULL,
    ),
  ),
  'name' => 'Craig',
  'picture' => 0,
  'data' => 'a:6:{s:7:"overlay";i:1;s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'workbench_access' => array(
    18 => 18,
  ),
  'date' => '2014-03-31 17:31:27 -0400',
);
  $nodes[] = array(
  'uid' => 29,
  'title' => 'Get Involved',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '31fc2184-15a4-41cd-9d7d-209d4ca0f2b1',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1396301326,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '48b54240-09d7-4564-9a3f-b0657ac30ade',
  'revision_uid' => 29,
  'body' => array(),
  'field_image' => array(),
  'field_site_section' => array(
    'und' => array(
      0 => array(
        'tid' => 16,
        'uuid' => '87a044fd-1273-45d8-b072-fc5e4b06693f',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'panelizer' => array(
    'default' => array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Default',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => FALSE,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => TRUE,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-24ae844c-e357-4808-a63f-daccd2894ccd' => array(
            'pid' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'large',
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '24ae844c-e357-4808-a63f-daccd2894ccd',
          ),
          'new-c9e786f8-a745-41ab-8044-af6fea00b805' => array(
            'pid' => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9e786f8-a745-41ab-8044-af6fea00b805',
          ),
          'new-52454388-9cd5-4a41-91d3-3fbc213232ce' => array(
            'pid' => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'panels' => array(
          'top' => array(
            0 => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            1 => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            2 => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'cm_theme_two_columns',
        'layout_settings' => array(
          'top_classes' => '',
          'center_classes' => '',
          'left_classes' => '',
          'right_classes' => '',
          'bottom_classes' => '',
        ),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'middle' => NULL,
            'top' => NULL,
            'center' => NULL,
            'left' => NULL,
            'right' => NULL,
            'bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
        'hide_title' => 0,
        'title_pane' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
      ),
      'export_module' => 'mnn_layouts',
      'type' => 'Default',
      'export_type' => 2,
      'in_code_only' => TRUE,
      'table' => 'panelizer_defaults',
      'did' => NULL,
    ),
  ),
  'name' => 'Craig',
  'picture' => 0,
  'data' => 'a:6:{s:7:"overlay";i:1;s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'workbench_access' => array(
    16 => 16,
  ),
  'date' => '2014-03-31 17:28:46 -0400',
);
  $nodes[] = array(
  'uid' => 29,
  'title' => 'Locations',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4b8300ed-0f92-42db-a18e-d09920750191',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1396301240,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '51179955-454e-4c3e-8d86-3943392e3f26',
  'revision_uid' => 29,
  'body' => array(),
  'field_image' => array(),
  'field_site_section' => array(
    'und' => array(
      0 => array(
        'tid' => 15,
        'uuid' => '0a84e4a1-4f32-4bdb-95fa-4db1cbc78cf5',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'panelizer' => array(
    'default' => array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Default',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => FALSE,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => TRUE,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-24ae844c-e357-4808-a63f-daccd2894ccd' => array(
            'pid' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'large',
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '24ae844c-e357-4808-a63f-daccd2894ccd',
          ),
          'new-c9e786f8-a745-41ab-8044-af6fea00b805' => array(
            'pid' => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9e786f8-a745-41ab-8044-af6fea00b805',
          ),
          'new-52454388-9cd5-4a41-91d3-3fbc213232ce' => array(
            'pid' => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'panels' => array(
          'top' => array(
            0 => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            1 => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            2 => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'cm_theme_two_columns',
        'layout_settings' => array(
          'top_classes' => '',
          'center_classes' => '',
          'left_classes' => '',
          'right_classes' => '',
          'bottom_classes' => '',
        ),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'middle' => NULL,
            'top' => NULL,
            'center' => NULL,
            'left' => NULL,
            'right' => NULL,
            'bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
        'hide_title' => 0,
        'title_pane' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
      ),
      'export_module' => 'mnn_layouts',
      'type' => 'Default',
      'export_type' => 2,
      'in_code_only' => TRUE,
      'table' => 'panelizer_defaults',
      'did' => NULL,
    ),
  ),
  'name' => 'Craig',
  'picture' => 0,
  'data' => 'a:6:{s:7:"overlay";i:1;s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'workbench_access' => array(
    15 => 15,
  ),
  'date' => '2014-03-31 17:27:20 -0400',
);
  $nodes[] = array(
  'uid' => 29,
  'title' => 'About Us',
  'log' => 'Added Photo Credit',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '39eff776-c289-4ab9-8259-25df6d60d84a',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1396283662,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5f7e6b42-45a9-4c15-a6ca-24df26262668',
  'revision_uid' => 29,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="about-info">
	<p>Founded in 1992, Manhattan Neighborhood Network (MNN) is Manhattan’s free, public access cable network. We operate two media production and education facilities in Manhattan and run four cablecast channels (<a data-mce-="" href="http://www.mnn.org/live/1-community-channel">Community</a>,&nbsp;<a data-mce-="" href="http://www.mnn.org/live/2-lifestyle-channel">Lifestyle</a>,&nbsp;<a data-mce-="" href="http://www.mnn.org/live/3-spirit-channel">Spirit</a>, and&nbsp;<a data-mce-="" href="http://www.mnn.org/live/4-culture-channel">Culture</a>), reaching 620,000 cable subscribers in the borough.</p>
	[[asset:image:1 {"mode":"full","align":"","field_asset_image_copyright":["Photo by Jeff Howard"],"field_asset_image_description":[]}]]
	<p>MNN offers free training in video production, editing, and broadcasting to Manhattan residents who wish to become Certified Producers with MNN.</p>
	<p>We actively strive to empower Manhattan residents to exercise their First Amendment rights in an open, uncensored, and equitable forum.</p>
	<h5>
		Our Mission</h5>
	<p>MNN is responsible for administering the public access cable TV services in Manhattan. Our purpose is to ensure the ability of Manhattan residents to exercise their First Amendment rights through moving image media to create opportunities for communication, education, artistic expression and other non-commercial uses of video facilities on an open and equitable basis.&nbsp;</p>
	<p>In providing services, we seek to involve the diverse racial, ethnic and geographic communities of Manhattan in the electronic communication of their varied interest, needs, concerns and identities.</p>
	<p>&nbsp;</p>
</div>
<div class="clearfix">
	<h4 data-mce-style=" 18px;">
		MNN El Barrio Firehouse Community Center</h4>
	[[asset:image:2 {"mode":"full","align":"","field_asset_image_copyright":[],"field_asset_image_description":[]}]]
	<p>In 2007, MNN committed to expand its community media services and identified the East 104th Street Firehouse as a potential site for this purpose. After conducting an extensive architectural, engineering and environmental assessment of the Firehouse, MNN decided to purchase it. The historic building constructed in 1883 achieved landmark status, and MNN began a total renovation.</p>
	<p><a data-mce-="" href="http://www.mnn.org/about-us/firehouse">Learn More</a></p>
</div>
<div class="channel-info">
	<h4>
		Channel Guide</h4>
	<ul>
		<li>
			<div class="copy-column">
				<h5>
					1 Community Channel</h5>
				<p class="metadata">Time Warner Cable 34 and 1995 | RCN 82 | FiOS 33</p>
				<p>Stay up-to-date on local elections, New York politics, and community issues with our Community channel.</p>
				<p><a data-mce-="" href="http://www.mnn.org/live/1-community-channel">Watch Live</a></p>
			</div>
		</li>
		<li>
			<div class="copy-column">
				<h5>
					2 Lifestyle Channel</h5>
				<p class="metadata">Time Warner Cable 56 and 1996 | RCN 83 | FiOS 34</p>
				<p>Exercise your mind, body, and palate with entertainment and lifestyle programming for New Yorkers with interests as diverse as our city.</p>
				<p><a data-mce-="" href="http://www.mnn.org/live/2-lifestyle-channel">Watch Live</a></p>
			</div>
		</li>
		<li>
			<div class="copy-column">
				<h5>
					3 Spirit Channel</h5>
				<p class="metadata">Time Warner Cable 1997 | RCN 84 | FiOS 35</p>
				<p>Our Spirit channel broadcasts varied religious and philosophical services, lectures, and discussions for all faiths and worldviews.</p>
				<p><a data-mce-="" href="http://www.mnn.org/live/3-spirit-channel">Watch Live</a></p>
			</div>
		</li>
		<li>
			<div class="copy-column">
				<h5>
					4 Culture Channel</h5>
				<p class="metadata">Time Warner Cable 67 and 1998 | RCN 85 | FiOS 36</p>
				<p>Multi-lingual programming that covers the arts, politics, and global news for all of Manhattan’s diverse communities.</p>
				<p><a data-mce-="" href="http://www.mnn.org/live/4-culture-channel">Watch Live</a></p>
			</div>
		</li>
	</ul>
</div>
<br />
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Founded in 1992, Manhattan Neighborhood Network (MNN) is Manhattan’s free, public access cable network. We operate two media production and education facilities in Manhattan and run four cablecast channels (<a data-mce-="" href="http://www.mnn.org/live/1-community-channel">Community</a>,&nbsp;<a data-mce-="" href="http://www.mnn.org/live/2-lifestyle-channel">Lifestyle</a>,&nbsp;<a data-mce-="" href="http://www.mnn.org/live/3-spirit-channel">Spirit</a>, and&nbsp;<a data-mce-="" href="http://www.mnn.org/live/4-culture-channel">Culture</a>), reaching 620,000 cable subscribers in the borough.</p>
<p>	</p>
<p>MNN offers free training in video production, editing, and broadcasting to Manhattan residents who wish to become Certified Producers with MNN.</p>
<p>We actively strive to empower Manhattan residents to exercise their First Amendment rights in an open, uncensored, and equitable forum.</p>
<h5>
		Our Mission</h5>
<p>MNN is responsible for administering the public access cable TV services in Manhattan. Our purpose is to ensure the ability of Manhattan residents to exercise their First Amendment rights through moving image media to create opportunities for communication, education, artistic expression and other non-commercial uses of video facilities on an open and equitable basis.&nbsp;</p>
<p>In providing services, we seek to involve the diverse racial, ethnic and geographic communities of Manhattan in the electronic communication of their varied interest, needs, concerns and identities.</p>
<p>&nbsp;</p>
<h4 data-mce-style=" 18px;">
		MNN El Barrio Firehouse Community Center</h4>
<p>	</p>
<p>In 2007, MNN committed to expand its community media services and identified the East 104th Street Firehouse as a potential site for this purpose. After conducting an extensive architectural, engineering and environmental assessment of the Firehouse, MNN decided to purchase it. The historic building constructed in 1883 achieved landmark status, and MNN began a total renovation.</p>
<p><a data-mce-="" href="http://www.mnn.org/about-us/firehouse">Learn More</a></p>
<h4>
		Channel Guide</h4>
<ul>
<li>
<h5>
					1 Community Channel</h5>
<p class="metadata">Time Warner Cable 34 and 1995 | RCN 82 | FiOS 33</p>
<p>Stay up-to-date on local elections, New York politics, and community issues with our Community channel.</p>
<p><a data-mce-="" href="http://www.mnn.org/live/1-community-channel">Watch Live</a></p>
</li>
<li>
<h5>
					2 Lifestyle Channel</h5>
<p class="metadata">Time Warner Cable 56 and 1996 | RCN 83 | FiOS 34</p>
<p>Exercise your mind, body, and palate with entertainment and lifestyle programming for New Yorkers with interests as diverse as our city.</p>
<p><a data-mce-="" href="http://www.mnn.org/live/2-lifestyle-channel">Watch Live</a></p>
</li>
<li>
<h5>
					3 Spirit Channel</h5>
<p class="metadata">Time Warner Cable 1997 | RCN 84 | FiOS 35</p>
<p>Our Spirit channel broadcasts varied religious and philosophical services, lectures, and discussions for all faiths and worldviews.</p>
<p><a data-mce-="" href="http://www.mnn.org/live/3-spirit-channel">Watch Live</a></p>
</li>
<li>
<h5>
					4 Culture Channel</h5>
<p class="metadata">Time Warner Cable 67 and 1998 | RCN 85 | FiOS 36</p>
<p>Multi-lingual programming that covers the arts, politics, and global news for all of Manhattan’s diverse communities.</p>
<p><a data-mce-="" href="http://www.mnn.org/live/4-culture-channel">Watch Live</a></p>
</li>
</ul>
<p></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(),
  'field_site_section' => array(
    'und' => array(
      0 => array(
        'tid' => 15,
        'uuid' => '0a84e4a1-4f32-4bdb-95fa-4db1cbc78cf5',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'panelizer' => array(
    'default' => array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Default',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => FALSE,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => TRUE,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-24ae844c-e357-4808-a63f-daccd2894ccd' => array(
            'pid' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'large',
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '24ae844c-e357-4808-a63f-daccd2894ccd',
          ),
          'new-c9e786f8-a745-41ab-8044-af6fea00b805' => array(
            'pid' => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9e786f8-a745-41ab-8044-af6fea00b805',
          ),
          'new-52454388-9cd5-4a41-91d3-3fbc213232ce' => array(
            'pid' => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'panels' => array(
          'top' => array(
            0 => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            1 => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            2 => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'cm_theme_two_columns',
        'layout_settings' => array(
          'top_classes' => '',
          'center_classes' => '',
          'left_classes' => '',
          'right_classes' => '',
          'bottom_classes' => '',
        ),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'middle' => NULL,
            'top' => NULL,
            'center' => NULL,
            'left' => NULL,
            'right' => NULL,
            'bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
        'hide_title' => 0,
        'title_pane' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
      ),
      'export_module' => 'mnn_layouts',
      'type' => 'Default',
      'export_type' => 2,
      'in_code_only' => TRUE,
      'table' => 'panelizer_defaults',
      'did' => NULL,
    ),
  ),
  'name' => 'Craig',
  'picture' => 0,
  'data' => 'a:6:{s:7:"overlay";i:1;s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'workbench_access' => array(
    15 => 15,
  ),
  'date' => '2014-03-31 12:34:22 -0400',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Testing 123',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5726bf8a-e5d1-42dd-8467-fbec06a5d3d6',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1396556653,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '630d8747-ddc0-426b-a91c-9724815a25fd',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="text-align: center;">I am a test.</p>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>I am a test.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(),
  'field_site_section' => array(
    'und' => array(
      0 => array(
        'tid' => 15,
        'uuid' => '0a84e4a1-4f32-4bdb-95fa-4db1cbc78cf5',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'panelizer' => array(
    'default' => array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Default',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => FALSE,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => TRUE,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-24ae844c-e357-4808-a63f-daccd2894ccd' => array(
            'pid' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'large',
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '24ae844c-e357-4808-a63f-daccd2894ccd',
          ),
          'new-c9e786f8-a745-41ab-8044-af6fea00b805' => array(
            'pid' => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9e786f8-a745-41ab-8044-af6fea00b805',
          ),
          'new-52454388-9cd5-4a41-91d3-3fbc213232ce' => array(
            'pid' => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'panels' => array(
          'top' => array(
            0 => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            1 => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            2 => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'cm_theme_two_columns',
        'layout_settings' => array(
          'top_classes' => '',
          'center_classes' => '',
          'left_classes' => '',
          'right_classes' => '',
          'bottom_classes' => '',
        ),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'middle' => NULL,
            'top' => NULL,
            'center' => NULL,
            'left' => NULL,
            'right' => NULL,
            'bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
        'hide_title' => 0,
        'title_pane' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
      ),
      'export_module' => 'mnn_layouts',
      'type' => 'Default',
      'export_type' => 2,
      'in_code_only' => TRUE,
      'table' => 'panelizer_defaults',
      'did' => NULL,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
  'workbench_access' => array(
    15 => 15,
  ),
  'date' => '2014-04-03 16:24:13 -0400',
);
  $nodes[] = array(
  'uid' => 29,
  'title' => 'Events',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '45d0140d-f926-49eb-8921-7a8d83e7d1d2',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1396301728,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b87b5127-4ce3-4e45-b3b8-2a8ed2fbbd59',
  'revision_uid' => 29,
  'body' => array(),
  'field_image' => array(),
  'field_site_section' => array(
    'und' => array(
      0 => array(
        'tid' => 19,
        'uuid' => '8d5ea9f8-b121-4d09-a0ae-4769e0754a6e',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'panelizer' => array(
    'default' => array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Default',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => FALSE,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => TRUE,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-24ae844c-e357-4808-a63f-daccd2894ccd' => array(
            'pid' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'large',
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '24ae844c-e357-4808-a63f-daccd2894ccd',
          ),
          'new-c9e786f8-a745-41ab-8044-af6fea00b805' => array(
            'pid' => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9e786f8-a745-41ab-8044-af6fea00b805',
          ),
          'new-52454388-9cd5-4a41-91d3-3fbc213232ce' => array(
            'pid' => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'panels' => array(
          'top' => array(
            0 => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            1 => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            2 => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'cm_theme_two_columns',
        'layout_settings' => array(
          'top_classes' => '',
          'center_classes' => '',
          'left_classes' => '',
          'right_classes' => '',
          'bottom_classes' => '',
        ),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'middle' => NULL,
            'top' => NULL,
            'center' => NULL,
            'left' => NULL,
            'right' => NULL,
            'bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
        'hide_title' => 0,
        'title_pane' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
      ),
      'export_module' => 'mnn_layouts',
      'type' => 'Default',
      'export_type' => 2,
      'in_code_only' => TRUE,
      'table' => 'panelizer_defaults',
      'did' => NULL,
    ),
  ),
  'name' => 'Craig',
  'picture' => 0,
  'data' => 'a:6:{s:7:"overlay";i:1;s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'workbench_access' => array(
    19 => 19,
  ),
  'date' => '2014-03-31 17:35:28 -0400',
);
  $nodes[] = array(
  'uid' => 29,
  'title' => 'Education',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '21a7e5bb-6d34-430e-9808-d9fb77d47b38',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1396301284,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c65d3750-c3fe-4c95-8d01-701845311985',
  'revision_uid' => 29,
  'body' => array(),
  'field_image' => array(),
  'field_site_section' => array(
    'und' => array(
      0 => array(
        'tid' => 16,
        'uuid' => '87a044fd-1273-45d8-b072-fc5e4b06693f',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'panelizer' => array(
    'default' => array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Default',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => FALSE,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => TRUE,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-24ae844c-e357-4808-a63f-daccd2894ccd' => array(
            'pid' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'large',
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '24ae844c-e357-4808-a63f-daccd2894ccd',
          ),
          'new-c9e786f8-a745-41ab-8044-af6fea00b805' => array(
            'pid' => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9e786f8-a745-41ab-8044-af6fea00b805',
          ),
          'new-52454388-9cd5-4a41-91d3-3fbc213232ce' => array(
            'pid' => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'panels' => array(
          'top' => array(
            0 => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            1 => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            2 => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'cm_theme_two_columns',
        'layout_settings' => array(
          'top_classes' => '',
          'center_classes' => '',
          'left_classes' => '',
          'right_classes' => '',
          'bottom_classes' => '',
        ),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'middle' => NULL,
            'top' => NULL,
            'center' => NULL,
            'left' => NULL,
            'right' => NULL,
            'bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
        'hide_title' => 0,
        'title_pane' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
      ),
      'export_module' => 'mnn_layouts',
      'type' => 'Default',
      'export_type' => 2,
      'in_code_only' => TRUE,
      'table' => 'panelizer_defaults',
      'did' => NULL,
    ),
  ),
  'name' => 'Craig',
  'picture' => 0,
  'data' => 'a:6:{s:7:"overlay";i:1;s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'workbench_access' => array(
    16 => 16,
  ),
  'date' => '2014-03-31 17:28:04 -0400',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Img embed test',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1330872a-8fd8-4b58-b780-caac026343d1',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1396561441,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'deccb660-2bc5-447a-b2cf-085ca35ec1a5',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>[[{"fid":"169","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":""},"type":"media","attributes":{"class":"media-element file-default"},"link_text":null}]]</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><img typeof="foaf:Image" src="http://mnn7.local/sites/default/files/alf.jpg" alt="" /></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(),
  'field_site_section' => array(
    'und' => array(
      0 => array(
        'tid' => 15,
        'uuid' => '0a84e4a1-4f32-4bdb-95fa-4db1cbc78cf5',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'panelizer' => array(
    'default' => array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Default',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => FALSE,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => TRUE,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-24ae844c-e357-4808-a63f-daccd2894ccd' => array(
            'pid' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'large',
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '24ae844c-e357-4808-a63f-daccd2894ccd',
          ),
          'new-c9e786f8-a745-41ab-8044-af6fea00b805' => array(
            'pid' => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9e786f8-a745-41ab-8044-af6fea00b805',
          ),
          'new-52454388-9cd5-4a41-91d3-3fbc213232ce' => array(
            'pid' => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'panels' => array(
          'top' => array(
            0 => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            1 => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            2 => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'cm_theme_two_columns',
        'layout_settings' => array(
          'top_classes' => '',
          'center_classes' => '',
          'left_classes' => '',
          'right_classes' => '',
          'bottom_classes' => '',
        ),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'middle' => NULL,
            'top' => NULL,
            'center' => NULL,
            'left' => NULL,
            'right' => NULL,
            'bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
        'hide_title' => 0,
        'title_pane' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
      ),
      'export_module' => 'mnn_layouts',
      'type' => 'Default',
      'export_type' => 2,
      'in_code_only' => TRUE,
      'table' => 'panelizer_defaults',
      'did' => NULL,
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}',
  'workbench_access' => array(
    15 => 15,
  ),
  'date' => '2014-04-03 17:44:01 -0400',
);
  $nodes[] = array(
  'uid' => 29,
  'title' => 'Organizations',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'c5d30ba2-91f2-4258-b513-36a002459e55',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1396283428,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'efdf8c56-7b99-41c9-a307-95584a5ac394',
  'revision_uid' => 29,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<span>MNN\'s Community Media Department empowers Manhattan-based non-profits to improve their media presence. From airing pre-produced programs to TV production training, MNN can help you get your message on air in no time, at no cost.</span>
<div class="organization-info">
	<p>For questions or to submit your show, contact the Community Media Department</p>
	<p>Phone: (212) 757-2670 x319<br />
		Email: community@mnn.org</p>
</div>
<div class="col col1">
	<h4>
		Overview of Services</h4>
	<p>We provide free training to Manhattan-based non-profit organizations looking to reach a broader audience through television. This includes MNN facilitated productions, airing pre-produced programs, and production training for your staff. Please note that in 2013, MNN services may be limited due to renovations.</p>
	<ul>
		<li>
			<div class="copy-column">
				<h5>
					Free Training</h5>
				<p>We provide free training to staff and members on New York-based non-profit programs. Our staff will assist you in learning all aspects of TV production to help get your message to your target community.</p>
			</div>
		</li>
		<li>
			<div class="copy-column">
				<h5>
					Facilitated Productions</h5>
				<p>In certain circumstances, you can utilize our staff as a video crew for your production. You provide the message; we provide the TV production know-how.</p>
			</div>
		</li>
		<li>
			<div class="copy-column">
				<h5>
					Airing Pre-produced Programs</h5>
				<p>Your organization can send us a completed video program or a short Public Service Announcement and we will air it for you on one of our MNN TV channels.</p>
			</div>
		</li>
	</ul>
</div>
<div class="col col2">
	<h4>
		Training &amp; Resources</h4>
	<ul>
		<li>
			<div class="copy-column">
				<p>We welcome Manhattan-based non-profits to utilize our studios to tape programs for MNN. Additionally, we offer camcorders for filming on location and a variety of video editing classes so that you and your staff develop the skills you need to get your message to our viewers.</p>
			</div>
		</li>
	</ul>
</div>
<br />
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>MNN\'s Community Media Department empowers Manhattan-based non-profits to improve their media presence. From airing pre-produced programs to TV production training, MNN can help you get your message on air in no time, at no cost.</p>
<p>For questions or to submit your show, contact the Community Media Department</p>
<p>Phone: (212) 757-2670 x319<br />
		Email: <a href="mailto:community@mnn.org">community@mnn.org</a></p>
<h4>
		Overview of Services</h4>
<p>We provide free training to Manhattan-based non-profit organizations looking to reach a broader audience through television. This includes MNN facilitated productions, airing pre-produced programs, and production training for your staff. Please note that in 2013, MNN services may be limited due to renovations.</p>
<ul>
<li>
<h5>
					Free Training</h5>
<p>We provide free training to staff and members on New York-based non-profit programs. Our staff will assist you in learning all aspects of TV production to help get your message to your target community.</p>
</li>
<li>
<h5>
					Facilitated Productions</h5>
<p>In certain circumstances, you can utilize our staff as a video crew for your production. You provide the message; we provide the TV production know-how.</p>
</li>
<li>
<h5>
					Airing Pre-produced Programs</h5>
<p>Your organization can send us a completed video program or a short Public Service Announcement and we will air it for you on one of our MNN TV channels.</p>
</li>
</ul>
<h4>
		Training &amp; Resources</h4>
<ul>
<li>
<p>We welcome Manhattan-based non-profits to utilize our studios to tape programs for MNN. Additionally, we offer camcorders for filming on location and a variety of video editing classes so that you and your staff develop the skills you need to get your message to our viewers.</p>
</li>
</ul>
<p></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(),
  'field_site_section' => array(
    'und' => array(
      0 => array(
        'tid' => 16,
        'uuid' => '87a044fd-1273-45d8-b072-fc5e4b06693f',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
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
  'panelizer' => array(
    'default' => array(
      'disabled' => FALSE,
      'api_version' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Default',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => FALSE,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => TRUE,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          'new-24ae844c-e357-4808-a63f-daccd2894ccd' => array(
            'pid' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'image',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(
                'image_link' => '',
                'image_style' => 'large',
              ),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 0,
            'locks' => array(),
            'uuid' => '24ae844c-e357-4808-a63f-daccd2894ccd',
          ),
          'new-c9e786f8-a745-41ab-8044-af6fea00b805' => array(
            'pid' => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'label' => 'hidden',
              'formatter' => 'text_default',
              'delta_limit' => 0,
              'delta_offset' => 0,
              'delta_reversed' => FALSE,
              'formatter_settings' => array(),
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 1,
            'locks' => array(),
            'uuid' => 'c9e786f8-a745-41ab-8044-af6fea00b805',
          ),
          'new-52454388-9cd5-4a41-91d3-3fbc213232ce' => array(
            'pid' => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => TRUE,
            'access' => array(),
            'configuration' => array(
              'override_title' => FALSE,
              'override_title_text' => '',
              'build_mode' => 'default',
              'identifier' => '',
              'link' => TRUE,
              'context' => 'panelizer',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(
              'css_class' => 'link-wrapper',
            ),
            'extras' => array(),
            'position' => 2,
            'locks' => array(),
            'uuid' => '52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'panels' => array(
          'top' => array(
            0 => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
            1 => 'new-c9e786f8-a745-41ab-8044-af6fea00b805',
            2 => 'new-52454388-9cd5-4a41-91d3-3fbc213232ce',
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 'new',
        'renderer' => 'standard',
        'layout' => 'cm_theme_two_columns',
        'layout_settings' => array(
          'top_classes' => '',
          'center_classes' => '',
          'left_classes' => '',
          'right_classes' => '',
          'bottom_classes' => '',
        ),
        'panel_settings' => array(
          'style_settings' => array(
            'default' => NULL,
            'middle' => NULL,
            'top' => NULL,
            'center' => NULL,
            'left' => NULL,
            'right' => NULL,
            'bottom' => NULL,
          ),
        ),
        'cache' => array(),
        'title' => '%node:title',
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
        'hide_title' => 0,
        'title_pane' => 'new-24ae844c-e357-4808-a63f-daccd2894ccd',
      ),
      'export_module' => 'mnn_layouts',
      'type' => 'Default',
      'export_type' => 2,
      'in_code_only' => TRUE,
      'table' => 'panelizer_defaults',
      'did' => NULL,
    ),
  ),
  'name' => 'Craig',
  'picture' => 0,
  'data' => 'a:6:{s:7:"overlay";i:1;s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'workbench_access' => array(
    16 => 16,
  ),
  'date' => '2014-03-31 12:30:28 -0400',
);
  return $nodes;
}

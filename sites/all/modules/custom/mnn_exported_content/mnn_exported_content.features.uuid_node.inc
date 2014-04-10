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
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>If you live within Manhattan you can watch MNN on one of the channels listed here. You can always watch MNN online.</p>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>If you live within Manhattan you can watch MNN on one of the channels listed here. You can always watch MNN online.</p>
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
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 629,
      'revision_id' => 630,
      'name' => 'node:page:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => NULL,
      'pipeline' => 'standard',
      'contexts' => NULL,
      'relationships' => NULL,
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => NULL,
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 629,
      'revision_id' => 630,
      'name' => NULL,
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 8,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 0,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          30 => array(
            'pid' => 30,
            'did' => 8,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => 1,
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
          31 => array(
            'pid' => 31,
            'did' => 8,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
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
          32 => array(
            'pid' => 32,
            'did' => 8,
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => 1,
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
          33 => array(
            'pid' => 33,
            'did' => 8,
            'panel' => 'top',
            'type' => 'views_panes',
            'subtype' => 'mnn_channel_lists-mnn_channel_list_content_pane',
            'shown' => 1,
            'access' => array(),
            'configuration' => array(
              'use_pager' => 0,
              'pager_id' => 0,
              'items_per_page' => 10,
              'override_title' => 0,
              'override_title_text' => '',
            ),
            'cache' => array(),
            'style' => array(
              'settings' => NULL,
            ),
            'css' => array(),
            'extras' => array(),
            'position' => 3,
            'locks' => array(),
            'uuid' => '56db40d0-0750-462a-9c8b-42ea8221baa5',
          ),
        ),
        'panels' => array(
          'top' => array(
            0 => 30,
            1 => 31,
            2 => 32,
            3 => 33,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 8,
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
        'hide_title' => 1,
        'title_pane' => 30,
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
      ),
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
      'pnid' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Content',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'did' => NULL,
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 0,
      'extra' => array(),
      'table' => 'panelizer_defaults',
      'type' => 'Overridden',
      'export_type' => 3,
      'display' => array(
        'args' => array(),
        'content' => array(
          17 => array(
            'pid' => 17,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => 1,
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
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
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
          19 => array(
            'pid' => 19,
            'did' => 5,
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => 1,
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
            0 => 17,
            1 => 18,
            2 => 19,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
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
        'hide_title' => 1,
        'title_pane' => 17,
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
      ),
      'export_module' => 'mnn_layouts',
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
      'pnid' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Content',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'did' => NULL,
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 0,
      'extra' => array(),
      'table' => 'panelizer_defaults',
      'type' => 'Overridden',
      'export_type' => 3,
      'display' => array(
        'args' => array(),
        'content' => array(
          17 => array(
            'pid' => 17,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => 1,
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
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
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
          19 => array(
            'pid' => 19,
            'did' => 5,
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => 1,
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
            0 => 17,
            1 => 18,
            2 => 19,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
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
        'hide_title' => 1,
        'title_pane' => 17,
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
      ),
      'export_module' => 'mnn_layouts',
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
      'pnid' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Content',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'did' => NULL,
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 0,
      'extra' => array(),
      'table' => 'panelizer_defaults',
      'type' => 'Overridden',
      'export_type' => 3,
      'display' => array(
        'args' => array(),
        'content' => array(
          17 => array(
            'pid' => 17,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => 1,
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
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
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
          19 => array(
            'pid' => 19,
            'did' => 5,
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => 1,
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
            0 => 17,
            1 => 18,
            2 => 19,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
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
        'hide_title' => 1,
        'title_pane' => 17,
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
      ),
      'export_module' => 'mnn_layouts',
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
      'pnid' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Content',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'did' => NULL,
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 0,
      'extra' => array(),
      'table' => 'panelizer_defaults',
      'type' => 'Overridden',
      'export_type' => 3,
      'display' => array(
        'args' => array(),
        'content' => array(
          17 => array(
            'pid' => 17,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => 1,
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
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
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
          19 => array(
            'pid' => 19,
            'did' => 5,
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => 1,
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
            0 => 17,
            1 => 18,
            2 => 19,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
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
        'hide_title' => 1,
        'title_pane' => 17,
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
      ),
      'export_module' => 'mnn_layouts',
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
      'pnid' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Content',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'did' => NULL,
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 0,
      'extra' => array(),
      'table' => 'panelizer_defaults',
      'type' => 'Overridden',
      'export_type' => 3,
      'display' => array(
        'args' => array(),
        'content' => array(
          17 => array(
            'pid' => 17,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => 1,
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
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
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
          19 => array(
            'pid' => 19,
            'did' => 5,
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => 1,
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
            0 => 17,
            1 => 18,
            2 => 19,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
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
        'hide_title' => 1,
        'title_pane' => 17,
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
      ),
      'export_module' => 'mnn_layouts',
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
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="title" style="margin: 0px; padding: 0px; border: 0px none; font-family: Helvetica, Arial, sans-serif; font-stretch: inherit; line-height: 18.200000762939453px; vertical-align: baseline; color: rgb(37, 41, 43);"><h1 class="title" style="margin-top: 30px; margin-bottom: 20px; padding: 0px; border: 0px none; font-family: \'Droid Serif\', Georgia, serif; font-size: 36px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 34px; vertical-align: baseline;">Media Education</h1></div><div id="content-area" style="margin: 0px; padding: 0px; border: 0px none; font-family: Helvetica, Arial, sans-serif; font-stretch: inherit; line-height: 18.200000762939453px; vertical-align: baseline; color: rgb(37, 41, 43);"><article class="page node node node-mine clearfix node-type-page" id="node-15" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 620px; zoom: 1;"><div class="content" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><img align="right" alt="" class="imagecache-inline-image-content-width" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/inline-image-content-width/page-inline-images/1177_MNN_1939_cropped_0.jpg" style="margin-top: 0px; margin-bottom: 20px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" /></p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">Welcome to media education at MNN.&nbsp; Manhattan residents and non-profit community organizations are invited to participate in our free media education courses. &nbsp;After attending our Orientation, you can take classes and start production on your very own television program to cablecast on MNN&rsquo;s channels.</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Upcoming Orientation Dates</strong></p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">Come along to our main studios at 537 West 59th St on one of these dates for an Orientation:</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* March 20th 1pm to 3pm</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* March 20th 7pm to 9pm</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* May 22nd 1pm to 3pm</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* May 22nd 7pm to 9pm</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* July 17th 1pm to 3pm</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* July 17th 7pm to 9pm</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* September 25th 1pm to 3pm</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* September 25th 7pm to 9pm</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* November 13th 1pm to 3pm</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* November 13th 7pm to 9pm</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">*NEW* Already have a show on MNN?</strong></p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">Making a great TV show takes a lot of work and commitment. Check out our new&nbsp;<strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://www.mnn.org/producers/producer-resources" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);" target="_blank">Producer Resources page</a></strong>&nbsp;for tons of tips and information on troubleshooting production questions, building your audience and getting support and recognition for your show.&nbsp;<strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://www.mnn.org/producers/producer-resources" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);" target="_blank">Click here!</a></strong></p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Did you know?</strong></p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">We recently outfitted MNN&rsquo;s facilities with state-of-the-art media production equipment. This once-in-a-decade upgrade means our producers now have access to the most up-to-date media production equipment to create their programs. It also means that producers who have previously been certified in both Studio Production and Express Studio Production will need to take recertification classes to produce programs independently.</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">An important note about our workshops</strong></p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">We are excited about our new equipment and to train our current and new producers. As we transition to the new equipment, demand for our workshops is extremely high, and there are waiting lists for our certifications classes and workshops.&nbsp;<a href="http://www.mnn.org/producers/faq" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);" title="MNN Producer FAQ">Please visit the FAQ section of our website</a>&nbsp;for more information on our waiting list policy. We look forward to welcoming you to MNN and appreciate your patience!</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Recertification</strong>:</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">These courses aim to upgrade previously certified MNN producers on the new equipment and systems. Upon sucessful completion of the recertification courses, producers can access the equipment to produce programming independently.</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Certification</strong>:</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">In these hands-on courses students learn basic media and production skills. Members that successfully complete these courses can use MNN&rsquo;s facilities to produce their own programming to air on MNN&rsquo;s channels.&nbsp;</p><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">&nbsp;</p><div class="become-producer" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/become-producer" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);">How to Become a Producer</a></div><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">&nbsp;</p><div class="submit-show" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/submit-show" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);">How to Submit a Show</a></div><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">&nbsp;</p><div class="production-resources" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/manhattan-video-production-resources" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);">Equipment &amp; Resources</a></div><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">&nbsp;</p><div class="series-dealines" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/series-deadlines" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);">Quarterly Series Deadlines</a></div><p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">&nbsp;</p></div></article></div><div id="content-bottom" style="margin: 0px; padding: 0px; border: 0px none; font-family: Helvetica, Arial, sans-serif; font-stretch: inherit; line-height: 18.200000762939453px; vertical-align: baseline; color: rgb(37, 41, 43);"><div class="block block-views block-content_bottom block-id-views-b855a929e665c3fde3d084d3e9aa266e clearfix" id="block-views-certification-class-list-block-producers" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; zoom: 1; position: relative;"><div class="top" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;">&nbsp;</div><div class="outer" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><div class="inner" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><div class="content" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><div class="view view-certification-class-list view-id-certification_class_list view-display-id-block_1 view-dom-id-1" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><div class="view-content" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><div class="item-list" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><ul style="margin-top: 0px; margin-bottom: 0px; padding-left: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none outside none;"><li class="views-row views-row-1 views-row-odd views-row-first" style="margin-top: 0px; margin-bottom: 30px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none; clear: left;"><div class="thumb" style="margin: 0px 20px 20px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; float: left;"><a class="imagecache imagecache-certification-class-tracks imagecache-linked imagecache-certification-class-tracks_linked" href="http://mnn6.dev.zivtech.com/producers/classes/field-camera-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;"><img alt="" class="imagecache imagecache-certification-class-tracks" height="90" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/certification-class-tracks/certification-class-images/1177_MNN_1595.jpg" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" width="139" /></a></div><h5 class="title" style="margin-top: 0px; margin-bottom: 10px; padding: 0px; border: 0px none; font-family: arial; font-size: 16px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/classes/field-camera-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(29, 29, 29); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">Field Camera Training</a></h5><div class="description" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 540px;"><p style="margin-top: 5px; margin-bottom: 0px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Our Field Production classes teach you how to work on location, plus basic camera and editing skills.</p></div><div class="read-more" style="margin: 5px 0px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; color: rgb(0, 91, 37); float: left;"><a href="http://mnn6.dev.zivtech.com/producers/classes/field-camera-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">View Class Information</a></div></li><li class="views-row views-row-2 views-row-even" style="margin-top: 0px; margin-bottom: 30px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none; clear: left;"><div class="thumb" style="margin: 0px 20px 20px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; float: left;"><a class="imagecache imagecache-certification-class-tracks imagecache-linked imagecache-certification-class-tracks_linked" href="http://mnn6.dev.zivtech.com/producers/classes/studio-production-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;"><img alt="" class="imagecache imagecache-certification-class-tracks" height="90" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/certification-class-tracks/certification-class-images/IMG_0917.JPG" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" width="139" /></a></div><h5 class="title" style="margin-top: 0px; margin-bottom: 10px; padding: 0px; border: 0px none; font-family: arial; font-size: 16px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/classes/studio-production-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(29, 29, 29); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">Studio Production Training</a></h5><div class="description" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 540px;"><p style="margin-top: 5px; margin-bottom: 0px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Interviews, fashion shows, lectures, and more. Learn how to seamlessly edit multi-shot productions for live/live-to-tape productions.</p></div><div class="read-more" style="margin: 5px 0px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; color: rgb(0, 91, 37); float: left;"><a href="http://mnn6.dev.zivtech.com/producers/classes/studio-production-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">View Class Information</a></div></li><li class="views-row views-row-3 views-row-odd" style="margin-top: 0px; margin-bottom: 30px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none; clear: left;"><div class="thumb" style="margin: 0px 20px 20px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; float: left;"><a class="imagecache imagecache-certification-class-tracks imagecache-linked imagecache-certification-class-tracks_linked" href="http://mnn6.dev.zivtech.com/producers/classes/express-studio-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;"><img alt="" class="imagecache imagecache-certification-class-tracks" height="90" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/certification-class-tracks/certification-class-images/IMG_0925.JPG" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" width="139" /></a></div><h5 class="title" style="margin-top: 0px; margin-bottom: 10px; padding: 0px; border: 0px none; font-family: arial; font-size: 16px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/classes/express-studio-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(29, 29, 29); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">Express Studio Training</a></h5><div class="description" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 540px;"><p style="margin-top: 5px; margin-bottom: 0px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">With our Express Studio track, develop the skills you need to produce a show from a single camera, single-handedly.</p></div><div class="read-more" style="margin: 5px 0px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; color: rgb(0, 91, 37); float: left;"><a href="http://mnn6.dev.zivtech.com/producers/classes/express-studio-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">View Class Information</a></div></li><li class="views-row views-row-4 views-row-even" style="margin-top: 0px; margin-bottom: 30px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none; clear: left;"><div class="thumb" style="margin: 0px 20px 20px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; float: left;"><a class="imagecache imagecache-certification-class-tracks imagecache-linked imagecache-certification-class-tracks_linked" href="http://mnn6.dev.zivtech.com/producers/classes/advanced-classes" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;"><img alt="" class="imagecache imagecache-certification-class-tracks" height="90" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/certification-class-tracks/certification-class-images/1177_MNN_1168.jpg" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" width="139" /></a></div><h5 class="title" style="margin-top: 0px; margin-bottom: 10px; padding: 0px; border: 0px none; font-family: arial; font-size: 16px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/classes/advanced-classes" style="margin: 0px 0px 16px; padding: 0px; color: rgb(29, 29, 29); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">Advanced Classes</a></h5><div class="description" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 540px;"><p style="margin-top: 5px; margin-bottom: 0px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Our Advanced Classes are ongoing seminars that change from month-to-month. In the past, we have offered coursework ranging from Mac Basics to Final Cut Pro.</p></div><div class="read-more" style="margin: 5px 0px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; color: rgb(0, 91, 37); float: left;"><a href="http://mnn6.dev.zivtech.com/producers/classes/advanced-classes" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">View Class Information</a></div></li><li class="views-row views-row-5 views-row-odd" style="margin-top: 0px; margin-bottom: 30px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none; clear: left;"><div class="thumb" style="margin: 0px 20px 20px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; float: left;"><a class="imagecache imagecache-certification-class-tracks imagecache-linked imagecache-certification-class-tracks_linked" href="http://mnn6.dev.zivtech.com/producers/classes/digital-video-editing-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;"><img alt="" class="imagecache imagecache-certification-class-tracks" height="90" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/certification-class-tracks/certification-class-images/finalcut7.jpg" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" width="139" /></a></div><h5 class="title" style="margin-top: 0px; margin-bottom: 10px; padding: 0px; border: 0px none; font-family: arial; font-size: 16px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/classes/digital-video-editing-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(29, 29, 29); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">Digital Video Editing Training</a></h5><div class="description" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 540px;"><p style="margin-top: 5px; margin-bottom: 0px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Learn the basics of digital video editing.</p></div><div class="read-more" style="margin: 5px 0px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; color: rgb(0, 91, 37); float: left;"><a href="http://mnn6.dev.zivtech.com/producers/classes/digital-video-editing-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">View Class Information</a></div></li><li class="views-row views-row-6 views-row-even views-row-last" style="margin-top: 0px; margin-bottom: 30px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none; clear: left;"><div class="thumb" style="margin: 0px 20px 20px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; float: left;"><a class="imagecache imagecache-certification-class-tracks imagecache-linked imagecache-certification-class-tracks_linked" href="http://mnn6.dev.zivtech.com/producers/classes/community-builders" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;"><img alt="" class="imagecache imagecache-certification-class-tracks" height="90" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/certification-class-tracks/certification-class-images/mnn-firehouse_0.jpg" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" width="139" /></a></div><h5 class="title" style="margin-top: 0px; margin-bottom: 10px; padding: 0px; border: 0px none; font-family: arial; font-size: 16px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/classes/community-builders" style="margin: 0px 0px 16px; padding: 0px; color: rgb(29, 29, 29); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">Community Builders</a></h5><div class="description" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 540px;"><p style="margin-top: 5px; margin-bottom: 0px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Community Builders Training is a program for persons interested in producing community programming.</p></div><div class="read-more" style="margin: 5px 0px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; color: rgb(0, 91, 37); float: left;"><a href="http://mnn6.dev.zivtech.com/producers/classes/community-builders" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">View Class Information</a></div></li></ul></div></div></div></div></div></div></div></div><p>&nbsp;</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div id="title" style="margin: 0px; padding: 0px; border: 0px none; font-family: Helvetica, Arial, sans-serif; font-stretch: inherit; line-height: 18.200000762939453px; vertical-align: baseline; color: rgb(37, 41, 43);">
<h1 class="title" style="margin-top: 30px; margin-bottom: 20px; padding: 0px; border: 0px none; font-family: \'Droid Serif\', Georgia, serif; font-size: 36px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 34px; vertical-align: baseline;">Media Education</h1>
</div>
<div id="content-area" style="margin: 0px; padding: 0px; border: 0px none; font-family: Helvetica, Arial, sans-serif; font-stretch: inherit; line-height: 18.200000762939453px; vertical-align: baseline; color: rgb(37, 41, 43);"><article class="page node node node-mine clearfix node-type-page" id="node-15" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 620px; zoom: 1;"><br /><div class="content" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;">
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><img align="right" alt="" class="imagecache-inline-image-content-width" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/inline-image-content-width/page-inline-images/1177_MNN_1939_cropped_0.jpg" style="margin-top: 0px; margin-bottom: 20px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" /></p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">Welcome to media education at MNN.  Manhattan residents and non-profit community organizations are invited to participate in our free media education courses.  After attending our Orientation, you can take classes and start production on your very own television program to cablecast on MNN’s channels.</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Upcoming Orientation Dates</strong></p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">Come along to our main studios at 537 West 59th St on one of these dates for an Orientation:</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* March 20th 1pm to 3pm</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* March 20th 7pm to 9pm</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* May 22nd 1pm to 3pm</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* May 22nd 7pm to 9pm</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* July 17th 1pm to 3pm</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* July 17th 7pm to 9pm</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* September 25th 1pm to 3pm</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* September 25th 7pm to 9pm</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* November 13th 1pm to 3pm</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">* November 13th 7pm to 9pm</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">*NEW* Already have a show on MNN?</strong></p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">Making a great TV show takes a lot of work and commitment. Check out our new <strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://www.mnn.org/producers/producer-resources" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);" target="_blank">Producer Resources page</a></strong> for tons of tips and information on troubleshooting production questions, building your audience and getting support and recognition for your show. <strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://www.mnn.org/producers/producer-resources" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);" target="_blank">Click here!</a></strong></p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Did you know?</strong></p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">We recently outfitted MNN’s facilities with state-of-the-art media production equipment. This once-in-a-decade upgrade means our producers now have access to the most up-to-date media production equipment to create their programs. It also means that producers who have previously been certified in both Studio Production and Express Studio Production will need to take recertification classes to produce programs independently.</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">An important note about our workshops</strong></p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">We are excited about our new equipment and to train our current and new producers. As we transition to the new equipment, demand for our workshops is extremely high, and there are waiting lists for our certifications classes and workshops. <a href="http://www.mnn.org/producers/faq" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);" title="MNN Producer FAQ">Please visit the FAQ section of our website</a> for more information on our waiting list policy. We look forward to welcoming you to MNN and appreciate your patience!</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Recertification</strong>:</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">These courses aim to upgrade previously certified MNN producers on the new equipment and systems. Upon sucessful completion of the recertification courses, producers can access the equipment to produce programming independently.</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"><strong style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Certification</strong>:</p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;">In these hands-on courses students learn basic media and production skills. Members that successfully complete these courses can use MNN’s facilities to produce their own programming to air on MNN’s channels. </p>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"> </p>
<div class="become-producer" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/become-producer" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);">How to Become a Producer</a></div>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"> </p>
<div class="submit-show" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/submit-show" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);">How to Submit a Show</a></div>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"> </p>
<div class="production-resources" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/manhattan-video-production-resources" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);">Equipment &amp; Resources</a></div>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"> </p>
<div class="series-dealines" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/series-deadlines" style="margin: 0px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153);">Quarterly Series Deadlines</a></div>
<p style="margin-top: 0px; margin-bottom: 10px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 20px; vertical-align: baseline;"> </p>
</div>
<p></p></article></div>
<div id="content-bottom" style="margin: 0px; padding: 0px; border: 0px none; font-family: Helvetica, Arial, sans-serif; font-stretch: inherit; line-height: 18.200000762939453px; vertical-align: baseline; color: rgb(37, 41, 43);">
<div class="block block-views block-content_bottom block-id-views-b855a929e665c3fde3d084d3e9aa266e clearfix" id="block-views-certification-class-list-block-producers" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; zoom: 1; position: relative;">
<div class="top" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;"> </div>
<div class="outer" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;">
<div class="inner" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;">
<div class="content" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;">
<div class="view view-certification-class-list view-id-certification_class_list view-display-id-block_1 view-dom-id-1" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;">
<div class="view-content" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;">
<div class="item-list" style="margin: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline;">
<ul style="margin-top: 0px; margin-bottom: 0px; padding-left: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none outside none;"><li class="views-row views-row-1 views-row-odd views-row-first" style="margin-top: 0px; margin-bottom: 30px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none; clear: left;">
<div class="thumb" style="margin: 0px 20px 20px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; float: left;"><a class="imagecache imagecache-certification-class-tracks imagecache-linked imagecache-certification-class-tracks_linked" href="http://mnn6.dev.zivtech.com/producers/classes/field-camera-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;"><img alt="" class="imagecache imagecache-certification-class-tracks" height="90" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/certification-class-tracks/certification-class-images/1177_MNN_1595.jpg" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" width="139" /></a></div>
<h5 class="title" style="margin-top: 0px; margin-bottom: 10px; padding: 0px; border: 0px none; font-family: arial; font-size: 16px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/classes/field-camera-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(29, 29, 29); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">Field Camera Training</a></h5>
<div class="description" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 540px;">
<p style="margin-top: 5px; margin-bottom: 0px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Our Field Production classes teach you how to work on location, plus basic camera and editing skills.</p>
</div>
<div class="read-more" style="margin: 5px 0px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; color: rgb(0, 91, 37); float: left;"><a href="http://mnn6.dev.zivtech.com/producers/classes/field-camera-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">View Class Information</a></div>
</li>
<li class="views-row views-row-2 views-row-even" style="margin-top: 0px; margin-bottom: 30px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none; clear: left;">
<div class="thumb" style="margin: 0px 20px 20px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; float: left;"><a class="imagecache imagecache-certification-class-tracks imagecache-linked imagecache-certification-class-tracks_linked" href="http://mnn6.dev.zivtech.com/producers/classes/studio-production-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;"><img alt="" class="imagecache imagecache-certification-class-tracks" height="90" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/certification-class-tracks/certification-class-images/IMG_0917.JPG" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" width="139" /></a></div>
<h5 class="title" style="margin-top: 0px; margin-bottom: 10px; padding: 0px; border: 0px none; font-family: arial; font-size: 16px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/classes/studio-production-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(29, 29, 29); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">Studio Production Training</a></h5>
<div class="description" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 540px;">
<p style="margin-top: 5px; margin-bottom: 0px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Interviews, fashion shows, lectures, and more. Learn how to seamlessly edit multi-shot productions for live/live-to-tape productions.</p>
</div>
<div class="read-more" style="margin: 5px 0px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; color: rgb(0, 91, 37); float: left;"><a href="http://mnn6.dev.zivtech.com/producers/classes/studio-production-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">View Class Information</a></div>
</li>
<li class="views-row views-row-3 views-row-odd" style="margin-top: 0px; margin-bottom: 30px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none; clear: left;">
<div class="thumb" style="margin: 0px 20px 20px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; float: left;"><a class="imagecache imagecache-certification-class-tracks imagecache-linked imagecache-certification-class-tracks_linked" href="http://mnn6.dev.zivtech.com/producers/classes/express-studio-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;"><img alt="" class="imagecache imagecache-certification-class-tracks" height="90" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/certification-class-tracks/certification-class-images/IMG_0925.JPG" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" width="139" /></a></div>
<h5 class="title" style="margin-top: 0px; margin-bottom: 10px; padding: 0px; border: 0px none; font-family: arial; font-size: 16px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/classes/express-studio-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(29, 29, 29); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">Express Studio Training</a></h5>
<div class="description" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 540px;">
<p style="margin-top: 5px; margin-bottom: 0px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">With our Express Studio track, develop the skills you need to produce a show from a single camera, single-handedly.</p>
</div>
<div class="read-more" style="margin: 5px 0px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; color: rgb(0, 91, 37); float: left;"><a href="http://mnn6.dev.zivtech.com/producers/classes/express-studio-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">View Class Information</a></div>
</li>
<li class="views-row views-row-4 views-row-even" style="margin-top: 0px; margin-bottom: 30px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none; clear: left;">
<div class="thumb" style="margin: 0px 20px 20px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; float: left;"><a class="imagecache imagecache-certification-class-tracks imagecache-linked imagecache-certification-class-tracks_linked" href="http://mnn6.dev.zivtech.com/producers/classes/advanced-classes" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;"><img alt="" class="imagecache imagecache-certification-class-tracks" height="90" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/certification-class-tracks/certification-class-images/1177_MNN_1168.jpg" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" width="139" /></a></div>
<h5 class="title" style="margin-top: 0px; margin-bottom: 10px; padding: 0px; border: 0px none; font-family: arial; font-size: 16px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/classes/advanced-classes" style="margin: 0px 0px 16px; padding: 0px; color: rgb(29, 29, 29); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">Advanced Classes</a></h5>
<div class="description" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 540px;">
<p style="margin-top: 5px; margin-bottom: 0px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Our Advanced Classes are ongoing seminars that change from month-to-month. In the past, we have offered coursework ranging from Mac Basics to Final Cut Pro.</p>
</div>
<div class="read-more" style="margin: 5px 0px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; color: rgb(0, 91, 37); float: left;"><a href="http://mnn6.dev.zivtech.com/producers/classes/advanced-classes" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">View Class Information</a></div>
</li>
<li class="views-row views-row-5 views-row-odd" style="margin-top: 0px; margin-bottom: 30px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none; clear: left;">
<div class="thumb" style="margin: 0px 20px 20px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; float: left;"><a class="imagecache imagecache-certification-class-tracks imagecache-linked imagecache-certification-class-tracks_linked" href="http://mnn6.dev.zivtech.com/producers/classes/digital-video-editing-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;"><img alt="" class="imagecache imagecache-certification-class-tracks" height="90" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/certification-class-tracks/certification-class-images/finalcut7.jpg" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" width="139" /></a></div>
<h5 class="title" style="margin-top: 0px; margin-bottom: 10px; padding: 0px; border: 0px none; font-family: arial; font-size: 16px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/classes/digital-video-editing-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(29, 29, 29); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">Digital Video Editing Training</a></h5>
<div class="description" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 540px;">
<p style="margin-top: 5px; margin-bottom: 0px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Learn the basics of digital video editing.</p>
</div>
<div class="read-more" style="margin: 5px 0px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; color: rgb(0, 91, 37); float: left;"><a href="http://mnn6.dev.zivtech.com/producers/classes/digital-video-editing-training" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">View Class Information</a></div>
</li>
<li class="views-row views-row-6 views-row-even views-row-last" style="margin-top: 0px; margin-bottom: 30px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; list-style: none; clear: left;">
<div class="thumb" style="margin: 0px 20px 20px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; float: left;"><a class="imagecache imagecache-certification-class-tracks imagecache-linked imagecache-certification-class-tracks_linked" href="http://mnn6.dev.zivtech.com/producers/classes/community-builders" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;"><img alt="" class="imagecache imagecache-certification-class-tracks" height="90" src="http://mnn6.dev.zivtech.com/files/mnn/imagecache/certification-class-tracks/certification-class-images/mnn-firehouse_0.jpg" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 4px solid white; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; -webkit-box-shadow: rgb(135, 135, 135) 0px 0px 5px; box-shadow: rgb(135, 135, 135) 0px 0px 5px 0px;" title="" width="139" /></a></div>
<h5 class="title" style="margin-top: 0px; margin-bottom: 10px; padding: 0px; border: 0px none; font-family: arial; font-size: 16px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;"><a href="http://mnn6.dev.zivtech.com/producers/classes/community-builders" style="margin: 0px 0px 16px; padding: 0px; color: rgb(29, 29, 29); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">Community Builders</a></h5>
<div class="description" style="margin-top: 0px; margin-bottom: 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; width: 540px;">
<p style="margin-top: 5px; margin-bottom: 0px; border: 0px none; font-family: inherit; font-size: 14px; font-stretch: inherit; font-style: inherit; font-variant: inherit; line-height: 1.3em; vertical-align: baseline;">Community Builders Training is a program for persons interested in producing community programming.</p>
</div>
<div class="read-more" style="margin: 5px 0px 0px; padding: 0px; border: 0px none; font-family: inherit; font-size: inherit; font-stretch: inherit; font-style: inherit; font-variant: inherit; font-weight: inherit; line-height: 1.3em; vertical-align: baseline; color: rgb(0, 91, 37); float: left;"><a href="http://mnn6.dev.zivtech.com/producers/classes/community-builders" style="margin: 0px 0px 16px; padding: 0px; color: rgb(0, 91, 37); -webkit-tap-highlight-color: rgb(255, 94, 153); list-style: disc outside none;">View Class Information</a></div>
</li>
</ul></div>
</div>
</div>
</div>
</div>
</div>
</div>
</div>
<p> </p>
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
    'page_manager' => array(
      'entity_type' => 'node',
      'entity_id' => 627,
      'revision_id' => 628,
      'name' => 'node:page:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => NULL,
      'pipeline' => 'standard',
      'contexts' => NULL,
      'relationships' => NULL,
      'did' => 0,
      'view_mode' => 'page_manager',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => NULL,
    ),
    'default' => array(
      'entity_type' => 'node',
      'entity_id' => 627,
      'revision_id' => 628,
      'name' => 'node:page:default:default',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'standard',
      'contexts' => array(),
      'relationships' => array(),
      'did' => 0,
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 1,
      'extra' => array(),
      'display' => array(
        'args' => array(),
        'content' => array(
          17 => array(
            'pid' => 17,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => 1,
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
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
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
          19 => array(
            'pid' => 19,
            'did' => 5,
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => 1,
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
            0 => 17,
            1 => 18,
            2 => 19,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
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
        'hide_title' => 1,
        'title_pane' => 17,
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
      ),
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
      'pnid' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Content',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'did' => NULL,
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 0,
      'extra' => array(),
      'table' => 'panelizer_defaults',
      'type' => 'Overridden',
      'export_type' => 3,
      'display' => array(
        'args' => array(),
        'content' => array(
          17 => array(
            'pid' => 17,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => 1,
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
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
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
          19 => array(
            'pid' => 19,
            'did' => 5,
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => 1,
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
            0 => 17,
            1 => 18,
            2 => 19,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
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
        'hide_title' => 1,
        'title_pane' => 17,
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
      ),
      'export_module' => 'mnn_layouts',
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
      'pnid' => 1,
      'name' => 'node:page:default:default',
      'title' => 'Content',
      'panelizer_type' => 'node',
      'panelizer_key' => 'page',
      'no_blocks' => 0,
      'css_id' => '',
      'css' => '',
      'pipeline' => 'ipe',
      'contexts' => array(),
      'relationships' => array(),
      'did' => NULL,
      'access' => array(),
      'view_mode' => 'default',
      'css_class' => '',
      'title_element' => 'H2',
      'link_to_entity' => 0,
      'extra' => array(),
      'table' => 'panelizer_defaults',
      'type' => 'Overridden',
      'export_type' => 3,
      'display' => array(
        'args' => array(),
        'content' => array(
          17 => array(
            'pid' => 17,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:field_image',
            'shown' => 1,
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
          18 => array(
            'pid' => 18,
            'did' => 5,
            'panel' => 'top',
            'type' => 'entity_field',
            'subtype' => 'node:body',
            'shown' => 1,
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
          19 => array(
            'pid' => 19,
            'did' => 5,
            'panel' => 'top',
            'type' => 'node_links',
            'subtype' => 'node_links',
            'shown' => 1,
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
            0 => 17,
            1 => 18,
            2 => 19,
          ),
        ),
        'incoming_content' => NULL,
        'css_id' => NULL,
        'context' => array(),
        'did' => 5,
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
        'hide_title' => 1,
        'title_pane' => 17,
        'uuid' => 'd5cc52cb-866d-488b-b7dc-280c34616e36',
      ),
      'export_module' => 'mnn_layouts',
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

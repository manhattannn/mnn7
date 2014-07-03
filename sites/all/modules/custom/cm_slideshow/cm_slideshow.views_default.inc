<?php
/**
 * @file
 * cm_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cm_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cm_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Återställ';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortera efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigande';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Fallande';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Förvald',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'uri' => 0,
    'field_cm_sub_head' => 0,
    'field_cm_slideshow_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'uri' => 0,
    'field_cm_sub_head' => 0,
    'field_cm_slideshow_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_cm_slideshow_link']['id'] = 'field_cm_slideshow_link';
  $handler->display->display_options['fields']['field_cm_slideshow_link']['table'] = 'field_data_field_cm_slideshow_link';
  $handler->display->display_options['fields']['field_cm_slideshow_link']['field'] = 'field_cm_slideshow_link';
  $handler->display->display_options['fields']['field_cm_slideshow_link']['label'] = '';
  $handler->display->display_options['fields']['field_cm_slideshow_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cm_slideshow_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cm_slideshow_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_cm_slideshow_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_cm_slideshow_link']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_cm_slideshow_image']['id'] = 'field_cm_slideshow_image';
  $handler->display->display_options['fields']['field_cm_slideshow_image']['table'] = 'field_data_field_cm_slideshow_image';
  $handler->display->display_options['fields']['field_cm_slideshow_image']['field'] = 'field_cm_slideshow_image';
  $handler->display->display_options['fields']['field_cm_slideshow_image']['label'] = '';
  $handler->display->display_options['fields']['field_cm_slideshow_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cm_slideshow_image']['alter']['path'] = '[field_cm_slideshow_link]';
  $handler->display->display_options['fields']['field_cm_slideshow_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_cm_slideshow_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cm_slideshow_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cm_slideshow_image']['settings'] = array(
    'image_style' => 'cm_slideshow_mobile',
    'image_link' => '',
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Sub Header */
  $handler->display->display_options['fields']['field_cm_slideshow_sub_header']['id'] = 'field_cm_slideshow_sub_header';
  $handler->display->display_options['fields']['field_cm_slideshow_sub_header']['table'] = 'field_data_field_cm_slideshow_sub_header';
  $handler->display->display_options['fields']['field_cm_slideshow_sub_header']['field'] = 'field_cm_slideshow_sub_header';
  $handler->display->display_options['fields']['field_cm_slideshow_sub_header']['label'] = '';
  $handler->display->display_options['fields']['field_cm_slideshow_sub_header']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cm_slideshow_sub_header']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_cm_slideshow_sub_header']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['field_cm_slideshow_sub_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cm_slideshow_sub_header']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="title">[title]</div>
<div class="sub-title">[field_cm_slideshow_sub_header]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Weight (field_cm_weight) */
  $handler->display->display_options['sorts']['field_cm_weight_value']['id'] = 'field_cm_weight_value';
  $handler->display->display_options['sorts']['field_cm_weight_value']['table'] = 'field_data_field_cm_weight';
  $handler->display->display_options['sorts']['field_cm_weight_value']['field'] = 'field_cm_weight_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cm_slideshow_slide' => 'cm_slideshow_slide',
  );

  /* Display: Home */
  $handler = $view->new_display('block', 'Home', 'block');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['cm_slideshow'] = $view;

  return $export;
}

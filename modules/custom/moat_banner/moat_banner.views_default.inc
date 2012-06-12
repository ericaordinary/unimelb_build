<?php
/**
 * @file
 * moat_banner.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function moat_banner_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'moat_banner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Moat Banner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'moat_banner_slide',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Background colour */
  $handler->display->display_options['fields']['field_background_colour']['id'] = 'field_background_colour';
  $handler->display->display_options['fields']['field_background_colour']['table'] = 'field_data_field_background_colour';
  $handler->display->display_options['fields']['field_background_colour']['field'] = 'field_background_colour';
  $handler->display->display_options['fields']['field_background_colour']['label'] = '';
  $handler->display->display_options['fields']['field_background_colour']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_background_colour']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_background_colour']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_background_colour']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_background_colour']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_background_colour']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_background_colour']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_background_colour']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_background_colour']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_background_colour']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_background_colour']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_background_colour']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_background_colour']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_background_colour']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_background_colour']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_background_colour']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_background_colour']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_background_colour']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_background_colour']['field_api_classes'] = 0;
  /* Field: Content: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_text']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_text']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_text']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_text']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_text']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_text']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_text']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_text']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_text']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_text']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_text']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_text']['field_api_classes'] = 0;
  /* Field: Content: Link text */
  $handler->display->display_options['fields']['field_link_text']['id'] = 'field_link_text';
  $handler->display->display_options['fields']['field_link_text']['table'] = 'field_data_field_link_text';
  $handler->display->display_options['fields']['field_link_text']['field'] = 'field_link_text';
  $handler->display->display_options['fields']['field_link_text']['label'] = '';
  $handler->display->display_options['fields']['field_link_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_text']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_text']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_text']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_link_text']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_text']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_text']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_text']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link_text']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_text']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_text']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_text']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_link_text']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_text']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_text']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_text']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_link_text']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_text']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_text']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_link_text']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_link']['alter']['text'] = '[field_link_text]';
  $handler->display->display_options['fields']['field_link']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_link']['alter']['path'] = 'node/[field_link-target_id]';
  $handler->display->display_options['fields']['field_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['alt'] = '[field_link_text]';
  $handler->display->display_options['fields']['field_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_link']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_link']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'moat_banner_slide' => 'moat_banner_slide',
  );

  /* Display: Block - Front Page */
  $handler = $view->new_display('block', 'Block - Front Page', 'block');
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'moat_banner_slide' => 'moat_banner_slide',
  );
  /* Filter criterion: Content: Front page (field_front) */
  $handler->display->display_options['filters']['field_front_value']['id'] = 'field_front_value';
  $handler->display->display_options['filters']['field_front_value']['table'] = 'field_data_field_front';
  $handler->display->display_options['filters']['field_front_value']['field'] = 'field_front_value';
  $handler->display->display_options['filters']['field_front_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block - Not Front */
  $handler = $view->new_display('block', 'Block - Not Front', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Other pages (field_other_pages) */
  $handler->display->display_options['arguments']['field_other_pages_target_id']['id'] = 'field_other_pages_target_id';
  $handler->display->display_options['arguments']['field_other_pages_target_id']['table'] = 'field_data_field_other_pages';
  $handler->display->display_options['arguments']['field_other_pages_target_id']['field'] = 'field_other_pages_target_id';
  $handler->display->display_options['arguments']['field_other_pages_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_other_pages_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_other_pages_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_other_pages_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_other_pages_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_other_pages_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_other_pages_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_other_pages_target_id']['not'] = 0;
  $export['moat_banner'] = $view;

  return $export;
}

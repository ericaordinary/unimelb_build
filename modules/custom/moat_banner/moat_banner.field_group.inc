<?php
/**
 * @file
 * moat_banner.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function moat_banner_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner_showon|node|moat_banner_slide|form';
  $field_group->group_name = 'group_banner_showon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'moat_banner_slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show on the following pages',
    'weight' => '6',
    'children' => array(
      0 => 'field_front',
      1 => 'field_other_pages',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Show on the following pages',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_banner_showon|node|moat_banner_slide|form'] = $field_group;

  return $export;
}

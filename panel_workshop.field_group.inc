<?php
/**
 * @file
 * panel_workshop.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function panel_workshop_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_page_1|node|panel_workshop|form';
  $field_group->group_name = 'group_panel_page_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'panel_workshop';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_panel_pages';
  $field_group->data = array(
    'label' => 'Panel Page 1',
    'weight' => '1',
    'children' => array(
      0 => 'field_abstract',
      1 => 'field_host_sponsor',
      2 => 'field_topics',
      3 => 'field_panel_track',
      4 => 'field_panel_type',
      5 => 'title',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-panel-page-1',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_panel_page_1|node|panel_workshop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_page_2|node|panel_workshop|form';
  $field_group->group_name = 'group_panel_page_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'panel_workshop';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_panel_pages';
  $field_group->data = array(
    'label' => 'Panel Page 2',
    'weight' => '2',
    'children' => array(
      0 => 'field_audeince_experience_level',
      1 => 'group_special_needs',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-panel-page-2',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_panel_page_2|node|panel_workshop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_page_3|node|panel_workshop|form';
  $field_group->group_name = 'group_panel_page_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'panel_workshop';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_panel_pages';
  $field_group->data = array(
    'label' => 'Panel Page 3',
    'weight' => '3',
    'children' => array(
      0 => 'field_organizer_info',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-panel-page-3',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_panel_page_3|node|panel_workshop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_page_4|node|panel_workshop|form';
  $field_group->group_name = 'group_panel_page_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'panel_workshop';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_panel_pages';
  $field_group->data = array(
    'label' => 'Panel Page 4',
    'weight' => '4',
    'children' => array(
      0 => 'field_participant_info',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-panel-page-4',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_panel_page_4|node|panel_workshop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_pages|node|panel_workshop|form';
  $field_group->group_name = 'group_panel_pages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'panel_workshop';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Panel pages',
    'weight' => '0',
    'children' => array(
      0 => 'group_panel_page_1',
      1 => 'group_panel_page_2',
      2 => 'group_panel_page_3',
      3 => 'group_panel_page_4',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-panel-pages field-group-multipage-group',
        'page_header' => 3,
        'move_additional' => 1,
        'page_counter' => 1,
        'move_button' => 0,
      ),
    ),
  );
  $field_groups['group_panel_pages|node|panel_workshop|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_special_needs|node|panel_workshop|form';
  $field_group->group_name = 'group_special_needs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'panel_workshop';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_panel_page_2';
  $field_group->data = array(
    'label' => 'Special Needs',
    'weight' => '6',
    'children' => array(
      0 => 'field_audio_video_equipment_usag',
      1 => 'field_availability_for_schedulin',
      2 => 'field_no_video_audio_recording',
      3 => 'field_other_special_needs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-special-needs field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_special_needs|node|panel_workshop|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Panel Page 1');
  t('Panel Page 2');
  t('Panel Page 3');
  t('Panel Page 4');
  t('Panel pages');
  t('Special Needs');

  return $field_groups;
}

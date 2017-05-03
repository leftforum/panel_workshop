<?php
/**
 * @file
 * panel_workshop.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function panel_workshop_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-panel_workshop-field_abstract'.
  $field_instances['node-panel_workshop-field_abstract'] = array(
    'bundle' => 'panel_workshop',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Brief description of Panel / Workshop',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_abstract',
    'label' => 'Abstract',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'node-panel_workshop-field_audeince_experience_level'.
  $field_instances['node-panel_workshop-field_audeince_experience_level'] = array(
    'bundle' => 'panel_workshop',
    'default_value' => array(
      0 => array(
        'tid' => 35,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audeince_experience_level',
    'label' => 'Audeince Experience Level',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-panel_workshop-field_audio_video_equipment_usag'.
  $field_instances['node-panel_workshop-field_audio_video_equipment_usag'] = array(
    'bundle' => 'panel_workshop',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select yes when you need audio and video equipment to play a video, to display a presentation (power point etc.) or for video phone calls (skype, google hangout, jitsi etc.).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audio_video_equipment_usag',
    'label' => 'Video/Audio Equipment Usage',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'node-panel_workshop-field_availability_for_schedulin'.
  $field_instances['node-panel_workshop-field_availability_for_schedulin'] = array(
    'bundle' => 'panel_workshop',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Let us know if one or more of your speakers can only make it during a specific time slot, select multiple sessions whenever possible.
Tick "Entire Saturday" and "Entire Sunday" when all your speaker are flexible.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_availability_for_schedulin',
    'label' => 'Availability for scheduling',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-panel_workshop-field_host_sponsor'.
  $field_instances['node-panel_workshop-field_host_sponsor'] = array(
    'bundle' => 'panel_workshop',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_host_sponsor',
    'label' => 'Host/Sponsor',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'node-panel_workshop-field_no_video_audio_recording'.
  $field_instances['node-panel_workshop-field_no_video_audio_recording'] = array(
    'bundle' => 'panel_workshop',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select "No" if you do not want your panel video or audio recorded or live streamed. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_no_video_audio_recording',
    'label' => 'A/V Recording',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-panel_workshop-field_organizer_info'.
  $field_instances['node-panel_workshop-field_organizer_info'] = array(
    'bundle' => 'panel_workshop',
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Information about the panel/workshop organizer.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organizer_info',
    'label' => 'Organizer Info',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(),
      ),
      'type' => 'inline_entity_form_single',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-panel_workshop-field_other_special_needs'.
  $field_instances['node-panel_workshop-field_other_special_needs'] = array(
    'bundle' => 'panel_workshop',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_other_special_needs',
    'label' => 'Other Special Needs',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-panel_workshop-field_panel_track'.
  $field_instances['node-panel_workshop-field_panel_track'] = array(
    'bundle' => 'panel_workshop',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'When your panel is part of a panel track, please fill out the panel track title.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_panel_track',
    'label' => 'Panel Track',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-panel_workshop-field_panel_type'.
  $field_instances['node-panel_workshop-field_panel_type'] = array(
    'bundle' => 'panel_workshop',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_panel_type',
    'label' => 'Panel Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-panel_workshop-field_participant_info'.
  $field_instances['node-panel_workshop-field_participant_info'] = array(
    'bundle' => 'panel_workshop',
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_participant_info',
    'label' => 'Participant Info',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(),
      ),
      'type' => 'inline_entity_form',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-panel_workshop-field_topics'.
  $field_instances['node-panel_workshop-field_topics'] = array(
    'bundle' => 'panel_workshop',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What is the topic area of your panel/workshop? Only three can be selected.
Autocomplete tag field.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_topics',
    'label' => 'Topics',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => -2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A/V Recording');
  t('Abstract');
  t('Audeince Experience Level');
  t('Availability for scheduling');
  t('Brief description of Panel / Workshop');
  t('Host/Sponsor');
  t('Information about the panel/workshop organizer.');
  t('Let us know if one or more of your speakers can only make it during a specific time slot, select multiple sessions whenever possible.
Tick "Entire Saturday" and "Entire Sunday" when all your speaker are flexible.');
  t('Organizer Info');
  t('Other Special Needs');
  t('Panel Track');
  t('Panel Type');
  t('Participant Info');
  t('Select "No" if you do not want your panel video or audio recorded or live streamed. ');
  t('Select yes when you need audio and video equipment to play a video, to display a presentation (power point etc.) or for video phone calls (skype, google hangout, jitsi etc.).');
  t('Topics');
  t('Video/Audio Equipment Usage');
  t('What is the topic area of your panel/workshop? Only three can be selected.
Autocomplete tag field.');
  t('When your panel is part of a panel track, please fill out the panel track title.');

  return $field_instances;
}

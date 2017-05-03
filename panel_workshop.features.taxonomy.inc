<?php
/**
 * @file
 * panel_workshop.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function panel_workshop_taxonomy_default_vocabularies() {
  return array(
    'audience_experience' => array(
      'name' => 'Audience Experience',
      'machine_name' => 'audience_experience',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'panel_type' => array(
      'name' => 'Panel Type',
      'machine_name' => 'panel_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'panel_workshop_topics' => array(
      'name' => 'Panel/Workshop Topics',
      'machine_name' => 'panel_workshop_topics',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

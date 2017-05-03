<?php
/**
 * @file
 * panel_workshop.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panel_workshop_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function panel_workshop_node_info() {
  $items = array(
    'panel_workshop' => array(
      'name' => t('Panel/Workshop'),
      'base' => 'node_content',
      'description' => t('Proposal for a Panel or Workshop, a redesign of the old and problematic Session content Type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

<?php
/**
 * @file
 * athletics_logos_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function athletics_logos_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-athletics_logos'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'athletics_logos',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'athletics
athletics/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'slcc_subtheme' => array(
        'region' => 'panel_third_1',
        'status' => 1,
        'theme' => 'slcc_subtheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}

<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function agallery_context_default_contexts() {
  $items = array();

  $items['context_ui-section-fotogalerija'] = array(
    'namespace' => 'context_ui',
    'attribute' => 'section',
    'value' => 'fotogalerija',
    'description' => '',
    'node' => array(
      '0' => 'gallery',
    ),
    'menu_trail' => array(
      'gallery' => 'gallery',
    ),
    'menu' => 'gallery',
    'theme_regiontoggle' => array(
      '0' => 'rsidebar',
    ),
    'block' => array(
      'views_gallery-block_2' => array(
        'module' => 'views',
        'delta' => 'gallery-block_2',
        'weight' => 22,
        'region' => 'lsidebar',
        'status' => '0',
        'label' => 'gallery: Seznam fotogalerij',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function agallery_imagecache_default_presets() {
  $items = array(
    'gallery_big' => array(
      'presetname' => 'gallery_big',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '800',
            'height' => '600',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'gallery_thumb' => array(
      'presetname' => 'gallery_thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '200',
            'height' => '150',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function agallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Fotogalerija'),
      'module' => 'features',
      'description' => t('Fotogalerija je stran s seznamom slik. Naključne slike iz fotogalerij se pojavljajo tudi na vstopni strani.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function agallery_views_api() {
  return array(
    'api' => '2',
  );
}

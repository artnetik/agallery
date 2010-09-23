<?php

/**
 * Implementation of hook_content_default_fields().
 */
function agallery_content_default_fields() {
  $fields = array();

  // Exported field: field_images
  $fields['gallery-field_images'] = array(
    'field_name' => 'field_images',
    'type_name' => 'gallery',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'gallery_thumb_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield__lightbox2__gallery_thumb__gallery_big',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'gallery',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 0,
        'link' => 0,
        'image' => 0,
        'imagecache_novice_mala' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'fupload_mode' => 'multiple',
      'fupload_previewlist_img_attributes' => '',
      'fupload_title_replacements' => '_;{;};-',
      'fupload_previewlist_field_settings' => array(
        'imagefield_title' => 'imagefield_title',
        'imagefield_description' => 'imagefield_description',
        'node_title' => 0,
        'node_description' => 0,
        'imagefield_alt' => 0,
        'taxonomy_1' => 0,
      ),
      'fupload_previewlist_redirecturl' => '',
      'slide_preset' => '0',
      'thumb_preset' => '0',
      'style' => 'nostyle',
      'link_to_full' => 1,
      'link_to_full_preset' => '0',
      'label' => 'Images',
      'weight' => '-2',
      'description' => '',
      'type' => 'image_fupload_imagefield_widget',
      'module' => 'image_fupload_imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');

  return $fields;
}

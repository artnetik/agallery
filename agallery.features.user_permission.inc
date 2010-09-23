<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function agallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create gallery content
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(
      '0' => 'urednik',
    ),
  );

  // Exported permission: delete any gallery content
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(
      '0' => 'urednik',
    ),
  );

  // Exported permission: delete own gallery content
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(
      '0' => 'urednik',
    ),
  );

  // Exported permission: edit any gallery content
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(
      '0' => 'urednik',
    ),
  );

  // Exported permission: edit captions
  $permissions['edit captions'] = array(
    'name' => 'edit captions',
    'roles' => array(
      '0' => 'urednik',
    ),
  );

  // Exported permission: edit own gallery content
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(
      '0' => 'urednik',
    ),
  );

  // Exported permission: mass upload images
  $permissions['mass upload images'] = array(
    'name' => 'mass upload images',
    'roles' => array(
      '0' => 'urednik',
    ),
  );

  // Exported permission: view imagecache gallery_big
  $permissions['view imagecache gallery_big'] = array(
    'name' => 'view imagecache gallery_big',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'urednik',
    ),
  );

  // Exported permission: view imagecache gallery_thumb
  $permissions['view imagecache gallery_thumb'] = array(
    'name' => 'view imagecache gallery_thumb',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'urednik',
    ),
  );

  return $permissions;
}

<?php
/**
 * @file
 * content_admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: ca flush caches.
  $permissions['ca flush caches'] = array(
    'name' => 'ca flush caches',
    'roles' => array(
      0 => 'Content Administrator',
      1 => 'administrator',
    ),
    'module' => 'content_admin',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  return $permissions;
}

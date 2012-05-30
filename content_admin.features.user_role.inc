<?php
/**
 * @file
 * content_admin.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function content_admin_user_default_roles() {
  $roles = array();

  // Exported role: Content Administrator.
  $roles['Content Administrator'] = array(
    'name' => 'Content Administrator',
    'weight' => '3',
  );

  return $roles;
}

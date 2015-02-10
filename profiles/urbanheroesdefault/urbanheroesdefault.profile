<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function urbanheroesdefault_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  $form['site_information']['site_mail']['#default_value'] = 'nick@urban-heroes.nl';
  $form['admin_account']['account']['name']['#default_value'] = 'nick';
  //$form['admin_account']['account']['pass']['#default_value'] = 'Inspiron1200';
  $form['admin_account']['account']['mail']['#default_value'] = 'nick@urban-heroes.nl';
  $form['server_settings']['site_default_country']['#default_value'] = 'NL';
  $form['update_notifications']['update_status_module']['#default_value'] = array(0 => 1);

}

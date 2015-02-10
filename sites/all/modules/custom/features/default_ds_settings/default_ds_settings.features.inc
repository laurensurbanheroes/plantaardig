<?php
/**
 * @file
 * default_ds_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function default_ds_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

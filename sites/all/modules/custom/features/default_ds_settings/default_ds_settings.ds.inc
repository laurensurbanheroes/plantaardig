<?php
/**
 * @file
 * default_ds_settings.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function default_ds_settings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_tekst',
      ),
      'right' => array(
        1 => 'webform',
      ),
      'footer' => array(
        2 => 'field_tekst_2',
      ),
    ),
    'fields' => array(
      'field_tekst' => 'left',
      'webform' => 'right',
      'field_tekst_2' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|webform|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_kolommen_afbeeldingen|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_kolommen_afbeeldingen';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_afbeelding',
      ),
      'right' => array(
        1 => 'field_afbeelding_2',
      ),
    ),
    'fields' => array(
      'field_afbeelding' => 'left',
      'field_afbeelding_2' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|2_kolommen_afbeeldingen|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_kolommen_tekst_afbeelding_link|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_kolommen_tekst_afbeelding_link';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_afbeelding',
      ),
      'right' => array(
        1 => 'field_tekst',
        2 => 'field_link',
      ),
    ),
    'fields' => array(
      'field_afbeelding' => 'left',
      'field_tekst' => 'right',
      'field_link' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|2_kolommen_tekst_afbeelding_link|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_kolommen_tekst_afbeelding_rech|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_kolommen_tekst_afbeelding_rech';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_tekst',
        1 => 'field_link',
      ),
      'right' => array(
        2 => 'field_afbeelding',
      ),
    ),
    'fields' => array(
      'field_tekst' => 'left',
      'field_link' => 'left',
      'field_afbeelding' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|2_kolommen_tekst_afbeelding_rech|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|2_kolommen_tekst|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = '2_kolommen_tekst';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_tekst',
        1 => 'field_link',
      ),
      'right' => array(
        2 => 'field_tekst_2',
        3 => 'field_link_2',
      ),
    ),
    'fields' => array(
      'field_tekst' => 'left',
      'field_link' => 'left',
      'field_tekst_2' => 'right',
      'field_link_2' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|2_kolommen_tekst|default'] = $ds_layout;

  return $export;
}

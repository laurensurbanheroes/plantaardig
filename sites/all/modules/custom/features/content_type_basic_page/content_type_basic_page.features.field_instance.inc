<?php
/**
 * @file
 * content_type_basic_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_basic_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_paragraph_s'
  $field_instances['node-page-field_paragraph_s'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_paragraph_s',
    'label' => 'Paragraph\'s',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1_kolom_afbeelding' => 0,
        '1_kolom_afbeelding_tekst' => 0,
        '1_kolom_tekst' => 0,
        '2_kolommen_afbeeldingen' => 0,
        '2_kolommen_tekst' => 0,
        '2_kolommen_tekst_afbeelding_link' => 0,
        '2_kolommen_tekst_afbeelding_rech' => 0,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Paragraph\'s');

  return $field_instances;
}

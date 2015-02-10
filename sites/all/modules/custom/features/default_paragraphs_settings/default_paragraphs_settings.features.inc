<?php
/**
 * @file
 * default_paragraphs_settings.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function default_paragraphs_settings_paragraphs_info() {
  $items = array(
    '1_kolom_afbeelding' => array(
      'name' => '1 kolom - afbeelding',
      'bundle' => '1_kolom_afbeelding',
      'locked' => '1',
    ),
    '1_kolom_afbeelding_tekst' => array(
      'name' => '1 kolom - afbeelding + tekst',
      'bundle' => '1_kolom_afbeelding_tekst',
      'locked' => '1',
    ),
    '1_kolom_tekst' => array(
      'name' => '1 kolom - tekst',
      'bundle' => '1_kolom_tekst',
      'locked' => '1',
    ),
    '2_kolommen_afbeeldingen' => array(
      'name' => '2 kolommen - afbeeldingen',
      'bundle' => '2_kolommen_afbeeldingen',
      'locked' => '1',
    ),
    '2_kolommen_tekst' => array(
      'name' => '2 kolommen - tekst',
      'bundle' => '2_kolommen_tekst',
      'locked' => '1',
    ),
    '2_kolommen_tekst_afbeelding_link' => array(
      'name' => '2 kolommen - tekst + afbeelding links',
      'bundle' => '2_kolommen_tekst_afbeelding_link',
      'locked' => '1',
    ),
    '2_kolommen_tekst_afbeelding_rech' => array(
      'name' => '2 kolommen - tekst + afbeelding rechts',
      'bundle' => '2_kolommen_tekst_afbeelding_rech',
      'locked' => '1',
    ),
  );
  return $items;
}

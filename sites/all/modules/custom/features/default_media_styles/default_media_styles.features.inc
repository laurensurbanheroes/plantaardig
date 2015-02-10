<?php
/**
 * @file
 * default_media_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function default_media_styles_image_default_styles() {
  $styles = array();

  // Exported image style: afbeelding_100_.
  $styles['afbeelding_100_'] = array(
    'name' => 'afbeelding_100_',
    'label' => 'Afbeelding 100%',
    'effects' => array(
      3 => array(
        'label' => 'Schalen en bijsnijden',
        'help' => 'Bij het schalen blijft de breedte-hoogte verhouding van de oorspronkelijke afbeelding behouden. Bij het bijsnijden wordt de langste zijde ingekort. Hiermee kunt u bijvoorbeeld vierkante miniaturen maken.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2360,
          'height' => 720,
        ),
        'weight' => 1,
      ),
      4 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: afbeelding_50_.
  $styles['afbeelding_50_'] = array(
    'name' => 'afbeelding_50_',
    'label' => 'Afbeelding 50%',
    'effects' => array(
      1 => array(
        'label' => 'Schalen en bijsnijden',
        'help' => 'Bij het schalen blijft de breedte-hoogte verhouding van de oorspronkelijke afbeelding behouden. Bij het bijsnijden wordt de langste zijde ingekort. Hiermee kunt u bijvoorbeeld vierkante miniaturen maken.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1180,
          'height' => 720,
        ),
        'weight' => 1,
      ),
      2 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: afbeelding_tekst.
  $styles['afbeelding_tekst'] = array(
    'name' => 'afbeelding_tekst',
    'label' => 'Afbeelding tekst',
    'effects' => array(
      5 => array(
        'label' => 'Schalen en bijsnijden',
        'help' => 'Bij het schalen blijft de breedte-hoogte verhouding van de oorspronkelijke afbeelding behouden. Bij het bijsnijden wordt de langste zijde ingekort. Hiermee kunt u bijvoorbeeld vierkante miniaturen maken.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 260,
          'height' => 292,
        ),
        'weight' => 1,
      ),
      6 => array(
        'label' => 'Hi-Res (x2)',
        'help' => '<img> dimensions will be half the dimensions of the styled image.',
        'effect callback' => 'hires_images_effect',
        'dimensions callback' => 'hires_images_dimensions',
        'module' => 'hires_images',
        'name' => 'image_hires',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

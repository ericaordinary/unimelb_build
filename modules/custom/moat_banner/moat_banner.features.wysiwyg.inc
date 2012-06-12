<?php
/**
 * @file
 * moat_banner.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function moat_banner_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: moat_banner
  $profiles['moat_banner'] = array(
    'format' => 'moat_banner',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'removeformat' => 1,
        ),
        'font' => array(
          'styleselect' => 1,
        ),
        'paste' => array(
          'pastetext' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p',
      'css_setting' => 'self',
      'css_path' => '%bprofiles/moat_standard/modules/features/moat_banner/css/banner-typography.css',
      'css_classes' => '**Test Class**=test-class',
    ),
  );

  return $profiles;
}

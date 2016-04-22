<?php
/**
 * @file
 * book_review.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function book_review_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-book_review-body'.
  $field_instances['node-book_review-body'] = array(
    'bundle' => 'book_review',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter your book review here.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Review Body',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 12,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-book_review-field_book_author'.
  $field_instances['node-book_review-field_book_author'] = array(
    'bundle' => 'book_review',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter the book\'s author/s.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_book_author',
    'label' => 'Book Author',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-book_review-field_rating'.
  $field_instances['node-book_review-field_rating'] = array(
    'bundle' => 'book_review',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please select your rating of the book. 1 star is a poor rating, 5 stars is two thumbs up.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rating',
    'label' => 'Rating',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Book Author');
  t('Please enter the book\'s author/s.');
  t('Please enter your book review here.');
  t('Please select your rating of the book. 1 star is a poor rating, 5 stars is two thumbs up.');
  t('Rating');
  t('Review Body');

  return $field_instances;
}

<?php
/**
 * @file
 * time_fun.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function time_fun_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function time_fun_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function time_fun_image_default_styles() {
  $styles = array();

  // Exported image style: acknowledgement.
  $styles['acknowledgement'] = array(
    'label' => 'Acknowledgement',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 332,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_thumbnail.
  $styles['gallery_thumbnail'] = array(
    'label' => 'Gallery Thumbnail',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 165,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: masonry.
  $styles['masonry'] = array(
    'label' => 'Masonry',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function time_fun_node_info() {
  $items = array(
    'acknowledgement' => array(
      'name' => t('Благодарность'),
      'base' => 'node_content',
      'description' => t('Письма, грамоты, дипломы и др. бумаги.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Мероприятие'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Название'),
      'help' => '',
    ),
    'feedback' => array(
      'name' => t('Отзыв'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Основная страница'),
      'base' => 'node_content',
      'description' => t('Используйте <em>основная страница</em>для статичного контента с редко изменяемой информацией, например страницы \'О сайте\'.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'photo' => array(
      'name' => t('Фотография'),
      'base' => 'node_content',
      'description' => t('Фотография в галерее'),
      'has_title' => '1',
      'title_label' => t('Название'),
      'help' => '',
    ),
    'video_vk' => array(
      'name' => t('Видео VK'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Название'),
      'help' => '',
    ),
    'video_youtube_vimeo' => array(
      'name' => t('Видео (Youtube, vimeo)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Название'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

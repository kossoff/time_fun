<?php
/**
 * @file
 * time_fun.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function time_fun_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_-:about.
  $menu_links['main-menu_-:about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'О компании',
    'options' => array(
      'identifier' => 'main-menu_-:about',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:contacts.
  $menu_links['main-menu_:contacts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contacts',
    'router_path' => 'contacts',
    'link_title' => 'Контакты',
    'options' => array(
      'identifier' => 'main-menu_:contacts',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:feedback.
  $menu_links['main-menu_:feedback'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'feedback',
    'router_path' => 'feedback',
    'link_title' => 'Отзывы',
    'options' => array(
      'identifier' => 'main-menu_:feedback',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:gallery.
  $menu_links['main-menu_:gallery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'Галерея',
    'options' => array(
      'identifier' => 'main-menu_:gallery',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_:node/27.
  $menu_links['main-menu_:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Цены',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_:node/27',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-events_:taxonomy/term/1.
  $menu_links['menu-events_:taxonomy/term/1'] = array(
    'menu_name' => 'menu-events',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Квесты',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'button',
          1 => 'small',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-events_:taxonomy/term/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-events_:taxonomy/term/2.
  $menu_links['menu-events_:taxonomy/term/2'] = array(
    'menu_name' => 'menu-events',
    'link_path' => 'taxonomy/term/2',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Праздники',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'button',
          1 => 'small',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-events_:taxonomy/term/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-events_:taxonomy/term/3.
  $menu_links['menu-events_:taxonomy/term/3'] = array(
    'menu_name' => 'menu-events',
    'link_path' => 'taxonomy/term/3',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Лагеря',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'button',
          1 => 'small',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-events_:taxonomy/term/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-events_:taxonomy/term/4.
  $menu_links['menu-events_:taxonomy/term/4'] = array(
    'menu_name' => 'menu-events',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Развитие',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'button',
          1 => 'small',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-events_:taxonomy/term/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Галерея');
  t('Квесты');
  t('Контакты');
  t('Лагеря');
  t('О компании');
  t('Отзывы');
  t('Праздники');
  t('Развитие');
  t('Цены');

  return $menu_links;
}

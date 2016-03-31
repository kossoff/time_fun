<?php
/**
 * @file
 * time_fun.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function time_fun_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_3762c597-1d35-4300-9f29-0d55d584f62e';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'event';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'top_a' => NULL,
      'middle_a' => NULL,
      'bottom' => NULL,
      'bottom_a' => NULL,
    ),
    'top_a' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a6b46ee3-6c76-46b9-b3d5-5b60d656c1e2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f73341c6-c20b-49da-ba65-0f87cacece7e';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-calendar_events-block_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Прошедшие мероприятия',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f73341c6-c20b-49da-ba65-0f87cacece7e';
    $display->content['new-f73341c6-c20b-49da-ba65-0f87cacece7e'] = $pane;
    $display->panels['bottom'][0] = 'new-f73341c6-c20b-49da-ba65-0f87cacece7e';
    $pane = new stdClass();
    $pane->pid = 'new-8a4aee1a-b3db-45fd-8e98-e678d8effe90';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-calendar_events-block_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Предстоящие мероприятия',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8a4aee1a-b3db-45fd-8e98-e678d8effe90';
    $display->content['new-8a4aee1a-b3db-45fd-8e98-e678d8effe90'] = $pane;
    $display->panels['middle'][0] = 'new-8a4aee1a-b3db-45fd-8e98-e678d8effe90';
    $pane = new stdClass();
    $pane->pid = 'new-290b0e43-2488-424d-8b38-74ccc25524a2';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '290b0e43-2488-424d-8b38-74ccc25524a2';
    $display->content['new-290b0e43-2488-424d-8b38-74ccc25524a2'] = $pane;
    $display->panels['top'][0] = 'new-290b0e43-2488-424d-8b38-74ccc25524a2';
    $pane = new stdClass();
    $pane->pid = 'new-933a3be1-9ba9-42ba-8b91-a5ffeac7855c';
    $pane->panel = 'top_a';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Заголовок',
      'title' => '<none>',
      'body' => '<h1>%term:name</h1>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '933a3be1-9ba9-42ba-8b91-a5ffeac7855c';
    $display->content['new-933a3be1-9ba9-42ba-8b91-a5ffeac7855c'] = $pane;
    $display->panels['top_a'][0] = 'new-933a3be1-9ba9-42ba-8b91-a5ffeac7855c';
    $pane = new stdClass();
    $pane->pid = 'new-d6bc3f42-d6e8-417f-bea3-e4e2cb51d26b';
    $pane->panel = 'top_a';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd6bc3f42-d6e8-417f-bea3-e4e2cb51d26b';
    $display->content['new-d6bc3f42-d6e8-417f-bea3-e4e2cb51d26b'] = $pane;
    $display->panels['top_a'][1] = 'new-d6bc3f42-d6e8-417f-bea3-e4e2cb51d26b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-d6bc3f42-d6e8-417f-bea3-e4e2cb51d26b';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_3762c597-1d35-4300-9f29-0d55d584f62e'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_65250ca8-f628-4fb8-9086-44f99672c6dc';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'event';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'top_a' => NULL,
      'middle_a' => NULL,
      'bottom' => NULL,
      'bottom_a' => NULL,
    ),
    'top_a' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a6b46ee3-6c76-46b9-b3d5-5b60d656c1e2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f73341c6-c20b-49da-ba65-0f87cacece7e';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-calendar_events-block_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Прошедшие мероприятия',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f73341c6-c20b-49da-ba65-0f87cacece7e';
    $display->content['new-f73341c6-c20b-49da-ba65-0f87cacece7e'] = $pane;
    $display->panels['bottom'][0] = 'new-f73341c6-c20b-49da-ba65-0f87cacece7e';
    $pane = new stdClass();
    $pane->pid = 'new-8a4aee1a-b3db-45fd-8e98-e678d8effe90';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-calendar_events-block_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Предстоящие мероприятия',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8a4aee1a-b3db-45fd-8e98-e678d8effe90';
    $display->content['new-8a4aee1a-b3db-45fd-8e98-e678d8effe90'] = $pane;
    $display->panels['middle'][0] = 'new-8a4aee1a-b3db-45fd-8e98-e678d8effe90';
    $pane = new stdClass();
    $pane->pid = 'new-290b0e43-2488-424d-8b38-74ccc25524a2';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'taxonomy_term:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '290b0e43-2488-424d-8b38-74ccc25524a2';
    $display->content['new-290b0e43-2488-424d-8b38-74ccc25524a2'] = $pane;
    $display->panels['top'][0] = 'new-290b0e43-2488-424d-8b38-74ccc25524a2';
    $pane = new stdClass();
    $pane->pid = 'new-933a3be1-9ba9-42ba-8b91-a5ffeac7855c';
    $pane->panel = 'top_a';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Заголовок',
      'title' => '<none>',
      'body' => '<h1>%term:name</h1>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '933a3be1-9ba9-42ba-8b91-a5ffeac7855c';
    $display->content['new-933a3be1-9ba9-42ba-8b91-a5ffeac7855c'] = $pane;
    $display->panels['top_a'][0] = 'new-933a3be1-9ba9-42ba-8b91-a5ffeac7855c';
    $pane = new stdClass();
    $pane->pid = 'new-d6bc3f42-d6e8-417f-bea3-e4e2cb51d26b';
    $pane->panel = 'top_a';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd6bc3f42-d6e8-417f-bea3-e4e2cb51d26b';
    $display->content['new-d6bc3f42-d6e8-417f-bea3-e4e2cb51d26b'] = $pane;
    $display->panels['top_a'][1] = 'new-d6bc3f42-d6e8-417f-bea3-e4e2cb51d26b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-d6bc3f42-d6e8-417f-bea3-e4e2cb51d26b';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_65250ca8-f628-4fb8-9086-44f99672c6dc'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function time_fun_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about';
  $page->task = 'page';
  $page->admin_title = 'О компании';
  $page->admin_description = '';
  $page->path = 'about';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'О компании',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about__panel_context_eaea1aae-990d-42e5-8e72-6a4663cc5e86';
  $handler->task = 'page';
  $handler->subtask = 'about';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'about';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'wide_1' => NULL,
      'middle_2' => NULL,
      'wide_2' => NULL,
      'middle_3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a31c8223-9fa8-4dcf-b8c7-0b4be4bad5f4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2986f429-9d59-44c1-bf36-6876f82666f6';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'LOGO',
      'title' => '<none>',
      'body' => '<img style="height:150px;" src="/<?php print path_to_theme(); ?>/logo.svg" />',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2986f429-9d59-44c1-bf36-6876f82666f6';
    $display->content['new-2986f429-9d59-44c1-bf36-6876f82666f6'] = $pane;
    $display->panels['middle'][0] = 'new-2986f429-9d59-44c1-bf36-6876f82666f6';
    $pane = new stdClass();
    $pane->pid = 'new-ca71c3ce-0cd5-4bec-aae1-34e406af2628';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Развитие ребенка - лучшая инвестиция',
      'title' => '<none>',
      'body' => '<div class="row">
<div class="medium-12 columns"><h2>Развитие ребенка &mdash; лучшая инвестиция</h2></div>
<div class="medium-8 columns">
<p>Компания «Время веселья» уже более 10 лет занимается детьми, а именно их развитием и досугом. Наша команда – это дружный креативный коллектив, создающий и реализующий даже самые невероятные идеи праздников, мероприятий и путешествий.</p>
<p>«Время Веселья» &mdash; не просто компания по организации праздников, это дружная команда профессионалов своего дела, готовая решить поставленные задачи. Наши сотрудники - это аниматоры с большим опытом работы, вожатые, заботящиеся и любящие детей, психолог, поддерживающий ребенка в любой ситуации и направляющий опытной рукой по волнам жизни, художественный руководитель, готовый к любому творческому испытанию, создающий ваше мероприятие безупречно и неповторимо.</p>
</div>
<div class="medium-4 columns">
<p class="text-orange">Мы существуем, чтобы организация праздничных мероприятий и выездных лагерей стала для вас легким и приятным делом, а для ваших детей ярким и запоминающимся событием.</p>
</div>
</div>

',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ca71c3ce-0cd5-4bec-aae1-34e406af2628';
    $display->content['new-ca71c3ce-0cd5-4bec-aae1-34e406af2628'] = $pane;
    $display->panels['middle'][1] = 'new-ca71c3ce-0cd5-4bec-aae1-34e406af2628';
    $pane = new stdClass();
    $pane->pid = 'new-18a2e19c-0ec1-45fc-bfe2-6a525f82d374';
    $pane->panel = 'middle_2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Наши принципы работы etc',
      'title' => '<none>',
      'body' => '<div class="row">
<div class="medium-4 columns">
<h2>Наши принципы работы</h2>
<p>Ваш ребенок переполнен энергией, но вы не знаете куда ее деть, или сидит днями дома, не интересуясь ничем, кроме компьютера? Индивидуальный подход к каждому помогает вовлечь детей в активную деятельность, раскрыть потенциал.</p>
<div class="text-center"><img style="width:150px;" src="/<?php print path_to_theme(); ?>/images/tag_cylinder.jpg" /></div>
</div>

<div class="medium-4 columns">
<h3 class="text-violet">Безопасность</h3>
<p>Физическая и моральная безопасность &mdash; основа наших принципов.</p>
<h3 class="text-orange">Каждый ребенок &mdash; личность</h3>
<p>Каждый ребенок уникален и неповторим, поэтому мы общаемся с ребенком на его языке.</p>
<h3 class="text-red">Мир в игре</h3>
<p>Мы вовлекаем детей, а не заставляем их. Любое занятие можно сделать интересным.</p>
</div>
<div class="medium-4 columns">
<h3 class="text-green">Нет вредных детей</h3>
<p>Мы находим индивидуальный подход к каждому и раскрываем его потенциал.</p>
<h3 class="text-blue">Мы не даем советов как воспитывать детей</h3>
<p>Мы вовлекаем их вместе с вами.</p>
</div>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '18a2e19c-0ec1-45fc-bfe2-6a525f82d374';
    $display->content['new-18a2e19c-0ec1-45fc-bfe2-6a525f82d374'] = $pane;
    $display->panels['middle_2'][0] = 'new-18a2e19c-0ec1-45fc-bfe2-6a525f82d374';
    $pane = new stdClass();
    $pane->pid = 'new-a78f8b0e-45e9-44f1-ac59-fccaabe4bd44';
    $pane->panel = 'middle_3';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Благотворительность',
      'title' => '<none>',
      'body' => '<div class="row">
<div class="medium-12 columns">
<h2 class="text-red">Благотворительность</h2>
</div>
<div class="medium-8 columns">
<p>Благотворительность &mdash; это зов души. Для кого-то &mdash; это деньги, кто-то может оказывать материальную помощь, для кого-то &mdash; это личное участие. Благотворительность означает &laquo;творить благо&raquo;, добро для всех. Для нас благотворительность &mdash; это возможность делиться душевным теплом и улыбками.</p>
<p>Несколько раз в месяц мы проводим бесплатные мероприятия* для детей и их родителей в парках, чтобы каждый ребенок почувствовал себя значимым, проявил себя.</p>
</div>
<div class="medium-4 columns">
  <div class="row collapse">
      <div class="medium-6 columns">
<div class="note">*Ищите бирочку в карточке мероприятия</div>
      </div>
      <div class="medium-6 columns">
<img style="width: 100%;" src="/<?php print path_to_theme(); ?>/images/tag_free.svg" />
      </div>
    </div>
  </div>

</div>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a78f8b0e-45e9-44f1-ac59-fccaabe4bd44';
    $display->content['new-a78f8b0e-45e9-44f1-ac59-fccaabe4bd44'] = $pane;
    $display->panels['middle_3'][0] = 'new-a78f8b0e-45e9-44f1-ac59-fccaabe4bd44';
    $pane = new stdClass();
    $pane->pid = 'new-f913eccd-0802-4a6b-a77c-592234a45e86';
    $pane->panel = 'wide_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Banner Love',
      'title' => '<none>',
      'body' => '<img src="/<?php print drupal_get_path(\'theme\',$GLOBALS[\'theme\']) . \'/images/about_banner_love.jpg\'; ?>" />',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f913eccd-0802-4a6b-a77c-592234a45e86';
    $display->content['new-f913eccd-0802-4a6b-a77c-592234a45e86'] = $pane;
    $display->panels['wide_1'][0] = 'new-f913eccd-0802-4a6b-a77c-592234a45e86';
    $pane = new stdClass();
    $pane->pid = 'new-55b4e565-b5d9-4869-a4c7-822a2d766a64';
    $pane->panel = 'wide_2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Картинки с сердечками',
      'title' => '<none>',
      'body' => '<img src="/<?php print drupal_get_path(\'theme\',$GLOBALS[\'theme\']) . \'/images/about_banner_charity.jpg\'; ?>" />',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '55b4e565-b5d9-4869-a4c7-822a2d766a64';
    $display->content['new-55b4e565-b5d9-4869-a4c7-822a2d766a64'] = $pane;
    $display->panels['wide_2'][0] = 'new-55b4e565-b5d9-4869-a4c7-822a2d766a64';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-ca71c3ce-0cd5-4bec-aae1-34e406af2628';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contacts';
  $page->task = 'page';
  $page->admin_title = 'Контакты';
  $page->admin_description = '';
  $page->path = 'contacts';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Контакты',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contacts__panel';
  $handler->task = 'page';
  $handler->subtask = 'contacts';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a4fa09a0-8545-4f0d-b64a-e91e92ecf4d1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e26886b6-7f8b-44ff-a8ac-042090b511a4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Контакты',
      'title' => '<none>',
      'body' => '<div class="large-4 columns">
<p><i class="fa fa-phone fw"></i>&nbsp;Телефон:<br>
+7 (499) 502-25-50<br>
<small>ежедневно, круглосуточно</small></p>
</div>
<div class="large-4 columns">
<p><i class="fa fa-envelope fw"></i>&nbsp;Электронная почта:<br>
<a href="mailto:info@time-fun.ru">info@time-fun.ru</a></p>
</div>
<div class="large-4 columns">
<p><i class="fa fa-map-marker fw"></i>&nbsp;Адрес:<br>
Москва, Электролитный проезд, 16, к.&nbsp;1</p>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e26886b6-7f8b-44ff-a8ac-042090b511a4';
    $display->content['new-e26886b6-7f8b-44ff-a8ac-042090b511a4'] = $pane;
    $display->panels['middle'][0] = 'new-e26886b6-7f8b-44ff-a8ac-042090b511a4';
    $pane = new stdClass();
    $pane->pid = 'new-520a3056-dc51-43b1-9dec-f6afdc61b1aa';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Yandex.Map',
      'title' => '<none>',
      'body' => '<div class="row">
<div class="large-12 columns"><div id="map" style="width: 100%; min-height: 600px;"></div></div>
</div>

<?php drupal_add_js(\'https://api-maps.yandex.ru/2.1/?lang=ru_RU\', \'external\'); ?>

<script type="text/javascript">
    ymaps.ready(init);
    var myMap;

    function init(){     
        myMap = new ymaps.Map("map", {
            center: [55.670128, 37.611533],
            controls: [\'zoomControl\', \'fullscreenControl\'],
            zoom: 16
        });

        myPlacemark = new ymaps.Placemark( [55.670128, 37.611533], { 
            iconContent: \'&laquo;Время веселья&raquo;\',
            balloonContentHeader: \'&laquo;Время веселья&raquo;\',
            balloonContentBody: \'Москва, Электролитный пр-д, дом 16, корпус 1<br>+7 (499) 502-25-50<br><a href="info@time-fun.ru">info@time-fun.ru</a>\',
        },
        {
            preset: \'islands#blueStretchyIcon\',
        });

        myMap.geoObjects.add(myPlacemark);
        myPlacemark.balloon.open();
  };
</script>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '520a3056-dc51-43b1-9dec-f6afdc61b1aa';
    $display->content['new-520a3056-dc51-43b1-9dec-f6afdc61b1aa'] = $pane;
    $display->panels['middle'][1] = 'new-520a3056-dc51-43b1-9dec-f6afdc61b1aa';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contacts'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'feedback';
  $page->task = 'page';
  $page->admin_title = 'Отзывы';
  $page->admin_description = '';
  $page->path = 'feedback';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Отзывы',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_feedback__panel';
  $handler->task = 'page';
  $handler->subtask = 'feedback';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'goldenratio';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top23' => NULL,
      'top13' => NULL,
      'bottom13' => NULL,
      'bottom23' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Наши друзья о нас';
  $display->uuid = '3a088b0b-bffc-432d-bc13-23d11ad6dd7b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-43d2c059-ed37-4fe2-9c6b-42f695e94d3e';
    $pane->panel = 'top13';
    $pane->type = 'block';
    $pane->subtype = 'views-80712bba0b55479505bb34d5cef55721';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Благодарности от наших клиентов',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '43d2c059-ed37-4fe2-9c6b-42f695e94d3e';
    $display->content['new-43d2c059-ed37-4fe2-9c6b-42f695e94d3e'] = $pane;
    $display->panels['top13'][0] = 'new-43d2c059-ed37-4fe2-9c6b-42f695e94d3e';
    $pane = new stdClass();
    $pane->pid = 'new-6f514353-7cf6-477a-acfc-50679b18827e';
    $pane->panel = 'top23';
    $pane->type = 'block';
    $pane->subtype = 'views-feedbacks-block_feedbacks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6f514353-7cf6-477a-acfc-50679b18827e';
    $display->content['new-6f514353-7cf6-477a-acfc-50679b18827e'] = $pane;
    $display->panels['top23'][0] = 'new-6f514353-7cf6-477a-acfc-50679b18827e';
    $pane = new stdClass();
    $pane->pid = 'new-ee1cfc11-a562-4e3d-b3fb-16fd023050d5';
    $pane->panel = 'top23';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Оставить отзыв',
      'title' => '<none>',
      'body' => '<a class="button expand radius" href="#">Оставить отзыв &#9656;</a>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ee1cfc11-a562-4e3d-b3fb-16fd023050d5';
    $display->content['new-ee1cfc11-a562-4e3d-b3fb-16fd023050d5'] = $pane;
    $display->panels['top23'][1] = 'new-ee1cfc11-a562-4e3d-b3fb-16fd023050d5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['feedback'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front';
  $page->task = 'page';
  $page->admin_title = 'Главная';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front__panel_context_496147fe-4209-44cf-bbb1-38dbcf8701e4';
  $handler->task = 'page';
  $handler->subtask = 'front';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'front';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'middle_1' => NULL,
      'middle_2' => NULL,
      'bottom_1' => NULL,
      'bottom_2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fcb36b1c-3d7e-4b2f-8a7f-1c5a1f990b41';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a23c85d2-d6c3-4c8b-b721-f0c6933ff553';
    $pane->panel = 'bottom_1';
    $pane->type = 'block';
    $pane->subtype = 'views-calendar_events-block_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a23c85d2-d6c3-4c8b-b721-f0c6933ff553';
    $display->content['new-a23c85d2-d6c3-4c8b-b721-f0c6933ff553'] = $pane;
    $display->panels['bottom_1'][0] = 'new-a23c85d2-d6c3-4c8b-b721-f0c6933ff553';
    $pane = new stdClass();
    $pane->pid = 'new-1790cdb0-d931-4a4a-9513-155e083b370f';
    $pane->panel = 'bottom_2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Жираф',
      'title' => '',
      'body' => '<a href="/meropriyatiya/den-rozhdeniya"><img src="<?php print \'/\' . drupal_get_path(\'theme\',$GLOBALS[\'theme\']) . \'/images/giraffe.png\'; ?>" /></a>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1790cdb0-d931-4a4a-9513-155e083b370f';
    $display->content['new-1790cdb0-d931-4a4a-9513-155e083b370f'] = $pane;
    $display->panels['bottom_2'][0] = 'new-1790cdb0-d931-4a4a-9513-155e083b370f';
    $pane = new stdClass();
    $pane->pid = 'new-fa8aff32-f47d-423b-8682-a3c06f886213';
    $pane->panel = 'bottom_2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Посмотреть все 2',
      'title' => '',
      'body' => '<br><a href="/meropriyatiya/year" class="button alert expand radius">Мероприятия за год &#9656;</a>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fa8aff32-f47d-423b-8682-a3c06f886213';
    $display->content['new-fa8aff32-f47d-423b-8682-a3c06f886213'] = $pane;
    $display->panels['bottom_2'][1] = 'new-fa8aff32-f47d-423b-8682-a3c06f886213';
    $pane = new stdClass();
    $pane->pid = 'new-fbf563a5-c1a2-4d2a-b207-a284cd1cf091';
    $pane->panel = 'middle_1';
    $pane->type = 'block';
    $pane->subtype = 'views-calendar_events-block_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fbf563a5-c1a2-4d2a-b207-a284cd1cf091';
    $display->content['new-fbf563a5-c1a2-4d2a-b207-a284cd1cf091'] = $pane;
    $display->panels['middle_1'][0] = 'new-fbf563a5-c1a2-4d2a-b207-a284cd1cf091';
    $pane = new stdClass();
    $pane->pid = 'new-3e240a69-2257-4734-bb3d-2afa70e27626';
    $pane->panel = 'middle_2';
    $pane->type = 'block';
    $pane->subtype = 'views-calendar_events-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e240a69-2257-4734-bb3d-2afa70e27626';
    $display->content['new-3e240a69-2257-4734-bb3d-2afa70e27626'] = $pane;
    $display->panels['middle_2'][0] = 'new-3e240a69-2257-4734-bb3d-2afa70e27626';
    $pane = new stdClass();
    $pane->pid = 'new-286aa7ed-ddfb-4bb3-ae5c-4383a8d8fe98';
    $pane->panel = 'middle_2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Посмотреть все',
      'title' => '',
      'body' => '<br><a href="/meropriyatiya/upcoming" class="button alert expand radius">Посмотреть все &#9656;</a>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '286aa7ed-ddfb-4bb3-ae5c-4383a8d8fe98';
    $display->content['new-286aa7ed-ddfb-4bb3-ae5c-4383a8d8fe98'] = $pane;
    $display->panels['middle_2'][1] = 'new-286aa7ed-ddfb-4bb3-ae5c-4383a8d8fe98';
    $pane = new stdClass();
    $pane->pid = 'new-edf9a72a-28af-451a-8a55-73f7a873e922';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Слайдер',
      'title' => '',
      'body' => '<ul class="slider" data-orbit data-options="animation_speed:1500;navigation_arrows: true; slide_number: false; bullets: false; resume_on_mouseout: true;  timer_speed: 5000;">
 <li>
  <a href="http://new.time-fun.ru/events/kvesty/kvest-detektiv-v-mire-zhivotnyh"><img src="/sites/time-fun.ru/files/slideshow/kvest-detektiv1_na_sait4_0.jpg"></a>
 </li>
 </ul>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'edf9a72a-28af-451a-8a55-73f7a873e922';
    $display->content['new-edf9a72a-28af-451a-8a55-73f7a873e922'] = $pane;
    $display->panels['top'][0] = 'new-edf9a72a-28af-451a-8a55-73f7a873e922';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-edf9a72a-28af-451a-8a55-73f7a873e922';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gallery';
  $page->task = 'page';
  $page->admin_title = 'Галерея';
  $page->admin_description = '';
  $page->path = 'gallery';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Галерея',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_gallery__panel';
  $handler->task = 'page';
  $handler->subtask = 'gallery';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'goldenratio';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top23' => NULL,
      'top13' => NULL,
      'bottom13' => NULL,
      'bottom23' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '957d2274-86a9-4216-9ed1-2698183785d2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a9f40a7f-00fe-4068-83b4-3dc65a6a5f63';
    $pane->panel = 'bottom23';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Snippets',
      'title' => '',
      'body' => '<?php drupal_add_js(\'https://cdnjs.cloudflare.com/ajax/libs/masonry/3.3.2/masonry.pkgd.min.js\', \'external\'); ?>

<script>
(function ($) {
  Drupal.behaviors.yourBehaviorName = {
    attach: function (context, settings) {
      // Do your thing here.
      $(\'.grid-masonry\').masonry({
        // options
        itemSelector: \'.grid-masonry-item\',
        "gutter": 20,
        columnWidth: 320
      });
    }
  };
})(jQuery);
</script>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a9f40a7f-00fe-4068-83b4-3dc65a6a5f63';
    $display->content['new-a9f40a7f-00fe-4068-83b4-3dc65a6a5f63'] = $pane;
    $display->panels['bottom23'][0] = 'new-a9f40a7f-00fe-4068-83b4-3dc65a6a5f63';
    $pane = new stdClass();
    $pane->pid = 'new-4a5c99a9-15e6-4536-9168-4754de061f64';
    $pane->panel = 'top13';
    $pane->type = 'block';
    $pane->subtype = 'views-video-block_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4a5c99a9-15e6-4536-9168-4754de061f64';
    $display->content['new-4a5c99a9-15e6-4536-9168-4754de061f64'] = $pane;
    $display->panels['top13'][0] = 'new-4a5c99a9-15e6-4536-9168-4754de061f64';
    $pane = new stdClass();
    $pane->pid = 'new-43a61c99-5cab-4a05-bbae-b5c1a5c417a1';
    $pane->panel = 'top23';
    $pane->type = 'block';
    $pane->subtype = 'views-gallery-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '43a61c99-5cab-4a05-bbae-b5c1a5c417a1';
    $display->content['new-43a61c99-5cab-4a05-bbae-b5c1a5c417a1'] = $pane;
    $display->panels['top23'][0] = 'new-43a61c99-5cab-4a05-bbae-b5c1a5c417a1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gallery'] = $page;

  return $pages;

}

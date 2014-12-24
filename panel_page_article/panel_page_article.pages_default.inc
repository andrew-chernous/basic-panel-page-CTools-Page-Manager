<?php
/**
 * @file
 * panel_page_article.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panel_page_article_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'articles_page';
  $page->task = 'page';
  $page->admin_title = 'articles_page';
  $page->admin_description = '';
  $page->path = 'articles';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
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
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_articles_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'articles_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'article_page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Node',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '3',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'context_entity:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2715675d-3d33-441a-9f2f-322d28531ded';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-556520cd-bbaf-4946-bace-33ad8ded84e1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'article_on_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '556520cd-bbaf-4946-bace-33ad8ded84e1';
    $display->content['new-556520cd-bbaf-4946-bace-33ad8ded84e1'] = $pane;
    $display->panels['middle'][0] = 'new-556520cd-bbaf-4946-bace-33ad8ded84e1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['articles_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'test_page';
  $page->task = 'page';
  $page->admin_title = 'Test page';
  $page->admin_description = '';
  $page->path = 'node/3';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'node/3',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_test_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'test_page';
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
    'contexts' => array(
      0 => array(
        'identifier' => 'Node',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '3',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '891f374d-5e12-40e8-b463-96ad25046155';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4de2a892-51e0-45e4-9767-cd22758284af';
    $pane->panel = 'middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'context_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4de2a892-51e0-45e4-9767-cd22758284af';
    $display->content['new-4de2a892-51e0-45e4-9767-cd22758284af'] = $pane;
    $display->panels['middle'][0] = 'new-4de2a892-51e0-45e4-9767-cd22758284af';
    $pane = new stdClass();
    $pane->pid = 'new-e33f448f-e7bd-4744-8505-3b8f1e23abed';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e33f448f-e7bd-4744-8505-3b8f1e23abed';
    $display->content['new-e33f448f-e7bd-4744-8505-3b8f1e23abed'] = $pane;
    $display->panels['middle'][1] = 'new-e33f448f-e7bd-4744-8505-3b8f1e23abed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['test_page'] = $page;

  return $pages;

}

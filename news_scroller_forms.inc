<?php

function news_scroller_admin_settings_form(&$form_state) {
  $form = array();

  $form['news_scroller_item_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Item Count'),
    '#description' => t('How many items to pull from the view'),
    '#default_value' => variable_get('news_scroller_item_count', 5),
  );
  
  $form['news_scroller_intro'] = array(
    '#type' => 'textfield',
    '#title' => t('Intro Text'),
    '#description' => t('Text that precedes the scrolling news list, for example, "Breaking News: "'),
    '#default_value' => variable_get('news_scroller_intro', ''),
  );
  

  return system_settings_form($form);
}
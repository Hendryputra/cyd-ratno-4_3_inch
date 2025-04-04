#include "styles.h"
#include "images.h"
#include "fonts.h"

#include "ui.h"
#include "screens.h"

//
// Style: screen_title
//

void init_style_screen_title_MAIN_DEFAULT(lv_style_t *style) {
    lv_style_set_text_font(style, &lv_font_montserrat_24);
};

lv_style_t *get_style_screen_title_MAIN_DEFAULT() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_screen_title_MAIN_DEFAULT(style);
    }
    return style;
};

void init_style_screen_title_MAIN_PRESSED(lv_style_t *style) {
    lv_style_set_text_font(style, &ui_font_7seg14);
    lv_style_set_text_color(style, lv_color_hex(0xffe4b0b0));
};

lv_style_t *get_style_screen_title_MAIN_PRESSED() {
    static lv_style_t *style;
    if (!style) {
        style = lv_mem_alloc(sizeof(lv_style_t));
        lv_style_init(style);
        init_style_screen_title_MAIN_PRESSED(style);
    }
    return style;
};

void add_style_screen_title(lv_obj_t *obj) {
    (void)obj;
    lv_obj_add_style(obj, get_style_screen_title_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(obj, get_style_screen_title_MAIN_PRESSED(), LV_PART_MAIN | LV_STATE_PRESSED);
};

void remove_style_screen_title(lv_obj_t *obj) {
    (void)obj;
    lv_obj_remove_style(obj, get_style_screen_title_MAIN_DEFAULT(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_remove_style(obj, get_style_screen_title_MAIN_PRESSED(), LV_PART_MAIN | LV_STATE_PRESSED);
};

//
//
//

void add_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*AddStyleFunc)(lv_obj_t *obj);
    static const AddStyleFunc add_style_funcs[] = {
        add_style_screen_title,
    };
    add_style_funcs[styleIndex](obj);
}

void remove_style(lv_obj_t *obj, int32_t styleIndex) {
    typedef void (*RemoveStyleFunc)(lv_obj_t *obj);
    static const RemoveStyleFunc remove_style_funcs[] = {
        remove_style_screen_title,
    };
    remove_style_funcs[styleIndex](obj);
}


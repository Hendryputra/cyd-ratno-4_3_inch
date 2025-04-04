#include <string.h>

#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

#include <string.h>

objects_t objects;
lv_obj_t *tick_value_change_obj;

static void event_handler_cb_main_bstop(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 4, 0, e);
    }
}

static void event_handler_cb_main_breset(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 5, 0, e);
    }
}

static void event_handler_cb_main_bconfig(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 6, 0, e);
    }
}

static void event_handler_cb_config_obj0(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 2, 0, e);
    }
}

static void event_handler_cb_config_obj1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 4, 0, e);
    }
}

static void event_handler_cb_config_obj2(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 6, 0, e);
    }
}

static void event_handler_cb_config_obj3(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_CLICKED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 8, 0, e);
    }
}

static void event_handler_cb_setpoint_kb1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
    }
}

static void event_handler_cb_setpoint_ta1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 5, 0, e);
    }
}

static void event_handler_cb_setpoint_ta2(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 6, 0, e);
    }
}

static void event_handler_cb_setpoint_ta3(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 7, 0, e);
    }
}

static void event_handler_cb_pset_timer_tah(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 5, 0, e);
    }
}

static void event_handler_cb_pset_timer_tam(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    (void)flowState;
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 6, 0, e);
    }
}

void create_screen_main() {
    void *flowState = getFlowState(0, 0);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.main = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 270);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_img_create(parent_obj);
            lv_obj_set_pos(obj, 0, -2);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_img_set_src(obj, &img_main_back);
        }
        {
            // bstart
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.bstart = obj;
            lv_obj_set_pos(obj, 345, 61);
            lv_obj_set_size(obj, 123, 45);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 100, LV_PART_MAIN | LV_STATE_PRESSED);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff1161a1), LV_PART_MAIN | LV_STATE_PRESSED);
        }
        {
            // bstop
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.bstop = obj;
            lv_obj_set_pos(obj, 345, 113);
            lv_obj_set_size(obj, 123, 45);
            lv_obj_add_event_cb(obj, event_handler_cb_main_bstop, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 100, LV_PART_MAIN | LV_STATE_PRESSED);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff1161a1), LV_PART_MAIN | LV_STATE_PRESSED);
        }
        {
            // breset
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.breset = obj;
            lv_obj_set_pos(obj, 345, 167);
            lv_obj_set_size(obj, 123, 45);
            lv_obj_add_event_cb(obj, event_handler_cb_main_breset, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 100, LV_PART_MAIN | LV_STATE_PRESSED);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff1161a1), LV_PART_MAIN | LV_STATE_PRESSED);
        }
        {
            // bconfig
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.bconfig = obj;
            lv_obj_set_pos(obj, 345, 216);
            lv_obj_set_size(obj, 123, 45);
            lv_obj_add_event_cb(obj, event_handler_cb_main_bconfig, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_shadow_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 100, LV_PART_MAIN | LV_STATE_PRESSED);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff1161a1), LV_PART_MAIN | LV_STATE_PRESSED);
        }
        {
            // tsuhu
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.tsuhu = obj;
            lv_obj_set_pos(obj, 41, 66);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &ui_font_consolas120, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "00.0");
        }
        {
            // ttimer
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.ttimer = obj;
            lv_obj_set_pos(obj, 26, 209);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &ui_font_consolas48, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "00:00:00");
        }
        {
            // tsettimer
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.tsettimer = obj;
            lv_obj_set_pos(obj, 252, 194);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &ui_font_consolas23, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "00:00");
        }
        {
            // tsetsuhu
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.tsetsuhu = obj;
            lv_obj_set_pos(obj, 259, 37);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &ui_font_consolas23, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "000");
        }
        {
            // talarm
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.talarm = obj;
            lv_obj_set_pos(obj, 143, 6);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Alarm Off");
        }
        {
            // theater
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.theater = obj;
            lv_obj_set_pos(obj, 238, 6);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Heater Off");
        }
        {
            // tstatus
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.tstatus = obj;
            lv_obj_set_pos(obj, 26, 6);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Standby");
        }
        {
            // terror
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.terror = obj;
            lv_obj_set_pos(obj, 113, 159);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffff0000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Door Open");
        }
        {
            // ilogo
            lv_obj_t *obj = lv_img_create(parent_obj);
            objects.ilogo = obj;
            lv_obj_set_pos(obj, 351, 6);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_img_set_src(obj, &img_bisamed);
        }
    }
    
    tick_screen_main();
}

void tick_screen_main() {
    void *flowState = getFlowState(0, 0);
    (void)flowState;
}

void create_screen_config() {
    void *flowState = getFlowState(0, 1);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.config = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 270);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff211ff0), LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj0 = obj;
            lv_obj_set_pos(obj, 198, 85);
            lv_obj_set_size(obj, 100, 50);
            lv_obj_add_event_cb(obj, event_handler_cb_config_obj0, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffbabbbb), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj4 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Timer");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj1 = obj;
            lv_obj_set_pos(obj, 315, 85);
            lv_obj_set_size(obj, 100, 50);
            lv_obj_add_event_cb(obj, event_handler_cb_config_obj1, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffbabbbb), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj5 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Advance");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj2 = obj;
            lv_obj_set_pos(obj, 82, 85);
            lv_obj_set_size(obj, 100, 50);
            lv_obj_add_event_cb(obj, event_handler_cb_config_obj2, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffbabbbb), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj6 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_recolor(obj, true);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Set Point");
                }
            }
        }
        {
            lv_obj_t *obj = lv_btn_create(parent_obj);
            objects.obj3 = obj;
            lv_obj_set_pos(obj, 322, 203);
            lv_obj_set_size(obj, 100, 50);
            lv_obj_add_event_cb(obj, event_handler_cb_config_obj3, LV_EVENT_ALL, flowState);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffbabbbb), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.obj7 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Exit");
                }
            }
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj8 = obj;
            lv_obj_set_pos(obj, 162, 8);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &ui_font_consolas48, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xfffff500), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "CONFIG");
        }
    }
    
    tick_screen_config();
}

void tick_screen_config() {
    void *flowState = getFlowState(0, 1);
    (void)flowState;
}

void create_screen_setpoint() {
    void *flowState = getFlowState(0, 2);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.setpoint = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 270);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff0067ea), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff182fd3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // lb
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lb = obj;
            lv_obj_set_pos(obj, 27, 114);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Setpoint\n");
        }
        {
            // lb_1
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lb_1 = obj;
            lv_obj_set_pos(obj, 11, 191);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Low Temp");
        }
        {
            // lb_2
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lb_2 = obj;
            lv_obj_set_pos(obj, 8, 42);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "High Temp");
        }
        {
            // kb1
            lv_obj_t *obj = lv_keyboard_create(parent_obj);
            objects.kb1 = obj;
            lv_obj_set_pos(obj, 250, 18);
            lv_obj_set_size(obj, 222, 214);
            lv_keyboard_set_mode(obj, LV_KEYBOARD_MODE_NUMBER);
            lv_obj_add_event_cb(obj, event_handler_cb_setpoint_kb1, LV_EVENT_ALL, flowState);
            lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // ta1
            lv_obj_t *obj = lv_textarea_create(parent_obj);
            objects.ta1 = obj;
            lv_obj_set_pos(obj, 109, 14);
            lv_obj_set_size(obj, 103, 75);
            lv_textarea_set_max_length(obj, 3);
            lv_textarea_set_text(obj, "0");
            lv_textarea_set_one_line(obj, true);
            lv_textarea_set_password_mode(obj, false);
            lv_obj_add_event_cb(obj, event_handler_cb_setpoint_ta1, LV_EVENT_ALL, flowState);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLL_WITH_ARROW);
            lv_obj_set_style_text_font(obj, &ui_font_consolas48, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff0f730e), LV_PART_MAIN | LV_STATE_FOCUSED);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_FOCUSED);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_FOCUSED);
        }
        {
            // ta2
            lv_obj_t *obj = lv_textarea_create(parent_obj);
            objects.ta2 = obj;
            lv_obj_set_pos(obj, 109, 89);
            lv_obj_set_size(obj, 103, 73);
            lv_textarea_set_max_length(obj, 3);
            lv_textarea_set_text(obj, "0");
            lv_textarea_set_one_line(obj, true);
            lv_textarea_set_password_mode(obj, false);
            lv_obj_add_event_cb(obj, event_handler_cb_setpoint_ta2, LV_EVENT_ALL, flowState);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLL_WITH_ARROW);
            lv_obj_set_style_text_font(obj, &ui_font_consolas48, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff0f730e), LV_PART_MAIN | LV_STATE_FOCUSED);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_FOCUSED);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_FOCUSED);
        }
        {
            // ta3
            lv_obj_t *obj = lv_textarea_create(parent_obj);
            objects.ta3 = obj;
            lv_obj_set_pos(obj, 109, 164);
            lv_obj_set_size(obj, 103, 73);
            lv_textarea_set_max_length(obj, 3);
            lv_textarea_set_text(obj, "0");
            lv_textarea_set_one_line(obj, true);
            lv_textarea_set_password_mode(obj, false);
            lv_obj_add_event_cb(obj, event_handler_cb_setpoint_ta3, LV_EVENT_ALL, flowState);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLL_WITH_ARROW);
            lv_obj_set_style_text_font(obj, &ui_font_consolas48, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff0f730e), LV_PART_MAIN | LV_STATE_FOCUSED);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_FOCUSED);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_FOCUSED);
        }
    }
    
    tick_screen_setpoint();
}

void tick_screen_setpoint() {
    void *flowState = getFlowState(0, 2);
    (void)flowState;
}

void create_screen_pset_timer() {
    void *flowState = getFlowState(0, 3);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.pset_timer = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 270);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff0067ea), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff182fd3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // lb_4
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lb_4 = obj;
            lv_obj_set_pos(obj, 37, 78);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Hour");
        }
        {
            // kb2
            lv_obj_t *obj = lv_keyboard_create(parent_obj);
            objects.kb2 = obj;
            lv_obj_set_pos(obj, 250, 18);
            lv_obj_set_size(obj, 222, 214);
            lv_keyboard_set_mode(obj, LV_KEYBOARD_MODE_NUMBER);
            lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // ttimer_7
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.ttimer_7 = obj;
            lv_obj_set_pos(obj, 109, 111);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &ui_font_consolas48, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, ":");
        }
        {
            // lb_5
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.lb_5 = obj;
            lv_obj_set_pos(obj, 152, 78);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Minute");
        }
        {
            // tah
            lv_obj_t *obj = lv_textarea_create(parent_obj);
            objects.tah = obj;
            lv_obj_set_pos(obj, 20, 107);
            lv_obj_set_size(obj, 81, 73);
            lv_textarea_set_max_length(obj, 2);
            lv_textarea_set_text(obj, "00");
            lv_textarea_set_one_line(obj, true);
            lv_textarea_set_password_mode(obj, false);
            lv_obj_add_event_cb(obj, event_handler_cb_pset_timer_tah, LV_EVENT_ALL, flowState);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLL_WITH_ARROW);
            lv_obj_set_style_text_font(obj, &ui_font_consolas48, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff0f730e), LV_PART_MAIN | LV_STATE_FOCUSED);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_FOCUSED);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_FOCUSED);
        }
        {
            // tam
            lv_obj_t *obj = lv_textarea_create(parent_obj);
            objects.tam = obj;
            lv_obj_set_pos(obj, 142, 107);
            lv_obj_set_size(obj, 81, 73);
            lv_textarea_set_max_length(obj, 2);
            lv_textarea_set_text(obj, "00");
            lv_textarea_set_one_line(obj, true);
            lv_textarea_set_password_mode(obj, false);
            lv_obj_add_event_cb(obj, event_handler_cb_pset_timer_tam, LV_EVENT_ALL, flowState);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLL_WITH_ARROW);
            lv_obj_set_style_text_font(obj, &ui_font_consolas48, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff0f730e), LV_PART_MAIN | LV_STATE_FOCUSED);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_FOCUSED);
            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_FOCUSED);
        }
    }
    
    tick_screen_pset_timer();
}

void tick_screen_pset_timer() {
    void *flowState = getFlowState(0, 3);
    (void)flowState;
}

void create_screen_advance() {
    void *flowState = getFlowState(0, 4);
    (void)flowState;
    lv_obj_t *obj = lv_obj_create(0);
    objects.advance = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 270);
    lv_obj_set_style_bg_grad_color(obj, lv_color_hex(0xff0067ea), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff182fd3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(obj, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_keyboard_create(parent_obj);
            lv_obj_set_pos(obj, 73, 15);
            lv_obj_set_size(obj, 300, 120);
            lv_keyboard_set_mode(obj, LV_KEYBOARD_MODE_USER_1);
            lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_keyboard_create(parent_obj);
            lv_obj_set_pos(obj, 73, 150);
            lv_obj_set_size(obj, 300, 120);
            lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
    
    tick_screen_advance();
}

void tick_screen_advance() {
    void *flowState = getFlowState(0, 4);
    (void)flowState;
}


extern void add_style(lv_obj_t *obj, int32_t styleIndex);
extern void remove_style(lv_obj_t *obj, int32_t styleIndex);

static const char *screen_names[] = { "Main", "config", "setpoint", "pset_timer", "Advance" };
static const char *object_names[] = { "main", "config", "setpoint", "pset_timer", "advance", "bstop", "breset", "bconfig", "obj0", "obj1", "obj2", "obj3", "kb1", "ta1", "ta2", "ta3", "tah", "tam", "bstart", "tsuhu", "ttimer", "tsettimer", "tsetsuhu", "talarm", "theater", "tstatus", "terror", "ilogo", "obj4", "obj5", "obj6", "obj7", "obj8", "lb", "lb_1", "lb_2", "lb_4", "kb2", "ttimer_7", "lb_5" };
static const char *style_names[] = { "screen_title" };


typedef void (*tick_screen_func_t)();
tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_main,
    tick_screen_config,
    tick_screen_setpoint,
    tick_screen_pset_timer,
    tick_screen_advance,
};
void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
void tick_screen_by_id(enum ScreensEnum screenId) {
    tick_screen_funcs[screenId - 1]();
}

void create_screens() {
    eez_flow_init_styles(add_style, remove_style);
    
    eez_flow_init_screen_names(screen_names, sizeof(screen_names) / sizeof(const char *));
    eez_flow_init_object_names(object_names, sizeof(object_names) / sizeof(const char *));
    eez_flow_init_style_names(style_names, sizeof(style_names) / sizeof(const char *));
    
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_main();
    create_screen_config();
    create_screen_setpoint();
    create_screen_pset_timer();
    create_screen_advance();
}

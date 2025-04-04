#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *config;
    lv_obj_t *setpoint;
    lv_obj_t *pset_timer;
    lv_obj_t *advance;
    lv_obj_t *bstop;
    lv_obj_t *breset;
    lv_obj_t *bconfig;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
    lv_obj_t *obj2;
    lv_obj_t *obj3;
    lv_obj_t *kb1;
    lv_obj_t *ta1;
    lv_obj_t *ta2;
    lv_obj_t *ta3;
    lv_obj_t *tah;
    lv_obj_t *tam;
    lv_obj_t *bstart;
    lv_obj_t *tsuhu;
    lv_obj_t *ttimer;
    lv_obj_t *tsettimer;
    lv_obj_t *tsetsuhu;
    lv_obj_t *talarm;
    lv_obj_t *theater;
    lv_obj_t *tstatus;
    lv_obj_t *terror;
    lv_obj_t *ilogo;
    lv_obj_t *obj4;
    lv_obj_t *obj5;
    lv_obj_t *obj6;
    lv_obj_t *obj7;
    lv_obj_t *obj8;
    lv_obj_t *lb;
    lv_obj_t *lb_1;
    lv_obj_t *lb_2;
    lv_obj_t *lb_4;
    lv_obj_t *kb2;
    lv_obj_t *ttimer_7;
    lv_obj_t *lb_5;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_CONFIG = 2,
    SCREEN_ID_SETPOINT = 3,
    SCREEN_ID_PSET_TIMER = 4,
    SCREEN_ID_ADVANCE = 5,
};

void create_screen_main();
void tick_screen_main();

void create_screen_config();
void tick_screen_config();

void create_screen_setpoint();
void tick_screen_setpoint();

void create_screen_pset_timer();
void tick_screen_pset_timer();

void create_screen_advance();
void tick_screen_advance();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/
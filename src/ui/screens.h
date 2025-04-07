#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *setpoint;
    lv_obj_t *advance;
    lv_obj_t *bconfig;
    lv_obj_t *ta1;
    lv_obj_t *ta2;
    lv_obj_t *ta3;
    lv_obj_t *tah_1;
    lv_obj_t *tam_1;
    lv_obj_t *btok;
    lv_obj_t *btcancel;
    lv_obj_t *btcancel_1;
    lv_obj_t *ta_p;
    lv_obj_t *ta_i;
    lv_obj_t *ta_d;
    lv_obj_t *tadran;
    lv_obj_t *taadj;
    lv_obj_t *tarnt;
    lv_obj_t *btok_1;
    lv_obj_t *btcancel_2;
    lv_obj_t *bstart;
    lv_obj_t *tsuhu;
    lv_obj_t *ttimer;
    lv_obj_t *tsethour;
    lv_obj_t *tsetsuhu;
    lv_obj_t *talarm;
    lv_obj_t *theater;
    lv_obj_t *tstatus;
    lv_obj_t *terror;
    lv_obj_t *tsettimer_1;
    lv_obj_t *tsetmin;
    lv_obj_t *lb;
    lv_obj_t *lb_1;
    lv_obj_t *lb_2;
    lv_obj_t *kb1;
    lv_obj_t *lb_6;
    lv_obj_t *ttimer_8;
    lv_obj_t *lb_7;
    lv_obj_t *lb_3;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
    lv_obj_t *obj2;
    lv_obj_t *kb2;
    lv_obj_t *lb_4;
    lv_obj_t *lb_5;
    lv_obj_t *lb_8;
    lv_obj_t *lb_9;
    lv_obj_t *lb_10;
    lv_obj_t *lb_11;
    lv_obj_t *lb_12;
    lv_obj_t *lb_13;
    lv_obj_t *obj3;
    lv_obj_t *obj4;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_SETPOINT = 2,
    SCREEN_ID_ADVANCE = 3,
};

void create_screen_main();
void tick_screen_main();

void create_screen_setpoint();
void tick_screen_setpoint();

void create_screen_advance();
void tick_screen_advance();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/
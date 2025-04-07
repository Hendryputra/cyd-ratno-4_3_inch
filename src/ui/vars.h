#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations



// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_OUT = 0
};

// Native global variables

extern const char *get_var_suhu();
extern void set_var_suhu(const char *value);
extern const char *get_var_timer();
extern void set_var_timer(const char *value);
extern const char *get_var_sethour();
extern void set_var_sethour(const char *value);
extern const char *get_var_setmin();
extern void set_var_setmin(const char *value);
extern const char *get_var_setpoint();
extern void set_var_setpoint(const char *value);
extern const char *get_var_heater();
extern void set_var_heater(const char *value);
extern const char *get_var_alarm();
extern void set_var_alarm(const char *value);
extern const char *get_var_status();
extern void set_var_status(const char *value);
extern const char *get_var_hightemp();
extern void set_var_hightemp(const char *value);
extern const char *get_var_lowtemp();
extern void set_var_lowtemp(const char *value);
extern const char *get_var_kp();
extern void set_var_kp(const char *value);
extern const char *get_var_ki();
extern void set_var_ki(const char *value);
extern const char *get_var_kd();
extern void set_var_kd(const char *value);
extern const char *get_var_dran();
extern void set_var_dran(const char *value);
extern const char *get_var_adj();
extern void set_var_adj(const char *value);
extern const char *get_var_rnt();
extern void set_var_rnt(const char *value);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/

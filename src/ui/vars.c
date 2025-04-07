#include <string.h>
#include "vars.h"

char suhu[100] = { 0 };

const char *get_var_suhu() {
    return suhu;
}

void set_var_suhu(const char *value) {
    strncpy(suhu, value, sizeof(suhu) / sizeof(char));
    suhu[sizeof(suhu) / sizeof(char) - 1] = 0;
}


char timer[100] = { 0 };

const char *get_var_timer() {
    return timer;
}

void set_var_timer(const char *value) {
    strncpy(timer, value, sizeof(timer) / sizeof(char));
    timer[sizeof(timer) / sizeof(char) - 1] = 0;
}
char sethour[100] = { 0 };

const char *get_var_sethour() {
    return sethour;
}

void set_var_sethour(const char *value) {
    strncpy(sethour, value, sizeof(sethour) / sizeof(char));
    sethour[sizeof(sethour) / sizeof(char) - 1] = 0;
}


char setmin[100] = { 0 };

const char *get_var_setmin() {
    return setmin;
}

void set_var_setmin(const char *value) {
    strncpy(setmin, value, sizeof(setmin) / sizeof(char));
    setmin[sizeof(setmin) / sizeof(char) - 1] = 0;
}


char setpoint[100] = { 0 };

const char *get_var_setpoint() {
    return setpoint;
}

void set_var_setpoint(const char *value) {
    strncpy(setpoint, value, sizeof(setpoint) / sizeof(char));
    setpoint[sizeof(setpoint) / sizeof(char) - 1] = 0;
}


char heater[100] = { 0 };

const char *get_var_heater() {
    return heater;
}

void set_var_heater(const char *value) {
    strncpy(heater, value, sizeof(heater) / sizeof(char));
    heater[sizeof(heater) / sizeof(char) - 1] = 0;
}
#include <string.h>
#include "vars.h"

char alarm[100] = { 0 };

const char *get_var_alarm() {
    return alarm;
}

void set_var_alarm(const char *value) {
    strncpy(alarm, value, sizeof(alarm) / sizeof(char));
    alarm[sizeof(alarm) / sizeof(char) - 1] = 0;
}
#include <string.h>
#include "vars.h"

char status[100] = { 0 };

const char *get_var_status() {
    return status;
}

void set_var_status(const char *value) {
    strncpy(status, value, sizeof(status) / sizeof(char));
    status[sizeof(status) / sizeof(char) - 1] = 0;
}
#include <string.h>
#include "vars.h"

char hightemp[100] = { 0 };

const char *get_var_hightemp() {
    return hightemp;
}

void set_var_hightemp(const char *value) {
    strncpy(hightemp, value, sizeof(hightemp) / sizeof(char));
    hightemp[sizeof(hightemp) / sizeof(char) - 1] = 0;
}
#include <string.h>
#include "vars.h"

char lowtemp[100] = { 0 };

const char *get_var_lowtemp() {
    return lowtemp;
}

void set_var_lowtemp(const char *value) {
    strncpy(lowtemp, value, sizeof(lowtemp) / sizeof(char));
    lowtemp[sizeof(lowtemp) / sizeof(char) - 1] = 0;
}
#include <string.h>
#include "vars.h"

char kp[100] = { 0 };

const char *get_var_kp() {
    return kp;
}

void set_var_kp(const char *value) {
    strncpy(kp, value, sizeof(kp) / sizeof(char));
    kp[sizeof(kp) / sizeof(char) - 1] = 0;
}
#include <string.h>
#include "vars.h"

char ki[100] = { 0 };

const char *get_var_ki() {
    return ki;
}

void set_var_ki(const char *value) {
    strncpy(ki, value, sizeof(ki) / sizeof(char));
    ki[sizeof(ki) / sizeof(char) - 1] = 0;
}
#include <string.h>
#include "vars.h"

char kd[100] = { 0 };

const char *get_var_kd() {
    return kd;
}

void set_var_kd(const char *value) {
    strncpy(kd, value, sizeof(kd) / sizeof(char));
    kd[sizeof(kd) / sizeof(char) - 1] = 0;
}
#include <string.h>
#include "vars.h"

char dran[100] = { 0 };

const char *get_var_dran() {
    return dran;
}

void set_var_dran(const char *value) {
    strncpy(dran, value, sizeof(dran) / sizeof(char));
    dran[sizeof(dran) / sizeof(char) - 1] = 0;
}
#include <string.h>
#include "vars.h"

char adj[100] = { 0 };

const char *get_var_adj() {
    return adj;
}

void set_var_adj(const char *value) {
    strncpy(adj, value, sizeof(adj) / sizeof(char));
    adj[sizeof(adj) / sizeof(char) - 1] = 0;
}
#include <string.h>
#include "vars.h"

char rnt[100] = { 0 };

const char *get_var_rnt() {
    return rnt;
}

void set_var_rnt(const char *value) {
    strncpy(rnt, value, sizeof(rnt) / sizeof(char));
    rnt[sizeof(rnt) / sizeof(char) - 1] = 0;
}

#include <Arduino.h>
#include <esp32_smartdisplay.h>
#include "ui/ui.h"
#include "ui/vars.h"

void setup()
{
  smartdisplay_init();

   auto display = lv_display_get_default();
  //  lv_display_set_rotation(display, LV_DISPLAY_ROTATION_90);
  //  lv_display_set_rotation(display, LV_DISPLAY_ROTATION_180);
  //  lv_display_set_rotation(display, LV_DISPLAY_ROTATION_270);

  ui_init();
}

auto lv_last_tick = millis();

char suhustr[10];
char timerstr[10];
char tsetjam[5], tsetmen[5], tsetpoint[5];
float cntr = 2.2;
int tjam, tmen, tdet, setjam, setmen, setsuhu;
void loop()
{
  auto const now = millis();
  // Update the ticker
  lv_tick_inc(now - lv_last_tick);
  lv_last_tick = now;
  // Update the UI
  lv_timer_handler();
  ui_tick();
  // nyoba2 namanya juga
  tjam = 0;
  tmen = 0;
  tdet = 0;
  setjam = 4;
  setmen = 30;
  setsuhu = 140;

 // sprintf(tsetpoint, "%d", setsuhu);
 // set_var_setpoint(tsetpoint);
 // sprintf(tsetjam, "%02d", setjam);
 // set_var_sethour(tsetjam);
 // sprintf(tsetmen, "%02d", setmen);
 // set_var_setmin(tsetmen);
  //sprintf(timerstr, "%02d:%02d:%02d", tjam, tmen, tdet);
 // set_var_timer(timerstr);


  if(cntr<10){
    sprintf(suhustr, "% 3.1f", cntr);
  }
  else if(cntr<100){
    sprintf(suhustr, "%2.1f", cntr);
  }
  else if(cntr>=100){
    sprintf(suhustr, "%1.0f", cntr);
  }
  set_var_suhu(suhustr);
  cntr += 1;
  if (cntr > 130)
    cntr = 2.2;
}

void test(){

  
}
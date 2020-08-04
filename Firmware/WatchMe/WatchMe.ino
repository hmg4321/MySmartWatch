//WatchMe Firmware

#include "WatchMePower.h"

WatchMePower pwr;
//practiceWatch2 pwr2;

void setup() {
  // put your setup code here, to run once:
  pwr.begin();
  //pwr2.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  bool chargeStatus = pwr.isCharging();
  uint16_t battVoltage = pwr.getBatteryVoltage();

  //print this info to OLED
  
}

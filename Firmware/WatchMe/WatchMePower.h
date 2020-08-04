//Class description here
//Class name = WatchMePower

#ifndef WatchMePower_h
#define WatchMePower_h

// #include <stdio.h>

#include <Arduino.h>

class WatchMePower
{

private: // only use function or variable within class
  //helper functions

public: // function or variable can be used outside of class

  //default constructer
  WatchMePower();
  void begin();
  
  bool isCharging();  // true/false, isCharging
  uint16_t getBatteryVoltage(); 

  void enableGPS();
  void disableGPS();

  void enableMP3();
  void disableMP3();

};

#endif

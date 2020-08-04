#include "WatchMePower.h"

const uint8_t chargePin = 27;
const uint8_t batteryPin = A4;
const uint16_t VDD = 3300; //analog ref voltage
const uint16_t adcResolution= 1023; //ADC resolution
const uint8_t gpsPOWERpin = 2;

//default constructer
WatchMePower::WatchMePower()
{
  
}


void WatchMePower::begin()
{
  pinMode(chargePin, INPUT);
  pinMode(gpsPOWERpin, OUTPUT);
}

//Returns whether or not the battery is charging
bool WatchMePower::isCharging()  // true/false, isCharging
{
  return !(digitalRead(chargePin)); // returns 0 if charging, 1 if not charging
}

uint16_t WatchMePower::getBatteryVoltage()
{
  uint16_t val = analogRead(batteryPin); //10-bit ADC, will return a number between 0 (0V) and 1023 (3.3V)
  uint16_t voltage = VDD*(val/adcResolution); //in mV

  return 2*voltage;
  //return 2*3300(analogRead(batteryPin)/1023)
}

void WatchMePower::enableGPS()
{
  digitalWrite(gpsPOWERpin,HIGH); //enables regulator, turning on GPS circuit
}

void WatchMePower::disableGPS()
{
  digitalWrite(gpsPOWERpin,LOW); //disables regulator, turning off GPS circuit
}

void WatchMePower::enableMP3()
{  
}

void WatchMePower::disableMP3()
{ 
}

/*
  Set time and alarm 
 
  This example code is in the public domain.
 */
 

#include <RTC.h>

#define LED_ALARM BUILTIN_LED1
#define LED_ON LOW
#define LED_OFF HIGH

void alarm_handler();

void setup()
{
  Serial.begin(9600);
  pinMode(LED_ALARM, OUTPUT); // LED for alarm
  digitalWrite(LED_ALARM, LED_OFF); //turn off
  
  RTC.begin();

  RTC.setDateTime(2016, 9, 22, 23, 20, 50, RTC_WEEK_SATURDAY);
  
  RTC.attachAlarmHandler(alarm_handler);
  RTC.setAlarmTime(23, 21, RTC_ALARM_EVERYDAY);
  RTC.alarmOn();
  
}
  
void loop()
{
  int year, mon, day, hour, min, sec, week;
  RTC.getDateTime(year, mon, day, hour, min, sec, week);
  
  Serial.print(year, DEC);Serial.print("/");
  Serial.print(mon, DEC); Serial.print("/");
  Serial.print(day, DEC); Serial.print(" ");
  Serial.print(hour, DEC); Serial.print(":");
  Serial.print(min, DEC); Serial.print(":");
  Serial.println(sec, DEC);
  
  delay(500);
  
}
  
void alarm_handler()
{
  digitalWrite(LED_ALARM, LED_ON); // led for alarm
}
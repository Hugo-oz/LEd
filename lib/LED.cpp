
#include "LED.h"

LED::LED(int pin, int BR)
{
  Serial.begin(BR);
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void LED::link(int time, bool start)
{
  while(start == true)
  {
    digitalWrite(_pin, 1);
    _delay_ms(time);
    digitalWrite(_pin, 0);
    delay(time);
  }
}

void LED::switchete(bool on_off)
{
  if (on_off == true)
  {
    digitalWrite(_pin, 1);
  }
  else
  {
    digitalWrite(_pin, 0);
  }
}
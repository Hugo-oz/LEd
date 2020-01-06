#ifndef LED_h
#define LED_h
#include <Arduino.h>

class LED
{
    private:
        int _pin;
    public: 
        LED(int pin, int BR);
        void link (int Time, bool start);
        void switchete (bool on_off);
};
#endif
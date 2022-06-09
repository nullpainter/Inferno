#ifndef _LEDCONTROL_H_
#define _LEDCONTROL_H_

#include "Flame.h"
#include "Led.h"

#define MAX_LEDS 4

class LedControl
{
public:
    static void add(Led *led);
    static void update();
    static void setIntensity(int intensity);
    static void on();
    static void off();
    static void fadeIn(int duration = FADE_DURATION);
    static void fadeOut(int duration = FADE_DURATION, int delay = 0);

private:
    static byte _ledCount;
    static Led *_leds[MAX_LEDS];
};
#endif
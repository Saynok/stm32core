#ifndef THEFRAMEWORK_GPIO_H
#define THEFRAMEWORK_GPIO_H

#include "stm32f4xx_hal.h"

class xGPIO
{
public:
    xGPIO(int pin, int mode = GPIO_MODE_OUTPUT_PP);
    int read();
    void write(int state);

private:
    int _pin;
};
#endif
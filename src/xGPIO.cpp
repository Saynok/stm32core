#include "xGPIO.h"

xGPIO::xGPIO(int pin, int mode)
{
    _pin = pin;

    GPIO_InitTypeDef GPIO_InitStruct;

    GPIO_InitStruct.Pin = pin;
    GPIO_InitStruct.Mode = mode;
    GPIO_InitStruct.Pull = GPIO_PULLUP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
}

int xGPIO::read()
{
    
    return !HAL_GPIO_ReadPin(GPIOA, _pin);
}

void xGPIO::write(int state)
{
    HAL_GPIO_WritePin(GPIOA, _pin, state == 1 ? GPIO_PIN_SET : GPIO_PIN_RESET );
}

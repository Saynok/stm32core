
#include "xGPIO.h"
#define LED_GPIO_CLK_ENABLE() __HAL_RCC_GPIOA_CLK_ENABLE()

extern "C" int main(void)
{
  HAL_Init();

  LED_GPIO_CLK_ENABLE();
  
  xGPIO output(GPIO_PIN_5);
  xGPIO input(GPIO_PIN_8, GPIO_MODE_INPUT);

  while (1)
  {
    output.write(input.read());
    HAL_Delay(50);
  }
}

extern "C" void SysTick_Handler(void)
{
  HAL_IncTick();
}

extern "C" void NMI_Handler(void)
{
}

extern "C" void HardFault_Handler(void)
{
  while (1)
  {
  }
}

extern "C" void MemManage_Handler(void)
{
  while (1)
  {
  }
}

extern "C" void BusFault_Handler(void)
{
  while (1)
  {
  }
}

extern "C" void UsageFault_Handler(void)
{
  while (1)
  {
  }
}

extern "C" void SVC_Handler(void)
{
}

extern "C" void DebugMon_Handler(void)
{
}

extern "C" void PendSV_Handler(void)
{
}
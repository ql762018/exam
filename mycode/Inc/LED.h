#ifndef LED_H_
#define LED_H_

#include "stm32f1xx_hal.h"
#include "stm32f1xx_hal_gpio.h"

GPIO_PinState LED_Toggle(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState LED_State);
GPIO_PinState LED_On(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
GPIO_PinState LED_Off(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, uint8_t Light_Time, uint32_t StartTime);

#endif
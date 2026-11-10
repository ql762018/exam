#ifndef BUTTON_H_
#define BUTTON_H_

#include "stm32f1xx_hal.h"
#include <stdint.h>

uint8_t Read_Button(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

#endif
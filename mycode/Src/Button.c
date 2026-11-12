#include "Button.h"

//读取按键状态
uint8_t Read_Button(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
    if(HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == GPIO_PIN_RESET)
    {
      HAL_Delay(10); //消抖延时
      while(HAL_GPIO_ReadPin(GPIOx, GPIO_Pin) == GPIO_PIN_RESET);
      HAL_Delay(10); //消抖延时

      return 1;
    }
    return 0;
}

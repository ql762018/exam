#include "LED.h"
#include "stm32f1xx_hal_gpio.h"

//LED灯状态反转
GPIO_PinState LED_Toggle(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState LED_State)
{
    if (LED_State == GPIO_PIN_RESET)
    {
        HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_SET);
        return GPIO_PIN_SET;
    }
    else
    {
        HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_RESET);
        return GPIO_PIN_RESET;
    }
}

//根据时间点亮LED灯
GPIO_PinState LED_On(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
    HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_SET);
    return GPIO_PIN_SET;
}

//根据时间熄灭LED灯
GPIO_PinState LED_Off(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, uint8_t Light_Time, uint32_t StartTime)
{
    if (HAL_GetTick() - StartTime >= Light_Time * 1000)
    {
        HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_RESET);
        return GPIO_PIN_RESET;
    }
    return GPIO_PIN_SET;
}
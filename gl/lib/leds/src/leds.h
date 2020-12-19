#ifndef _LEDS_H
#define _LEDS_H

#include "stm32f4xx_hal.h"

#define LD4_Pin GPIO_PIN_12
#define LD3_Pin GPIO_PIN_13
#define LD5_Pin GPIO_PIN_14
#define LD6_Pin GPIO_PIN_15

#define LEDS_PORT GPIOD

void LEDS_Toggle(uint16_t led);
void LEDS_Init_GPIO(void);

#endif
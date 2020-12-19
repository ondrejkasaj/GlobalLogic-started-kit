#ifndef __HC05_H
#define __HC05_H

#include "stm32f4xx_hal.h"

#define HC05_PORT GPIOD
#define HC05_TX_Pin GPIO_PIN_8
#define HC05_RX_Pin GPIO_PIN_9

void HC05_Init_GPIO(void);

void HC05_Init(void);

void HC05_Write(uint8_t *data, const uint16_t length);

#endif
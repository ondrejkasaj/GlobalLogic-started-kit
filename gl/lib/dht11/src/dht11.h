#ifndef __DHT11
#define __DHT11

#include "stm32f4xx_hal.h"

#define DHT11_IO_Pin GPIO_PIN_11
#define DHT11_IO_GPIO_Port GPIOD

#define DHT11_INITIAL_DELAY 3000
#define DHT11_SUCCESS 0
#define DHT11_ERROR_TIMEOUT_1 1
#define DHT11_ERROR_TIMEOUT_2 2
#define DHT11_ERROR_TIMEOUT_3 3
#define DHT11_ERROR_TIMEOUT_4 4
#define DHT11_ERROR_TIMEOUT_5 5
#define DHT11_ERROR_CHECKSUM 6

void DHT11_Init_TIM(void);
void DHT11_Init_GPIO(void);
void DHT11_Init(void);
int DHT11_Read(uint8_t *temperature, uint8_t *humidity);

#endif
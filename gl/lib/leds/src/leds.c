#include "leds.h"

GPIO_InitTypeDef LEDS_GPIO;

void LEDS_Init_GPIO(void) {
  LEDS_GPIO.Pin = LD4_Pin | LD3_Pin | LD5_Pin | LD6_Pin;
  LEDS_GPIO.Mode = GPIO_MODE_OUTPUT_PP;
  LEDS_GPIO.Pull = GPIO_NOPULL;
  LEDS_GPIO.Speed = GPIO_SPEED_FREQ_LOW;

  HAL_GPIO_Init(LEDS_PORT, &LEDS_GPIO);

  HAL_GPIO_WritePin(LEDS_PORT, LD4_Pin | LD3_Pin | LD5_Pin | LD6_Pin, GPIO_PIN_RESET);
}

void LEDS_Toggle(uint16_t led) {
  HAL_GPIO_TogglePin(LEDS_PORT, led);
}
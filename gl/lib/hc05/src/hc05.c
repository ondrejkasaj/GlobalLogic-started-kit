#include "hc05.h"

UART_HandleTypeDef hc05_handle;
GPIO_InitTypeDef HC05_GPIO;

void HC05_Error();

void HC05_Init_GPIO(void) {
  __USART3_CLK_ENABLE();

  HC05_GPIO.Pin = HC05_TX_Pin;
  HC05_GPIO.Mode = GPIO_MODE_AF_PP;
  HC05_GPIO.Alternate = GPIO_AF7_USART3;
  HC05_GPIO.Speed = GPIO_SPEED_HIGH;
  HC05_GPIO.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(HC05_PORT, &HC05_GPIO);

  HC05_GPIO.Pin = HC05_RX_Pin;
  HC05_GPIO.Mode = GPIO_MODE_AF_OD;
  HAL_GPIO_Init(HC05_PORT, &HC05_GPIO);
}

void HC05_Init(void) {
  hc05_handle.Instance = USART3;
  hc05_handle.Init.BaudRate = 9600;
  hc05_handle.Init.WordLength = UART_WORDLENGTH_8B;
  hc05_handle.Init.StopBits = UART_STOPBITS_1;
  hc05_handle.Init.Parity = UART_PARITY_NONE;
  hc05_handle.Init.Mode = UART_MODE_TX_RX;
  hc05_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;

  if (HAL_UART_Init(&hc05_handle) != HAL_OK) {
    HC05_Error();
  }
}

void HC05_Write(uint8_t *data, const uint16_t length) {
  if (HAL_UART_Transmit(&hc05_handle, data, length, 1000) != HAL_OK) {
    HC05_Error();
  }
}

void HC05_Error() {}


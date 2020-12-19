#include "main.h"

uint8_t temperature;
uint8_t humidity;

static void GPIO_Init(void);

int main(void)
{
  char inputLine[17];
  unsigned char hcLine[10];

  HAL_Init();

  SystemClock_Config();

  GPIO_Init();
  DHT11_Init_TIM();

  DISP_Init();
  DHT11_Init();
  HC05_Init();

  DISP_Write_Ins(DISP_GO_TO_START_FIRST_LINE);
  DISP_Write_Data_Array("SIMA JE SUPER", 13);

  while (1)
  {
    LEDS_Toggle(LD4_Pin);
    LEDS_Toggle(LD3_Pin);
    LEDS_Toggle(LD5_Pin);
    LEDS_Toggle(LD6_Pin);
    HAL_Delay(1000);

    DISP_Write_Ins(DISP_GO_TO_START_SECOND_LINE);
    DISP_Write_Data_Repeat(' ', 16);
    DISP_Write_Ins(DISP_GO_TO_START_SECOND_LINE);

    switch (DHT11_Read(&temperature, &humidity))
    {
    case DHT11_SUCCESS:
      DISP_Write_Data_Array("DHT11 OK", 8);
      HAL_Delay(500);
      DISP_Write_Ins(DISP_GO_TO_START_SECOND_LINE);
      sprintf(inputLine, "T %2d H %2d%%,   ", temperature, humidity);
      sprintf((char*)hcLine, "T%2dH%2d\n", temperature, humidity);
      HC05_Write(hcLine, 7);
      DISP_Write_Data_Array(inputLine, 13);
      break;
    case DHT11_ERROR_TIMEOUT_1:
      DISP_Write_Data_Array("DHT11 TIMEOUT 1", 15);
      break;
    case DHT11_ERROR_TIMEOUT_2:
      DISP_Write_Data_Array("DHT11 TIMEOUT 2", 15);
      break;
    case DHT11_ERROR_TIMEOUT_3:
      DISP_Write_Data_Array("DHT11 TIMEOUT 3", 15);
      break;
    case DHT11_ERROR_TIMEOUT_4:
      DISP_Write_Data_Array("DHT11 TIMEOUT 4", 15);
      break;
    case DHT11_ERROR_TIMEOUT_5:
      DISP_Write_Data_Array("DHT11 TIMEOUT 5", 15);
      break;
    default:
      DISP_Write_Data_Array("DHT11 ERROR", 11);
    }

    HAL_Delay(500);
  }
}

static void GPIO_Init(void)
{
  GPIO_Enable_Clocks();
  DHT11_Init_GPIO();
  DISP_Init_GPIO();
  LEDS_Init_GPIO();
  HC05_Init_GPIO();
}
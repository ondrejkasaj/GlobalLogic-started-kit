#include "dht11.h"

GPIO_InitTypeDef DHT11_GPIO; 
TIM_HandleTypeDef htim2; 

void DHT11_Error_Handler(); // na odchytavanie chyb

void DHT11_Init_TIM() // inicializacia timeru 
{
  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 84;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 84000000 - 1;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    DHT11_Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    DHT11_Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    DHT11_Error_Handler();
  }
}

void DHT11_Init_GPIO()
{
  DHT11_GPIO.Pin = DHT11_IO_Pin;
  DHT11_GPIO.Mode = GPIO_MODE_OUTPUT_PP;
  DHT11_GPIO.Speed = GPIO_SPEED_FREQ_HIGH;
  DHT11_GPIO.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(DHT11_IO_GPIO_Port, &DHT11_GPIO);
}

void DHT11_Init() // spustanie 
{
  HAL_Delay(DHT11_INITIAL_DELAY);
  __HAL_TIM_ENABLE(&htim2);
}

int DHT11_Read(uint8_t *temperature, uint8_t *humidity)
{
  uint8_t i, j;
  uint8_t data[5] = {0};

  DHT11_GPIO.Pin = DHT11_IO_Pin;
  DHT11_GPIO.Mode = GPIO_MODE_OUTPUT_PP;
  DHT11_GPIO.Speed = GPIO_SPEED_FREQ_HIGH;
  DHT11_GPIO.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(DHT11_IO_GPIO_Port, &DHT11_GPIO);

  HAL_GPIO_WritePin(DHT11_IO_GPIO_Port, DHT11_IO_Pin, GPIO_PIN_RESET);

  HAL_Delay(18);

  HAL_GPIO_WritePin(DHT11_IO_GPIO_Port, DHT11_IO_Pin, GPIO_PIN_SET);

  
  DHT11_GPIO.Mode = GPIO_MODE_INPUT;
  HAL_GPIO_Init(DHT11_IO_GPIO_Port, &DHT11_GPIO);

  __HAL_TIM_SET_COUNTER(&htim2, 0);
  while (HAL_GPIO_ReadPin(DHT11_IO_GPIO_Port, DHT11_IO_Pin))
  {
    int tim = __HAL_TIM_GET_COUNTER(&htim2);
    if (tim >= 60)
    {
      return DHT11_ERROR_TIMEOUT_1;
    }
  }
 
  __HAL_TIM_SET_COUNTER(&htim2, 0);
  while (!HAL_GPIO_ReadPin(DHT11_IO_GPIO_Port, DHT11_IO_Pin))
  {
    if (__HAL_TIM_GET_COUNTER(&htim2) > 100)
    {
      return DHT11_ERROR_TIMEOUT_2;
    }
  }

  __HAL_TIM_SET_COUNTER(&htim2, 0);
  while (HAL_GPIO_ReadPin(DHT11_IO_GPIO_Port, DHT11_IO_Pin))
  {
    if (__HAL_TIM_GET_COUNTER(&htim2) > 100)
    {
      return DHT11_ERROR_TIMEOUT_3;
    }
  }

  for (j = 0; j < 5; ++j)
  {
    for (i = 0; i < 8; ++i)
    {

      __HAL_TIM_SET_COUNTER(&htim2, 0);
      while (!HAL_GPIO_ReadPin(DHT11_IO_GPIO_Port, DHT11_IO_Pin))
      {
        if (__HAL_TIM_GET_COUNTER(&htim2) > 60)
        {
          return DHT11_ERROR_TIMEOUT_4;
        }
      }

      
      __HAL_TIM_SET_COUNTER(&htim2, 0);
      while (HAL_GPIO_ReadPin(DHT11_IO_GPIO_Port, DHT11_IO_Pin))
      {
        if (__HAL_TIM_GET_COUNTER(&htim2) > 100)
        {
          return DHT11_ERROR_TIMEOUT_5;
        }
      }

      data[j] = (data[j] << 1) + (__HAL_TIM_GET_COUNTER(&htim2) > 38);
    }
  }

  
  if (data[4] != (data[0] + data[1] + data[2] + data[3]))
  {
    return DHT11_ERROR_CHECKSUM;
  }

  
  *humidity = data[0];
  *temperature = data[2];

  return DHT11_SUCCESS;
}

void DHT11_Error_Handler()
{
}
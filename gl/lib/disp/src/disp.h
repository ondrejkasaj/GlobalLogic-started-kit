#ifndef __DISP
#define __DISP

#include "stm32f4xx_hal.h"

#define DISP_RS_Pin GPIO_PIN_7
#define DISP_RS_GPIO_Port GPIOE
#define DISP_BR_Pin GPIO_PIN_9
#define DISP_BR_GPIO_Port GPIOE
#define DISP_RW_Pin GPIO_PIN_10
#define DISP_RW_GPIO_Port GPIOE
#define DISP_ENA_Pin GPIO_PIN_11
#define DISP_ENA_GPIO_Port GPIOE
#define DISP_DB4_Pin GPIO_PIN_12
#define DISP_DB4_GPIO_Port GPIOE
#define DISP_DB5_Pin GPIO_PIN_13
#define DISP_DB5_GPIO_Port GPIOE
#define DISP_DB6_Pin GPIO_PIN_14
#define DISP_DB6_GPIO_Port GPIOE
#define DISP_DB7_Pin GPIO_PIN_15
#define DISP_DB7_GPIO_Port GPIOE

#define DISP_DELAY (1)
#define DISP_PORT DISP_RS_GPIO_Port
#define DISP_BIT_7_MASK (0x80)
#define DISP_BIT_6_MASK (0x40)
#define DISP_BIT_5_MASK (0x20)
#define DISP_BIT_4_MASK (0x10)
#define DISP_BIT_3_MASK (0x08)
#define DISP_BIT_2_MASK (0x04)
#define DISP_BIT_1_MASK (0x02)
#define DISP_BIT_0_MASK (0x01)

#define DISP_EMPTY_INSTRUCTION (0x00)
#define DISP_GO_TO_START_FIRST_LINE (0x80)
#define DISP_GO_TO_START_SECOND_LINE (0xc0)
#define DISP_ONE_LINE_MODE (0x20 | DISP_EMPTY_INSTRUCTION)
#define DISP_TWO_LINE_MODE (0x20 | 0x08)
#define DISP_OFF (0x08 | DISP_EMPTY_INSTRUCTION)
#define DISP_ON (0x08 | 0x04)
#define DISP_CURSOR_OFF (0x08 | DISP_EMPTY_INSTRUCTION)
#define DISP_CURSOR_ON (0x08 | 0x02)
#define DISP_CURSOR_BLINK_OFF (0x08 | DISP_EMPTY_INSTRUCTION)
#define DISP_CURSOR_BLINK_ON (0x08 | 0x01)
#define DISP_CLEAR (0x01)
#define DISP_DECREMENT_MODE (0x04 | DISP_EMPTY_INSTRUCTION)
#define DISP_INCREMENT_MODE (0x04 | 0x02)
#define DISP_ENTIRE_SHIFT_OFF (0x04 | DISP_EMPTY_INSTRUCTION)
#define DISP_ENTIRE_SHIFT_ON (0x04 | 0x01)

void DISP_RW_pulse(void);
void DISP_Write_Ins(char instruction);
void DISP_Write_Data(char data);
void DISP_Write_Data_Array(char *data, const uint8_t length);
void DISP_Write_Data_Repeat(char data, const uint8_t length);
void DISP_Init(void);
void DISP_Init_GPIO(void);

#endif
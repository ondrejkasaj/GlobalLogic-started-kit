
#include "stm32f4xx.h"
#include "stm32f4xx_conf.h"
#include "stm32f4xx_spi.h"
#include "defines.h"
#include "tm_stm32f4_ili9341.h"
#include "tm_stm32f4_fonts.h"
#include "tm_stm32f4_rng.h"
#include <stdio.h>

int main(void) {
	uint32_t r;
	uint16_t x;
	uint16_t y;
	uint16_t color1;
	uint16_t i = 0;
	//Initialize system
	SystemInit();
	TM_RNG_Init();


	//Initialize ILI9341
	TM_ILI9341_Init();
	//Rotate LCD for 90 degrees

	TM_ILI9341_Rotate(TM_ILI9341_Orientation_Landscape_2);

	//FIll lcd with color
	TM_ILI9341_Fill(ILI9341_COLOR_MAGENTA);
	//Draw white circle
	TM_ILI9341_DrawCircle(60, 60, 40, ILI9341_COLOR_GREEN);
	//Draw red filled circle
	TM_ILI9341_DrawFilledCircle(60, 60, 35, ILI9341_COLOR_RED);

	//Draw blue rectangle
	TM_ILI9341_DrawRectangle(120, 20, 220, 100, ILI9341_COLOR_BLUE);
	//Draw black filled rectangle
	TM_ILI9341_DrawFilledRectangle(130, 30, 210, 90, ILI9341_COLOR_BLACK);
	//Draw line with custom color 0x0005
	TM_ILI9341_DrawLine(10, 120, 310, 120, 0x0005);

	//Put string with black foreground color and blue background with 11x18px font
	TM_ILI9341_Puts(65, 130, "STM32F4 Discovery", &TM_Font_11x18, ILI9341_COLOR_BLACK, ILI9341_COLOR_BLUE2);
	//Put string with black foreground color and blue background with 11x18px font
	TM_ILI9341_Puts(60, 150, "ILI9341 LCD Module", &TM_Font_11x18, ILI9341_COLOR_BLACK, ILI9341_COLOR_BLUE2);
	//Put string with black foreground color and red background with 11x18px font
	TM_ILI9341_Puts(245, 225, "GLOBALLOGIC", &TM_Font_7x10, ILI9341_COLOR_BLACK, ILI9341_COLOR_ORANGE);


	while (1)
	{
		// max width is 320...
		x = 40 + (TM_RNG_Get()) % 260;

		// maximum height is 240...
		y = 40 + (TM_RNG_Get()) % 160;

		// 16 bit color resolution...
		color1 = (TM_RNG_Get()) % 65536;

		//Draw circle with random color and at random x,y position...
		TM_ILI9341_DrawFilledCircle(x, y, 40, color1);

	}
}

/*
 * API_Display.c
 *
 *  Created on: Sep 30, 2025
 *      Author: tomas1908
 */


#include "API_Display.h"
#include "stm32f4xx_hal.h"

screen_t volatile screen=number;

void wellcome(void){
	SSD1306_Clear();
	SSD1306_GotoXY(0, 10);
	SSD1306_Puts("Presione el boton", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_GotoXY(0, 30);
	SSD1306_Puts("para continuar->", &Font_7x10, SSD1306_COLOR_WHITE);
	SSD1306_UpdateScreen();
}

void message(uint32_t value){
	if(screen==number){
		char angle[8];
		value=(100*value)/4095;
		sprintf(angle,"%d",(int)value);
		SSD1306_Clear();
		SSD1306_GotoXY(30, 20);
		SSD1306_Puts(angle, &Font_16x26, SSD1306_COLOR_WHITE);
		SSD1306_UpdateScreen();
	}
	else{
		SSD1306_Clear();
		SSD1306_GotoXY(30, 20);
		SSD1306_Puts("display2", &Font_7x10, SSD1306_COLOR_WHITE);
		SSD1306_UpdateScreen();
	}
}

void Display_Init(void){
	SSD1306_Init();
}


void change_screen(uint8_t ctrl){
	if(ctrl==0xA5){
		screen=graphic;
	}
	else{
		screen=number;
	}
}

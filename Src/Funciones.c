/*
 * Funciones.c
 *
 *  Created on: 14 nov 2026
 *      Author: mauyidos
 */

void delay_ms(uint32_t ms){
	//SysTick Timer
	SysTick->LOAD = (SystemCoreClock/1000) - 1;//1[ms]
	SysTick->VAL = 0;
	SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;

	for(uint32_t i = 0; i < ms; i++){
		while(!(SysTick->CTRL & SysTick_CTRL_COUNTFLAG_Msk));
	}

	SysTick->CTRL = 0;
}

void MostrarNibble(uint8_t val){
	GPIO_WritePin(bit3,((val & 0x08) >> 3) & 1U);
	GPIO_WritePin(bit2,((val & 0x04) >> 2) & 1U);
	GPIO_WritePin(bit1,((val & 0x02) >> 1) & 1U);
	GPIO_WritePin(bit0,((val & 0x01) >> 0) & 1U);
}

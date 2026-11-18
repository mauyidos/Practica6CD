/*
 * GPIO_Config.c
 *
 *  Created on: 14 nov 2026
 *      Author: mauyidos
 */

#include "stm32f4xx.h"
#include "GPIO_Config.h"

void GPIOA_Config(void){
	//Se configuran las entradas A0, A1, A2 y A3 con pull up
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

	GPIOA->MODER &= ~(GPIO_MODER_MODER3 | GPIO_MODER_MODER2
					| GPIO_MODER_MODER1 | GPIO_MODER_MODER0);

	GPIOA->PUPDR &= ~(GPIO_PUPDR_PUPDR3 | GPIO_PUPDR_PUPDR2 |
					GPIO_PUPDR_PUPDR1 | GPIO_PUPDR_PUPDR0);

	GPIOA->PUPDR |= (GPIO_PUPDR_PUPDR3_0 | GPIO_PUPDR_PUPDR2_0 |
					GPIO_PUPDR_PUPDR1_0 | GPIO_PUPDR_PUPDR0_0);
}

void GPIOB_Config(void){
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;

	GPIOB->MODER &= ~(GPIO_MODER_MODER15 | GPIO_MODER_MODER14 |
					  GPIO_MODER_MODER13 | GPIO_MODER_MODER12);

	GPIOB->MODER |= (GPIO_MODER_MODER15_0 | GPIO_MODER_MODER14_0 |
					 GPIO_MODER_MODER13_0 | GPIO_MODER_MODER12_0);

	GPIOB->BSRR = (GPIO_BSRR_BR15 | GPIO_BSRR_BR14 |
				   GPIO_BSRR_BR13 | GPIO_BSRR_BR12);
}

void GPIO_WritePin(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin, uint8_t estado)
{
	if(estado) GPIOx->BSRR = GPIO_Pin;
	else GPIOx->BSRR = GPIO_Pin << 16U;
}

uint8_t GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin){
	return (GPIOx->IDR & GPIO_Pin) ? 1 : 0;
}

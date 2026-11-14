/*
 * Funciones.h
 *
 *  Created on: 14 nov 2026
 *      Author: mauyidos
 */

#ifndef INC_FUNCIONES_H_
#define INC_FUNCIONES_H_

//Constantes del compilador
#define	bit3 GPIOB,GPIO_ODR_OD15
#define	bit2 GPIOB,GPIO_ODR_OD14
#define	bit1 GPIOB,GPIO_ODR_OD13
#define	bit0 GPIOB,GPIO_ODR_OD12

//Prototipos de las funciones
void delay_ms(uint16_t ms);

void MostrarNibble(uint8_t val);

#endif /* INC_FUNCIONES_H_ */

/*
 * GPIO_Config.h
 *
 *  Created on: 14 nov 2026
 *      Author: mauyidos
 */

#ifndef INC_GPIO_CONFIG_H_
#define INC_GPIO_CONFIG_H_

void GPIOA_Config(void);
void GPIOB_Config(void);

void GPIO_WritePin(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin, uint8_t estado);
uint8_t GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin);

#endif /* INC_GPIO_CONFIG_H_ */

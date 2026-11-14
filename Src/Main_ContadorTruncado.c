/*********************************************************************
****************************  Encabezado  ****************************
**********************************************************************
* Número del ejercicio	: 
* Nombre del ejercicio	: 
* Autor(es)				:
* Asignatura			:
* Grupo					:
* Tema					:
* Subtema				:
* Fecha de entrega		:

* Descripción:
	Describir el funcionamiento que debe tener el programa y el
	circuito.

* Microcontrolador:
	- Núcleo del microcontrolador
	- Matrícula del microcontrolador
	- Tarjeta de desarrollo

* Notas: p.ej. 
	- Conexión de LED a pin B12...
	- Configuración de resistor de PULL 
	- etc.
====================================================================*/

/*********************************************************************
*****************************  Programa  *****************************
*********************************************************************/

/********************** Bibliotecas a utilizar **********************/
#include "stm32f4xx.h"

/********************* Constantes de compilador *********************/
#define t 500 //Periodo

#define	SW0	 GPIOA,GPIO_IDR_ID3
#define	SW1	 GPIOA,GPIO_IDR_ID2
#define	SW2	 GPIOA,GPIO_IDR_ID1
#define	SW3	 GPIOA,GPIO_IDR_ID0

/******************* Variables globales de proceso ******************/

/***************** Prototipos de funciones a utilizar ***************/

/************************ Programa principal ************************/
int main(void){
/*------------------ Variables locales de proceso ------------------*/
	uint8_t max = 0;

/*-------------- Configuración de periféricos (SETUP) --------------*/

/*--------------------- Ciclo infinito (LOOP) ----------------------*/
	while(1){
		max = GPIO_ReadPin(SW0);
		max += GPIO_ReadPin(SW1) * 2;
		max += GPIO_ReadPin(SW2) * 4;
		max += GPIO_ReadPin(SW3) * 8;

		MostrarNibble(cont);
		delay_ms(t);
		if(cont = max)
			cont = 0;
		else
			cont++;
	}
}

/************* Desarrollo de los prototipos de funciones ************/

/************* Desarrollo de las rutinas de interrupción ************/

//====================================================================



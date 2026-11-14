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

/******************* Variables globales de proceso ******************/

/***************** Prototipos de funciones a utilizar ***************/

/************************ Programa principal ************************/
int main(void){
/*------------------ Variables locales de proceso ------------------*/

/*-------------- Configuración de periféricos (SETUP) --------------*/

/*--------------------- Ciclo infinito (LOOP) ----------------------*/
	while(1){
		MostrarByte(cont);
		delay_ms(250);
		cont++;
	}
}

/************* Desarrollo de los prototipos de funciones ************/

/************* Desarrollo de las rutinas de interrupción ************/

//====================================================================



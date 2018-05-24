//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
/*!
	\file	GPIO.h
	\author	Alan Sánchez, Alberto Bautista.
	\date	 19 SEP 2016
	\brief	Archivo header de GPIO

    History:
        2016014_1930   :

*/
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
#ifndef	__DIGITALIO_H__
#define	__DIGITALIO_H__
    //--------------------------------------------------------------------------
    // Includes
    //--------------------------------------------------------------------------
#include "derivative.h"
#include "Types.h"
    //--------------------------------------------------------------------------
    // Defines
    //--------------------------------------------------------------------------
	/*
		\def
		\brief
	*/
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3
#define PORTE 4
#define PORT_A 0x00
#define PORT_B 0x20
#define PORT_C 0x40
#define PORT_D 0x60
#define PORT_E 0x80
#define	PORT_PIN(port, pin)  ( port | pin )
#define PORT_MASK(pin) ( ( 4 >> pin ) / 2 )
#define PIN_MASK(pin) ( pin & 0xF )
    //--------------------------------------------------------------------------
    // Enums
    //--------------------------------------------------------------------------
	/*
		\enum
		\brief
	*/
	typedef enum {
		/* port A */
		GPIO_A0 = PORT_PIN(PORT_A, 0),
		GPIO_A1 = PORT_PIN(PORT_A, 1),
		GPIO_A2 = PORT_PIN(PORT_A, 2),
		GPIO_A3 = PORT_PIN(PORT_A, 3),
		GPIO_A4 = PORT_PIN(PORT_A, 4),
		GPIO_A5 = PORT_PIN(PORT_A, 5),
		GPIO_A12 = PORT_PIN(PORT_A, 12),
		GPIO_A13 = PORT_PIN(PORT_A, 13),
		GPIO_A14 = PORT_PIN(PORT_A, 14),
		GPIO_A15 = PORT_PIN(PORT_A, 15),
		GPIO_A16 = PORT_PIN(PORT_A, 16),
		GPIO_A17 = PORT_PIN(PORT_A, 17),
		GPIO_A18 = PORT_PIN(PORT_A, 18),
		GPIO_A19 = PORT_PIN(PORT_A, 19),
		GPIO_A20 = PORT_PIN(PORT_A, 20),
		/* port B */
		GPIO_B0 = PORT_PIN(PORT_B, 0),
		GPIO_B1 = PORT_PIN(PORT_B, 1),
		GPIO_B2 = PORT_PIN(PORT_B, 2),
		GPIO_B3 = PORT_PIN(PORT_B, 3),
		GPIO_B8 = PORT_PIN(PORT_B, 8),
		GPIO_B9 = PORT_PIN(PORT_B, 9),
		GPIO_B10 = PORT_PIN(PORT_B, 10),
		GPIO_B11 = PORT_PIN(PORT_B, 11),
		GPIO_B16 = PORT_PIN(PORT_B, 16),
		GPIO_B17 = PORT_PIN(PORT_B, 17),
		GPIO_B18 = PORT_PIN(PORT_B, 18),
		GPIO_B19 = PORT_PIN(PORT_B, 19),
		/* port C */
		GPIO_C1 = PORT_PIN(PORT_C, 1),
		GPIO_C2 = PORT_PIN(PORT_C, 2),
		GPIO_C3 = PORT_PIN(PORT_C, 3),
		GPIO_C4 = PORT_PIN(PORT_C, 4),
		GPIO_C5 = PORT_PIN(PORT_C, 5),
		GPIO_C6 = PORT_PIN(PORT_C, 6),
		GPIO_C7 = PORT_PIN(PORT_C, 7),
		GPIO_C8 = PORT_PIN(PORT_C, 8),
		GPIO_C9 = PORT_PIN(PORT_C, 9),
		GPIO_C10 = PORT_PIN(PORT_C, 10),
		GPIO_C11 = PORT_PIN(PORT_C, 11),
		GPIO_C12 = PORT_PIN(PORT_C, 12),
		GPIO_C13 = PORT_PIN(PORT_C, 13),
		GPIO_C16 = PORT_PIN(PORT_C, 16),
		GPIO_C17 = PORT_PIN(PORT_C, 17),
		/* port D */
		GPIO_D0 = PORT_PIN(PORT_D, 0),
		GPIO_D1 = PORT_PIN(PORT_D, 1),
		GPIO_D2 = PORT_PIN(PORT_D, 2),
		GPIO_D3 = PORT_PIN(PORT_D, 3),
		GPIO_D4 = PORT_PIN(PORT_D, 4),
		GPIO_D5 = PORT_PIN(PORT_D, 5),
		GPIO_D6 = PORT_PIN(PORT_D, 6),
		GPIO_D7 = PORT_PIN(PORT_D, 7),
		/* port E */
		GPIO_E0 = PORT_PIN(PORT_E, 0),
		GPIO_E1 = PORT_PIN(PORT_E, 1),
		GPIO_E2 = PORT_PIN(PORT_E, 2),
		GPIO_E3 = PORT_PIN(PORT_E, 3),
		GPIO_E4 = PORT_PIN(PORT_E, 4),
		GPIO_E5 = PORT_PIN(PORT_E, 5),
		GPIO_E20 = PORT_PIN(PORT_E, 20),
		GPIO_E21 = PORT_PIN(PORT_E, 21),
		GPIO_E22 = PORT_PIN(PORT_E, 22),
		GPIO_E23 = PORT_PIN(PORT_E, 23),
		GPIO_E24 = PORT_PIN(PORT_E, 24),
		GPIO_E25 = PORT_PIN(PORT_E, 25),
		GPIO_E29 = PORT_PIN(PORT_E, 29),
		GPIO_E30 = PORT_PIN(PORT_E, 30),
		GPIO_E31 = PORT_PIN(PORT_E, 31),

	} ePins;
    //--------------------------------------------------------------------------
    // Variables
    //--------------------------------------------------------------------------
    //--------------------------------------------------------------------------
    // Functions
    //--------------------------------------------------------------------------
void pinMode(unsigned char port, unsigned char pin, unsigned char mode);
void digitalWrite(unsigned char port, unsigned char pin, unsigned char value);
unsigned char digitalRead(unsigned char port, unsigned char pin);

//------------------------------------------------------------------------------
#endif

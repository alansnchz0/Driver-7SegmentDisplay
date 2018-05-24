//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
/*!
	\file	DigitalIO.c
	\author Alan Sánchez, Alberto Bautista.
	\date	Sep-21-2016
	\brief	Digital I/O Driver

    History:
        20160921_1930   :

*/
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------
#include "Constants.h"
#include "DigitalIO.h"
//------------------------------------------------------------------------------
// Defines
//------------------------------------------------------------------------------
/*!
    \def
    \brief
*/

//------------------------------------------------------------------------------
// Enums
//------------------------------------------------------------------------------
/*!
    \enum
    \brief
*/

//------------------------------------------------------------------------------
// Variables
//------------------------------------------------------------------------------
/*!
    \var	MASK_SIM
    \brief	System Clock Gating Control Register 5 Array;  controls the clock gate to the Port A-E module.
*/
const unsigned int MASK_SIM[] = {SIM_SCGC5_PORTA_MASK,SIM_SCGC5_PORTB_MASK,SIM_SCGC5_PORTC_MASK,SIM_SCGC5_PORTD_MASK,SIM_SCGC5_PORTE_MASK};
/*!
    \var	MASK_BASE
    \brief  Pin Control Register Array.
*/
const PORT_MemMapPtr MASK_BASE[] = {PORTA_BASE_PTR,PORTB_BASE_PTR,PORTC_BASE_PTR,PORTD_BASE_PTR,PORTE_BASE_PTR};
/*!
    \var	MASK_DIR
    \brief general-purpose input and output (GPIO) module.
*/
const GPIO_MemMapPtr MASK_DIR[] = {PTA_BASE_PTR,PTB_BASE_PTR,PTC_BASE_PTR,PTD_BASE_PTR,PTE_BASE_PTR};
//------------------------------------------------------------------------------
/*!w
    \fn  pinMode.
    \param	port, pin, mode.
    \return  void
    \brief  sets the specified digital I/O pin as INPUT, OUTPUT or INPUT_PULLUP.
*/
void pinMode(ePins pin, unsigned char mode) {

  switch(mode) {

    case INPUT:
      GPIO_PDDR_REG(MASK_DIR[PORT_MASK(pin)]) &= ~(GPIO_PDDR_PDD(1 << PIN_MASK(pin))); // INPUT
      break;
    case OUTPUT:
      GPIO_PDDR_REG(MASK_DIR[PORT_MASK(pin)]) |= GPIO_PDDR_PDD(1 << PIN_MASK(pin)); // OUTPUT
      break;
    case INPUT_PULLUP:
      GPIO_PDDR_REG(MASK_DIR[PORT_MASK(pin)]) &= ~(GPIO_PDDR_PDD(1 << PIN_MASK(pin))); // INPUT
      PORT_PCR_REG(MASK_BASE[PORT_MASK(pin)], PIN_MCU(pin)) |= PORT_PCR_PE_MASK(value); // PULL_UP ENABLE
      PORT_PCR_REG(MASK_BASE[PORT_MASK(pin)], PIN_MCU(pin)) |= PORT_PCR_PS_MASK(value); // PULL_UP SELECT
      break;
    default:
      break;
  }
}
/*!
    \fn  digitalWrite.
    \param	port, pin, value.
    \return  void
    \brief  sets 'HIGH' or 'LOW' the value of a digital output pin.
*/
void digitalWrite(ePins pin, unsigned char value) {

  if(value == LOW) {

    GPIO_PDOR_REG(MASK_DIR[PORT_MASK(pin)]) &= ~(GPIO_PDOR_PDO(1 << PIN_MASK(pin)));
  }else {

    GPIO_PDOR_REG(MASK_DIR[PORT_MASK(pin)]) |= GPIO_PDOR_PDO(1 << PIN_MASK(pin));
  }
}
/*!
    \fn  digitalRead.
    \param	port, pin.
    \return  HIGH(1) or LOW(0)
    \brief  reads the value of specified digital input pin.
*/
unsigned char digitalRead(ePins pin) {

	return ( GPIO_PDIR_REG(MASK_DIR[PORT_MASK(pin)]) & GPIO_PDIR_PDI(1 << PIN_MASK(pin)) );
}

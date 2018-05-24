//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
/*!
	\file
	\author Alan Sánchez, Alberto Bautista.
	\date	Sep-21-2016
	\brief

    History:

*/
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------
#include "Constants.h"
#include "Bit.h"
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
//------------------------------------------------------------------------------
/*!w
    \fn
    \params
    \return
    \brief
*/

unsigned char bitSet(unsigned char byteVal, unsigned char n){
    unsigned char result = byteVal |= 1 << n;
    return result;
}
unsigned char bitRead(unsigned char byteValue, unsigned char n){
    unsigned char bits=0;
    return bits = (byteValue >> n) & 1;
}
unsigned char highByte(unsigned char x){
    return (x & 0xff) >> 7;
}
int lowByte(int x){
    return x & 1;
}

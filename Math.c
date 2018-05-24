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
#include "Math.h"
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
unsigned char min(unsigned char x,unsigned char y){
    if(x > y){
        return y;
    }
    else{
        return x;
    }

}
unsigned char max(unsigned char x,unsigned char y){
    if(x > y){
        return x;
    }
    else{
        return y;
    }

}
int abs(int x){
    if(x >= 0){
        return  x;
    }
    else{
        return -x;
    }
}
unsigned char map(unsigned char value,unsigned char fromLow,unsigned char fromHigh,unsigned char toLow,unsigned char  toHigh){
    return (value - fromLow) * (toHigh - toLow) / (fromHigh - fromLow) + toLow;
}
unsigned char constraint(unsigned char value,unsigned char min,unsigned char max){
    return (value < min) ? min : (value > max) ? max : value;
}

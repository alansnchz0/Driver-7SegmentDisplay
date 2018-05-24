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
#include "Characters.h"
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

unsigned char isAlphaNumeric (unsigned char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
        return TRUE;
    }
        return FALSE;
}

unsigned char isAlpha (unsigned char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return TRUE;
    }
    return FALSE;
}

unsigned char isAscii (unsigned char c){
    if( (c >= 0 && c <= 127) ) {
        return TRUE;
    }
    return FALSE;
}

unsigned char isWhitespace (unsigned char c){
    if( (c == ' ') ) {
        return TRUE;
    }
    return FALSE;
}

unsigned char isControl (unsigned char c){
    if( (c >= 0 && c <= 31) || (c == 127) ) {
        return TRUE;
    }
    return FALSE;
}

unsigned char isDigit (unsigned char c){
    if (c >= '0' && c <= '9')   {
        return TRUE;
    }
    return FALSE;
}

unsigned char isGraph (unsigned char c){
    if ( c >= 32 && c <= 126 )   {
        return TRUE;
    }
    return FALSE;
}

unsigned char isLowerCase (unsigned char c){
    if ( c >= 97 && c <= 122 )   {
        return TRUE;
    }
    return FALSE;
}

unsigned char isPrintable (unsigned char c){
    if ( c >= 32 && c <= 126 )   {
        return TRUE;
    }
    return FALSE;
}

unsigned char isPunct (unsigned char c){
    if ( c >= 33 && c <= 47 )   {
        return TRUE;
    }
    return FALSE;
}

unsigned char isSpace (unsigned char c){
    if( (c == 32) ) {
        return TRUE;
    }
    return FALSE;
}

unsigned char isUpperCase (unsigned char c){
    if ( c >= 65 && c <= 90 )   {
        return TRUE;
    }
    return FALSE;
}

unsigned char isHexadecimalDigit (unsigned char c){
    if (( c >= 48 && c <= 57 ) || ( c >= 97 && c <= 102 ) || ( c >= 65 && c <= 70 ))   {
        return TRUE;
    }
    return FALSE;
}

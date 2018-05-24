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
#ifndef	__CHARACTERS_H__
#define	__CHARACTERS_H__
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
	#define TRUE 1
	#define FALSE 0
    //--------------------------------------------------------------------------
    // Enums
    //--------------------------------------------------------------------------
	/*
		\enum
		\brief
	*/
    //--------------------------------------------------------------------------
    // Variables
    //--------------------------------------------------------------------------
    //--------------------------------------------------------------------------
    // Functions
    //--------------------------------------------------------------------------
		unsigned char isAlphaNumeric(unsigned char c);
		unsigned char isAlpha(unsigned char c);
		unsigned char isAscii (unsigned char c);
		unsigned char isWhitespace (unsigned char c);
		unsigned char isControl (unsigned char c);
		unsigned char isDigit (unsigned char c);
		unsigned char isGraph (unsigned char c);
		unsigned char isLowerCase (unsigned char c);
		unsigned char isPrintable (unsigned char c);
		unsigned char isPunct (unsigned char c);
		unsigned char isSpace (unsigned char c);
		unsigned char isUpperCase (unsigned char c);
		unsigned char isHexadecimalDigit (unsigned char c);

//------------------------------------------------------------------------------
#endif

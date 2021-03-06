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
#ifndef	__RANDOMNUMBERS_H__
#define	__RANDOMNUMBERS_H__
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
		void randomSeed(unsigned long seed)
		long random(long max);

//------------------------------------------------------------------------------
#endif


#include "derivative.h" /* include peripheral declarations */
#include "DigitalIO.h"
#include "Math.h"
#include "RandomNumbers.h"
#include "Characters.h"
#include "Bit.h"
#include <stdio.h>

int main(void) {

	unsigned char value;

	for(;;) {

		// Digital I/O

		pinMode( GPIO_A0, OUTPUT );
		pinMode( GPIO_A1, INPUT );
		digitalWrite( GPIO_A0, HIGH );
		value = digitalRead( GPIO_A1 );

		// Characters

		//value = isAlphaNumeric(' ');
    //value = isAlpha(' ');
    //value = isAscii('.');
    //value = isWhitespace(' ');
    //value = isControl('\t');
    //value = isDigit('0');
    //value = isGraph('');
    //value = isLowerCase('D');
    //value = isPrintable('D');
    //value = isPunct('0');
    //value = isUpperCase('J');
    //value = isHexadecimalDigit(var1[0]);
    //value = min(7,6);
    //value = max(7,9);
    //value = abs(-9);
    //value = bitSet(22,3);
    //value = bitRead(22,3);
	}
	return 0;
}

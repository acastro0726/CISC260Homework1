/*
 * HexToDecimal.cpp
 *
 *  Created on: Feb 28, 2020
 *      Author: alexcastro
 */

#include <string.h>
#include <stdio.h>
#include <math.h>

int main() {

char hexNumber[17];
int i = 0, final, length;


long long decimal, place;
decimal = 0;
place = 1;

printf("Your Hexadecimal number: ");
gets(hexNumber);

length = strlen(hexNumber);
length--;


for(i=0; hexNumber[i] != '\0'; i++) {

	switch(hexNumber[i]) {

	case '0':
		final = 0;
		break;
	case '1':
		final = 1;
		break;
	case '2':
		final = 2;
		break;
	case '3':
		final = 3;
		break;
	case '4':
		final = 4;
		break;
	case '5':
		final = 5;
		break;
	case '6':
		final = 6;
		break;
	case '7':
		final = 7;
		break;
	case '8':
		final = 8;
		break;
	case '9':
		final = 9;
		break;
	case 'a':
	case 'A':
		final = 10;
		break;
	case 'b':
	case 'B':
		final = 11;
		break;
	case 'c':
	case 'C':
		final = 12;
		break;
	case 'd':
	case 'D':
		final = 13;
		break;
	case 'e':
	case 'E':
		final = 14;
		break;
	case 'f':
	case 'F':
		final = 15;
		break;
	}

decimal += final * pow(16, length);
length--;

}

printf("\nHexadecimal number chosen = %s\n", hexNumber);
printf("Converted to decimal = %lld", decimal);

return 0;
}

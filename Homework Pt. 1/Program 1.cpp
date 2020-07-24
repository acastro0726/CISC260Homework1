/*
 * Program 1.cpp
 *
 *  Created on: Feb 28, 2020
 *      Author: alexcastro
 */

#include<stdio.h>

void binaryToHex(char binary[33],char hex[9]){

char digits[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int v = 0;
int num = 0;

	for(int i = 0; i < 32; i++) {

	num = (num << 1) + (binary[i] - '0');

	if( (i + 1) % 4 == 0) {

		hex[v] = digits[num];
		v++;
		num = 0;
	}
}
	return ;
}


void onesComplement(char binary[33]) {

	for(int i = 0; i < 32; i++) {

		if(binary[i] == '1') {
			binary[i] = '0';
		}
		else {
			binary[i] = '1';
		}

	}
	return ;
}


void addOne(char binary[33]) {

	for(int i = 31; i >= 0; i--) {

		if(binary[i]== '1') {
			binary[i] = '0';
		}
		else {
			binary[i] = '1';
			break;
		}
	}
	return ;
}


void numToBinary(int num, char binary[33]) {
int n = num;

	if(n < 0) {
		n *= -1;

	}

	for(int i = 31; i >= 0; i--) {

		binary[i] = '0' + (n & 1) ;
		n = n >> 1;
	}

	if(num < 0) {

		onesComplement(binary);
		addOne(binary);
	}
return ;
}


int main() {

printf("Your integer:");

int num;

scanf("%d",&num);

char hex[9]= {0};

char binary[33]= {0};

numToBinary(num, binary);

binaryToHex(binary, hex);

hex[8] = '\0';

binary[32] = '\0' ;

printf("In Binary:  %s\n", binary);

printf("In Hexadecimal:  %s\n", hex);

}

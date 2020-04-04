/*
 * File name   : main.cpp
 * Description :
 * Website     : 
 * E-mail      : 
 * Author      : Niti
 * Date        : 2015/05/02
 */
#include <wiringPi.h>
#include <stdio.h>
#define  LedPin   0
#include "RPA_ErrorDisplay.h"

int main(void) {

	XC_ErrorDisplay ED1;

	if (wiringPiSetup() == -1)
	{ //when initialize wiringPi failed, print message to screen
		printf("setup wiringPi failed !\n");
		return -1;
	}else
	{
		ED1.SetDate(14,11,85);
	}

	pinMode(LedPin, OUTPUT);

	while (1) {
		digitalWrite(LedPin, LOW);   //led on
		ED1.DisplayDate();
		printf("led on...\n");
		delay(500);
		digitalWrite(LedPin, HIGH);  //led off
		printf("...led off\n");
		delay(500);
	}

	return 0;
}
;

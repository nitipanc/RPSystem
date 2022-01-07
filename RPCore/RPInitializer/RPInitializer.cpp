/*
 * RPInitializer.cpp
 *
 *  Created on: 05.04.2020
 *      Author: niti
 */
#include "RPInitializer.h"
#include <wiringPi.h>
#include <stdio.h>
#define  LedPin   0
#include "RPA_ErrorHandle/RPA_ErrorDisplay.h"
#include "RPA_TempSensor/XC_TempSensor.h"
void RPInitializer::RPSAPPinit()
{
	if (wiringPiSetup() == -1)
	{ //when initialize wiringPi failed, print message to screen
		printf("setup wiringPi failed !\n");

	}
	else
	{
		RPA_TEMPSENSOR_XC_TEMPSENSOR XC_TEMPSENSOR;
		XC_TEMPSENSOR.inittempsensor();

	}
}

void RPInitializer::RPSCoreinit()
{
	XC_ErrorDisplay ED1;

		if (wiringPiSetup() == -1)
		{ //when initialize wiringPi failed, print message to screen
			printf("setup wiringPi failed !\n");

		}else
		{
			//Todo eRROR

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
		}}


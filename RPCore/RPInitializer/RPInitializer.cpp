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
#include "RPDatabaseInterface/RPDataBaseInitialize.h"
#include <algorithm>
#include <connection.hpp>

using namespace mariadb;

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
		printf("Init Sensor !\n");

	}
}

void RPInitializer::RPSCoreinit()
{
	XC_ErrorDisplay ED1;

	if (wiringPiSetup() == -1)
	{ //when initialize wiringPi failed, print message to screen
		printf("setup wiringPi failed !\n");

	}
	else
	{
		printf("Init Core !\n");

	}

	pinMode(LedPin, OUTPUT);

	while (1)
	{
		digitalWrite(LedPin, LOW);   //led on
		ED1.DisplayDate();
		printf("led on...\n");
		delay(500);
		digitalWrite(LedPin, HIGH);  //led off
		printf("...led off\n");
		delay(500);
	}
}
void RPInitializer::RPDatabaseInterfaceinit()
{
	printf("Init RPDatabaseInterfaceinit !\n");
	RPDataBasedConfigParameter m_DatabaseConfigParameter;
	printf("Hostname = %s\n",(char const*)m_DatabaseConfigParameter.Hostname);
	account_ref m_account_setup;
    std::string m_table_name;
    connection_ref m_con;
}


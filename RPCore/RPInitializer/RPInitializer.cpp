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

	printf("Init RPDatabaseInterfaceinit 2 !\n");
	RPDatabaseInitialize m_RP;
	m_RP.initMariaDataBase();
//	printf("Hostname = %s\n",(char const*)m_DatabaseConfigParameter.Hostname);
//	// static account_ref create(const std::string &host_name, const std::string &user_name, const std::string &password,
//    //const std::string &schema = "", u32 port = 3306, const std::string &unix_socket = "");
//	account_ref m_account_pi = mariadb::account::create(m_DatabaseConfigParameter.Hostname, m_DatabaseConfigParameter.User,
//			m_DatabaseConfigParameter.Password,"", m_DatabaseConfigParameter.Port,m_DatabaseConfigParameter.UnixSocket );
//    connection_ref m_con = mariadb::connection::create(m_account_pi);
//
//    if (m_con) {
//    	printf("Databse Connention Establish");
//
//	} else {
//    	printf("Errro Databse Connention Establish");
//
//	}//(m_con)


}


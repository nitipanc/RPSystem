/*
 * RPA_ErrorDisplay.cpp
 *
 *  Created on: 13.10.2019
 *      Author: niti
 */

#include "RPA_ErrorDisplay.h"
#include <time.h>       /* time_t, struct tm, difftime, time, mktime */
#include <sys/time.h>
#include <stdlib.h>
#include <cstring>
#include <string>

void XC_ErrorDisplay::DisplayDate()
{
	static int seconds_last = 99;
	char TimeString[128];

	timeval curTime;
	gettimeofday(&curTime, NULL);
	if (seconds_last == curTime.tv_sec)
		return;

	seconds_last = curTime.tv_sec;

	strftime(TimeString, 80, "%Y-%m-%d %H:%M:%S", localtime(&curTime.tv_sec));
}

void XC_ErrorDisplay::SetDate(int year, int month, int day)
{

}

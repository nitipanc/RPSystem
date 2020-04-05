/*
 * RPA_ErrorDisplay.h
 *
 *  Created on: 13.10.2019
 *      Author: niti
 */

#ifndef RPA_ERRORHANDLE_RPA_ERRORDISPLAY_H_
#define RPA_ERRORHANDLE_RPA_ERRORDISPLAY_H_

#include <wiringPi.h>
#include <stdio.h>



class XC_ErrorDisplay
{
private:
	int m_year;
	int m_month;
	int m_day;

public:
	void DisplayDate();
	void SetDate(int year, int month, int day);

	int getYear()
	{
		return m_year;
	}
	int getMonth()
	{
		return m_month;
	}
	int getDay()  { return m_day; }
};

#endif /* RPA_ERRORHANDLE_RPA_ERRORDISPLAY_H_ */

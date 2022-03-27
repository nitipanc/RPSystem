/*
 * RPInitializer.h
 *
 *  Created on: 05.04.2020
 *      Author: niti
 */

#ifndef RPINITIALIZER_RPINITIALIZER_H_
#define RPINITIALIZER_RPINITIALIZER_H_


class RPInitializer
{
private:


public:
	// init all the tables;
	void RPDatabaseInterfaceinit();

	// init all system  class
	void RPSAPPinit();

	// init all core class
	void RPSCoreinit();
};



#endif /* RPINITIALIZER_RPINITIALIZER_H_ */

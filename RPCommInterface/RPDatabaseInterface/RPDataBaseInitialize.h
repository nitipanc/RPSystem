/*
 * RPDataBaseInitialize.h
 *
 *  Created on: 13 Mar 2022
 *      Author: nitip
 */

#ifndef RPCOMMINTERFACE_RPDATABASEINTERFACE_RPDATABASEINITIALIZE_H_
#define RPCOMMINTERFACE_RPDATABASEINTERFACE_RPDATABASEINITIALIZE_H_


class RPDataBasedConfigParameter
{
public:
	static constexpr const char *Hostname = "niti";
	static const int Port = 3306;
	static constexpr const char *User = "pi";
	static constexpr const char *Password = "1985";
	static constexpr const char *UnixSocket = "TCP";
	static constexpr const char *Database = "MyFirstDatabase";
};


// create user account

#endif /* RPCOMMINTERFACE_RPDATABASEINTERFACE_RPDATABASEINITIALIZE_H_ */

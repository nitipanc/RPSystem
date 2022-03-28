/*
 * RPDataBaseInitialize.h
 *
 *  Created on: 13 Mar 2022
 *      Author: nitip
 */

#ifndef RPCOMMINTERFACE_RPDATABASEINTERFACE_RPDATABASEINITIALIZE_H_
#define RPCOMMINTERFACE_RPDATABASEINTERFACE_RPDATABASEINITIALIZE_H_

#include <RP_DatabaseConnector/connection.h>
#include <algorithm>
using namespace mariadb;


class RPDataBasedConfigParameter
{
public:

	static constexpr const char *Hostname = "127.0.0.1";
	static const int Port = 3306;
	static constexpr const char *User = "pi";
	static constexpr const char *Password = "1985";
	static constexpr const char *UnixSocket = "TCP";
	static constexpr const char *Database = "MyFirstDatabase";
	static constexpr const char *Tabel = "MyFirstTabel";

};

class RPDatabaseInitialize

{
private:

public:
	// init MariaDB
	void initMariaDataBase();

protected:

    account_ref m_account_setup;
    std::string m_table_name;
    connection_ref m_con;

};


// create user account

#endif /* RPCOMMINTERFACE_RPDATABASEINTERFACE_RPDATABASEINITIALIZE_H_ */

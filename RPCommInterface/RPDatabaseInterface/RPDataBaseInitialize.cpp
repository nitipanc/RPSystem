/*
 * RPDataBaseInitialize.cpp
 *
 *  Created on: 13 Mar 2022
 *      Author: nitip
 */



#include <stdio.h>
#include "RPDataBaseInitialize.h"


void RPDatabaseInitialize::initMariaDataBase()
{
	printf("RPDatabaseInitialize init Test 4\n");
	RPDataBasedConfigParameter Testconfig;
	m_account_setup =account::create(Testconfig.Hostname, Testconfig.User,Testconfig.Password,Testconfig.Database, 3306,"");
    if( m_account_setup != 0)
    {

	m_account_setup->set_auto_commit(true);
    m_account_setup->set_connect_option(MYSQL_OPT_CONNECT_TIMEOUT, 10);

    m_con = connection::create(m_account_setup);
    }
    else
    {
    	printf("Error data base init \n");

    }

    std::string Query1 = "INSERT INTO ";
    std:: string m_Tabelname = Testconfig.Tabel;
    std::string m_values = "('TIMESTAMP', 'TestColumnInt', 'TestColumnText') VALUES (CURRENT_TIMESTAMP,5, 6)";


    m_con->execute("INSERT INTO `MyFirstTable`(`TIMESTAMP`, `TestColumnInt`, `TestColumnText`) VALUES (CURRENT_TIMESTAMP,7,7)");

    // u64 result = m_con->execute(Query1+m_Tabelname+m_values);
     //  printf("result= %i", static_cast<u32>(result));

}

/*
 * Description :
 * Website     : 
 * E-mail      : 
 * Author      : Niti
 * Date        : 2015/05/02
 */
#include  "Version.h"
#include <stdio.h>
#include "RPCore/RPInitializer/RPInitializer.h"
#include <mysql/mysql.h>


int main(void)
{

	printf("The Firmware version is %s  \n", VERSION);
	RPInitializer m_RPInit;
	m_RPInit.RPDatabaseInterfaceinit();
	m_RPInit.RPSAPPinit();
	m_RPInit.RPSCoreinit();

//	MYSQL *mysql1;
//	mysql1 = mysql_init(NULL);
	return 0;
}
;

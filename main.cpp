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

int main(void)
{

	printf("The Firmware version is %s", VERSION);
	RPInitializer m_RPInit;

	m_RPInit.RPSAPPinit();
	m_RPInit.RPSCoreinit();
	return 0;
}
;

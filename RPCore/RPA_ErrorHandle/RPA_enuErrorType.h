/*
 * RPA_enuErrorType.h
 *
 *  Created on: 6 Nov 2021
 *      Author: nitip
 */

#ifndef RPCORE_RPA_ERRORHANDLE_RPA_ENUERRORTYPE_H_
#define RPCORE_RPA_ERRORHANDLE_RPA_ENUERRORTYPE_H_


enum class applicaitonerrc
{
    none = 0,
    // 0x0001 - 0x1FFF = Geberal Application Error
    error_unknown = 1,

	//0x2000 - 0x21FF = Temperature Senosr Error
	err_temp_unknown = 0x2101,
	err_temp_maxlimit = 0x2102,
	err_temp_minlimit = 0x2103,


};

enum class errortypes
{
    data = 1,
    /*A data error is characterized by an erroneous value of a
    		parameter, variable or message. The source of the error can
    		be either internal (e.g., SW defect) or external (e.g.,
    		malfunctioning sensor, other faulty SW-component).*/
    Program_flow


};


#endif /* RPCORE_RPA_ERRORHANDLE_RPA_ENUERRORTYPE_H_ */

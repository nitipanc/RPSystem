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
  err_none = 0,
  // 0x0001 - 0x1FFF = General Application Error
  err_unknown = 1,

  //0x2000 - 0x21FF = Temperature Senosr Error
  err_temp_unknown = 0x2101,
  err_temp_maxlimit = 0x2102,
  err_temp_minlimit = 0x2103,

  //0x3000 - 0x31FF = rasberyy pi general Error
  err_rasberrypi_unknown = 0x3101,
  err_rasberrypi_maxlimit = 0x3102,
  err_rasberrypi_minlimit = 0x3103,

};

enum class errortypes
{
  errtype_unknown = 0, errtype_data = 1,
  /*A data error is characterized by an erroneous value of a
   parameter, variable or message. The source of the error can
   be either internal (e.g., SW defect) or external (e.g.,
   malfunctioning sensor, other faulty SW-component).*/
  errtype_Program_flow = 2,
  /*Program flow errors (also “control flow errors”) manifest as
   actual program flows different than expected, possibly
   leading to missed, wrong or superfluous operations being
   carried out. The source of the program flow error can be both
   internal (SW defects) and external (data errors).*/
  errtype_Access = 3,
  /*For increased separation between executing components
   he system designer can partition the SW and restrict access
   to resources from the partition, e.g., memory access. When
   a component tries to access a resource in another partition
   without the proper access rights an access violation occurs.
   * */
  errtype_Timing = 4,
  /*
   * A communication (message, function invocation, etc.) is time
   critical when the delivery time has an effect on the
   correctness/usefulness of the communication. A timing error
   can be a message being delivered early, late or missing
   completely (omission).
   The last type of timing error, omission, is of special interest
   and is sometimes referred to as crash or fail-silent behaviour
   (note that it may be impossible to distinguish between crash,
   which is an uncontrolled state, and fail-silence, which is a
   controlled state).
   Timing errors also refer to execution time, where strict
   deadlines can be defined on how long a component is
   allowed access to the CPU.
   */
  errtype_Asymmetric = 5,
  /*Not Included for this scope*/
  errtype_Communication = 6,

};

enum class errorlevel
{
  errlevel_diag,
  errlevel_info,
  errlevel_warning,
  errlevel_error,
  errlevel_fatal
};

#endif /* RPCORE_RPA_ERRORHANDLE_RPA_ENUERRORTYPE_H_ */

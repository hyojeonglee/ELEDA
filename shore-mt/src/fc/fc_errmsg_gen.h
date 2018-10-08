#ifndef FC_ERRMSG_GEN_H
#define FC_ERRMSG_GEN_H

/* DO NOT EDIT --- generated by ../../tools/errors.pl from fc_error.dat
                   on Thu Oct  4 20:06:30 2018 

<std-header orig-src='shore' genfile='true'>

SHORE -- Scalable Heterogeneous Object REpository

Copyright (c) 1994-99 Computer Sciences Department, University of
                      Wisconsin -- Madison
All Rights Reserved.

Permission to use, copy, modify and distribute this software and its
documentation is hereby granted, provided that both the copyright
notice and this permission notice appear in all copies of the
software, derivative works or modified versions, and any portions
thereof, and that both notices appear in supporting documentation.

THE AUTHORS AND THE COMPUTER SCIENCES DEPARTMENT OF THE UNIVERSITY
OF WISCONSIN - MADISON ALLOW FREE USE OF THIS SOFTWARE IN ITS
"AS IS" CONDITION, AND THEY DISCLAIM ANY LIABILITY OF ANY KIND
FOR ANY DAMAGES WHATSOEVER RESULTING FROM THE USE OF THIS SOFTWARE.

This software was developed with support by the Advanced Research
Project Agency, ARPA order number 018 (formerly 8230), monitored by
the U.S. Army Research Laboratory under contract DAAB07-91-C-Q518.
Further funding for this work was provided by DARPA through
Rome Research Laboratory Contract No. F30602-97-2-0247.

*/

#include "w_defines.h"

/*  -- do not edit anything above this line --   </std-header>*/
static char* fc_errmsg[] = {
/* fcINTERNAL                */ "Internal error",
/* fcOS                      */ "Operating system error ",
/* fcFULL                    */ "Container is full",
/* fcEMPTY                   */ "Container is empty",
/* fcOUTOFMEMORY             */ "Malloc failed : out of memory ",
/* fcMMAPFAILED              */ "Mmap could not map aligned memory",
/* fcNOTFOUND                */ "Item not found ",
/* fcNOTIMPLEMENTED          */ "Feature is not implemented",
/* fcREADONLY                */ "Update operation on read-only object",
/* fcMIXED                   */ "Attempting to mix static and dynamic containers",
/* fcFOUND                   */ "Item already found",
/* fcNOSUCHERROR             */ "unknown error code",
/* fcASSERT                  */ "Assertion Failed",
	"dummy error code"
};

const fc_msg_size = 12;

#endif

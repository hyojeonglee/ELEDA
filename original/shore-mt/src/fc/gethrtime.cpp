/*<std-header orig-src='shore' incl-file-exclusion='W_RC_H'>

 $Id: gethrtime.cpp,v 1.1.2.3 2010/01/28 04:53:06 nhall Exp $

SHORE -- Scalable Heterogeneous Object REpository

Copyright (c) 1994-99, 2006-09 Computer Sciences Department, University of
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

/*
 * replacement for solaris gethrtime(), which is based in any case
 * on this clock:
 */

#include "w_base.h"
#include "gethrtime.h"

#ifndef HAVE_GETHRTIME

#if defined(__APPLE__)

// For more info: http://stackoverflow.com/questions/3162826/fastest-timing-resolution-system
#include <mach/mach_time.h>

hrtime_t gethrtime()
{
   hrtime_t start = mach_absolute_time();
   return (start);
}

#else 

hrtime_t gethrtime()
{
    struct timespec tsp;
    long e = clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tsp);
    w_assert0(e == 0);
    return tsp.tv_nsec; // nanosecs
}

#endif // __APPLE__

#endif // HAVE_GETHRTIME

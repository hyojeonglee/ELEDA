#ifndef STHREAD_STATS_COLLECT_GEN_CPP
#define STHREAD_STATS_COLLECT_GEN_CPP

/* DO NOT EDIT --- GENERATED from sthread_stats.dat by stats.pl
           on Fri Dec  7 00:20:58 2018

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
/*  -- do not edit anything above this line --   </std-header>*/


	t.set_base(VT_num_io, TMP_GET_STAT(num_io));
	t.set_base(VT_read, TMP_GET_STAT(read));
	t.set_base(VT_write, TMP_GET_STAT(write));
	t.set_base(VT_sync, TMP_GET_STAT(sync));
	t.set_base(VT_truncate, TMP_GET_STAT(truncate));
	t.set_base(VT_writev, TMP_GET_STAT(writev));
	t.set_base(VT_readv, TMP_GET_STAT(readv));

#endif /* STHREAD_STATS_COLLECT_GEN_CPP */
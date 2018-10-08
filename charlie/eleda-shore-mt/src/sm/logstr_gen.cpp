/* DO NOT MODIFY --- generated by ../../tools/logdef.pl from logdef.dat 
                     on Thu Oct  4 20:06:36 2018

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


	case t_comment : 
		return "comment";
	case t_compensate : 
		return "compensate";
	case t_skip : 
		return "skip";
	case t_chkpt_begin : 
		return "chkpt_begin";
	case t_chkpt_bf_tab : 
		return "chkpt_bf_tab";
	case t_chkpt_xct_tab : 
		return "chkpt_xct_tab";
	case t_chkpt_dev_tab : 
		return "chkpt_dev_tab";
	case t_chkpt_end : 
		return "chkpt_end";
	case t_mount_vol : 
		return "mount_vol";
	case t_dismount_vol : 
		return "dismount_vol";
	case t_xct_abort : 
		return "xct_abort";
	case t_xct_freeing_space : 
		return "xct_freeing_space";
	case t_xct_end : 
		return "xct_end";
	case t_xct_prepare_st : 
		return "xct_prepare_st";
	case t_xct_prepare_lk : 
		return "xct_prepare_lk";
	case t_xct_prepare_alk : 
		return "xct_prepare_alk";
	case t_xct_prepare_stores : 
		return "xct_prepare_stores";
	case t_xct_prepare_fi : 
		return "xct_prepare_fi";
	case t_alloc_file_page : 
		return "alloc_file_page";
	case t_alloc_pages_in_ext : 
		return "alloc_pages_in_ext";
	case t_free_pages_in_ext : 
		return "free_pages_in_ext";
	case t_create_ext_list : 
		return "create_ext_list";
	case t_free_ext_list : 
		return "free_ext_list";
	case t_set_ext_next : 
		return "set_ext_next";
	case t_store_operation : 
		return "store_operation";
	case t_page_link : 
		return "page_link";
	case t_page_insert : 
		return "page_insert";
	case t_page_remove : 
		return "page_remove";
	case t_page_format : 
		return "page_format";
	case t_page_mark : 
		return "page_mark";
	case t_page_reclaim : 
		return "page_reclaim";
	case t_page_shift : 
		return "page_shift";
	case t_page_splice : 
		return "page_splice";
	case t_page_splicez : 
		return "page_splicez";
	case t_page_set_byte : 
		return "page_set_byte";
	case t_page_image : 
		return "page_image";
	case t_btree_purge : 
		return "btree_purge";
	case t_btree_insert : 
		return "btree_insert";
	case t_btree_remove : 
		return "btree_remove";
	case t_rtree_insert : 
		return "rtree_insert";
	case t_rtree_remove : 
		return "rtree_remove";

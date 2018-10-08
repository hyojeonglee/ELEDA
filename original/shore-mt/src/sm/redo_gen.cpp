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
		((comment_log *) this)->redo(page); 
		break;
	case t_compensate : 
		W_FATAL(eINTERNAL);
		break;
	case t_skip : 
		W_FATAL(eINTERNAL);
		break;
	case t_chkpt_begin : 
		W_FATAL(eINTERNAL);
		break;
	case t_chkpt_bf_tab : 
		W_FATAL(eINTERNAL);
		break;
	case t_chkpt_xct_tab : 
		W_FATAL(eINTERNAL);
		break;
	case t_chkpt_dev_tab : 
		W_FATAL(eINTERNAL);
		break;
	case t_chkpt_end : 
		W_FATAL(eINTERNAL);
		break;
	case t_mount_vol : 
		((mount_vol_log *) this)->redo(page); 
		break;
	case t_dismount_vol : 
		((dismount_vol_log *) this)->redo(page); 
		break;
	case t_xct_abort : 
		W_FATAL(eINTERNAL);
		break;
	case t_xct_freeing_space : 
		W_FATAL(eINTERNAL);
		break;
	case t_xct_end : 
		W_FATAL(eINTERNAL);
		break;
	case t_xct_prepare_st : 
		((xct_prepare_st_log *) this)->redo(page); 
		break;
	case t_xct_prepare_lk : 
		((xct_prepare_lk_log *) this)->redo(page); 
		break;
	case t_xct_prepare_alk : 
		((xct_prepare_alk_log *) this)->redo(page); 
		break;
	case t_xct_prepare_stores : 
		((xct_prepare_stores_log *) this)->redo(page); 
		break;
	case t_xct_prepare_fi : 
		((xct_prepare_fi_log *) this)->redo(page); 
		break;
	case t_alloc_file_page : 
		W_FATAL(eINTERNAL);
		break;
	case t_alloc_pages_in_ext : 
		((alloc_pages_in_ext_log *) this)->redo(page); 
		break;
	case t_free_pages_in_ext : 
		((free_pages_in_ext_log *) this)->redo(page); 
		break;
	case t_create_ext_list : 
		((create_ext_list_log *) this)->redo(page); 
		break;
	case t_free_ext_list : 
		((free_ext_list_log *) this)->redo(page); 
		break;
	case t_set_ext_next : 
		((set_ext_next_log *) this)->redo(page); 
		break;
	case t_store_operation : 
		((store_operation_log *) this)->redo(page); 
		break;
	case t_page_link : 
		((page_link_log *) this)->redo(page); 
		break;
	case t_page_insert : 
		((page_insert_log *) this)->redo(page); 
		break;
	case t_page_remove : 
		((page_remove_log *) this)->redo(page); 
		break;
	case t_page_format : 
		((page_format_log *) this)->redo(page); 
		break;
	case t_page_mark : 
		((page_mark_log *) this)->redo(page); 
		break;
	case t_page_reclaim : 
		((page_reclaim_log *) this)->redo(page); 
		break;
	case t_page_shift : 
		((page_shift_log *) this)->redo(page); 
		break;
	case t_page_splice : 
		((page_splice_log *) this)->redo(page); 
		break;
	case t_page_splicez : 
		((page_splicez_log *) this)->redo(page); 
		break;
	case t_page_set_byte : 
		((page_set_byte_log *) this)->redo(page); 
		break;
	case t_page_image : 
		((page_image_log *) this)->redo(page); 
		break;
	case t_btree_purge : 
		((btree_purge_log *) this)->redo(page); 
		break;
	case t_btree_insert : 
		((btree_insert_log *) this)->redo(page); 
		break;
	case t_btree_remove : 
		((btree_remove_log *) this)->redo(page); 
		break;
	case t_rtree_insert : 
		((rtree_insert_log *) this)->redo(page); 
		break;
	case t_rtree_remove : 
		((rtree_remove_log *) this)->redo(page); 
		break;

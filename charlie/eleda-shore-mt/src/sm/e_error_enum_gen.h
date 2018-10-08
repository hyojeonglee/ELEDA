#ifndef E_ERROR_ENUM_GEN_H
#define E_ERROR_ENUM_GEN_H

/* DO NOT EDIT --- generated by ../../tools/errors.pl from e_error.dat
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
enum {
    eASSERT                   = 0x80000,
    eUSERABORT                = 0x80001,
    eCRASH                    = 0x80002,
    eOUTOFSPACE               = 0x80003,
    eALIGNPARM                = 0x80004,
    eBADSTID                  = 0x80005,
    eFRAMENOTFOUND            = 0x80006,
    eSPACENOTFOUND            = 0x80007,
    eBADPID                   = 0x80008,
    eBADVOL                   = 0x80009,
    eVOLTOOLARGE              = 0x8000a,
    eDEVTOOLARGE              = 0x8000b,
    eDEVICEVOLFULL            = 0x8000c,
    eDEVNOTMOUNTED            = 0x8000d,
    eALREADYMOUNTED           = 0x8000e,
    eVOLEXISTS                = 0x8000f,
    eBADFORMAT                = 0x80010,
    eNVOL                     = 0x80011,
    eEOF                      = 0x80012,
    eDUPLICATE                = 0x80013,
    eBADSTORETYPE             = 0x80014,
    eBADSTOREFLAGS            = 0x80015,
    eBADNDXTYPE               = 0x80016,
    eBADSCAN                  = 0x80017,
    eWRONGKEYTYPE             = 0x80018,
    eNDXNOTEMPTY              = 0x80019,
    eBADKEYTYPESTR            = 0x8001a,
    eBADKEY                   = 0x8001b,
    eBADCMPOP                 = 0x8001c,
    eOUTOFLOGSPACE            = 0x8001d,
    eRECWONTFIT               = 0x8001e,
    eBADSLOTNUMBER            = 0x8001f,
    eRECUPDATESIZE            = 0x80020,
    eBADSTART                 = 0x80021,
    eBADAPPEND                = 0x80022,
    eBADLENGTH                = 0x80023,
    eBADSAVEPOINT             = 0x80024,
    ePAGECHANGED              = 0x80025,
    eINSUFFICIENTMEM          = 0x80026,
    eBADARGUMENT              = 0x80027,
    eTWOTRANS                 = 0x80028,
    eTWOTHREAD                = 0x80029,
    eNOTRANS                  = 0x8002a,
    eINTRANS                  = 0x8002b,
    eTWOQUARK                 = 0x8002c,
    eNOQUARK                  = 0x8002d,
    eINQUARK                  = 0x8002e,
    eNOABORT                  = 0x8002f,
    eNOTPREPARED              = 0x80030,
    eISPREPARED               = 0x80031,
    eEXTERN2PCTHREAD          = 0x80032,
    eNOTEXTERN2PC             = 0x80033,
    eNOSUCHPTRANS             = 0x80034,
    eTHREADMAPFULL            = 0x80035,
    eBADLOCKMODE              = 0x80036,
    eLOCKTIMEOUT              = 0x80037,
    eNOTBLOCKED               = 0x80038,
    eDEADLOCK                 = 0x80039,
    eBADCCLEVEL               = 0x8003a,
    eRETRY                    = 0x8003b,
    eFOUNDEXTTOFREE           = 0x8003c,
    eCANTWHILEACTIVEXCTS      = 0x8003d,
    eNOHANDLE                 = 0x8003e,
    eLOGVERSIONTOONEW         = 0x8003f,
    eLOGVERSIONTOOOLD         = 0x80040,
    eBADMASTERCHKPTFORMAT     = 0x80041,
    eABORTED                  = 0x80042,
    eLOGSPACEWARN             = 0x80043,
    eBADCOMPENSATION          = 0x80044,
    eAPPENDFILEINOSCAN        = 0x80045,
    eINVALIDHINT              = 0x80046,
    eDUAUDITFAILED            = 0x80047,
    ePINACTIVE                = 0x80048,
    eHOTPAGE                  = 0x80049,
    eBPFORCEFAILED            = 0x8004a,
    eOK                       = 0x0,
    eERRMIN                   = 0x80000,
    eERRMAX                   = 0x8004a
};

#endif

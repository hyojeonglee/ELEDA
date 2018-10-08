#!/bin/sh

autoreconf --install --force

## Configuration options
echo ------------------------------------------------------------
echo
echo Run
echo     ./configure [CONFIGURATIONS] [COMPILATION] --with-shore=shore-dir [--with-readline=readline-dir]
echo
echo     ./configure --help 
echo            to see the options
echo    
echo Supported configuration options
echo --enable-flusher -  Defines CFG_FLUSHER
echo --enable-qpipe   -  Includes QPipe files, defines CFG_QPIPE
echo --enable-bt      -  Enables backtracing facility. defines CFG_BT
echo --enable-simics  -  Adds the simics MAGIC instructions. defines CFG_SIMICS
echo --enable-hack    -  Enables physical design haks. Padding padding TPC-B tables, and partitioning indexes, such as OL_IDX
echo   
echo   
echo There are 3 supported compilation options
echo --enable-debug      -  Compile for debugging, e.g., -g
echo --enable-profile    -  Compile for profiling, e.g., -pg for oprofile
echo --enable-dbgsymbols -  Compile with debug symbols, e.g., -ggdb
echo
echo If none of them is enabled then the default compilation will be with
echo the maximum optimizations possible, e.g., -O3 or -xO4
echo
echo For SOLARIS, we suggest that you use --enable-dependendency-tracking and CC
echo     ./configure  CXX=CC --enable-dependency-tracking 
echo
echo After you configure, run
echo     make
echo
echo ------------------------------------------------------------
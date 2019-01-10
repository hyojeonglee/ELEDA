# File Name: mk_tpcc.sh
# Author: charlie_chen
# mail: charliecqc@dcslab.snu.ac.kr
# Created Time: Mon 08 Oct 2018 02:13:38 PM KST
#########################################################################
#!/bin/bash

if [ $# -ne 2 ]
then
	echo "Usage: $0 <SF> <RAM|DISK>"
	exit 1
fi

SF=$1
TARGET=$2
RAM_LOG_DIR=/dev/shm/log-tpcc-$SF
RAM_DB_DIR=/dev/shm/databases

if [ "$TARGET" = "RAM" ]
then
	if [ -d $RAM_LOG_DIR ]
	then
		rm -r $RAM_LOG_DIR
	fi
	if [ -d $RAM_LOG_DIR ]
	then
		rm -r $RAM_DB_DIR
	fi
	mkdir -p /dev/shm/log-tpcc-$SF
	mkdir -p /dev/shm/databases
	
	if [ -e "log-tpcc-$SF" ]
	then
		rm "log-tpcc-$SF"
	fi
	if [ -e "databases" ]
	then
		rm "databases"
	fi
	ln -s /dev/shm/log-tpcc-$SF
	ln -s /dev/shm/databases
fi

if [ "$TARGET" = "DISK" ]
then
	if [ -d "log-tpcc-$SF" ]
	then
		rm -r "log-tpcc-$SF"
	fi
	if [ -d "databases" ]
	then
		rm -r "databases"
	fi
	mkdir -p ./log-tpcc-$SF
	mkdir -p ./databases
fi


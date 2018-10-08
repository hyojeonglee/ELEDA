/*************************************************************************
	> File Name: mk_tpcc.sh
	> Author: charlie_chen
	> Mail: charliecqc@dcslab.snu.ac.kr 
	> Created Time: Mon 08 Oct 2018 02:13:38 PM KST
 ************************************************************************/

# File Name: mk_tpcc.sh
# Author: charlie_chen
# mail: charliecqc@dcslab.snu.ac.kr
# Created Time: Mon 08 Oct 2018 02:13:38 PM KST
#########################################################################
#!/bin/bash

if [ $# -ne 1 ]
then
	echo "Usage: $0 <SF>"
	exit 1
fi

SF=$1

mkdir -p /dev/shm/log-tpcc-$SF
mkdir -p /dev/shm/databases
ln -s /dev/shm/log-tpcc-$SF
ln -s /dev/shm/databases



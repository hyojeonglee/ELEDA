/*************************************************************************
	> File Name: exec_tpcc.sh
	> Author: charlie_chen
	> Mail: charliecqc@dcslab.snu.ac.kr 
	> Created Time: Mon 08 Oct 2018 02:20:51 PM KST
 ************************************************************************/

# File Name: exec_tpcc.sh
# Author: charlie_chen
# mail: charliecqc@dcslab.snu.ac.kr
# Created Time: Mon 08 Oct 2018 02:20:51 PM KST
#########################################################################
#!/bin/bash

if [ $# -ne 1 ]
then
	echo "Usage: $0 <SF>"
	exit 1
fi

SF=$1

# If you would like to run TPC-C with scaling factor $SF in baseline Shore-MT using regular B+trees.
# ref. https://bitbucket.org/shoremt/shore-kits/wiki/Quick%20Start
./shore_kits -c tpcc-$SF -s baseline -d normal -r

#!/bin/sh
cd /work/halla/e08014/disk1/yez/Gen_XS_Table/

#510 540 830 340
#N21=510
#N23=540
#N25=830
#N28=340

#600 680 1000 450
N21=600
N23=680
N25=1000
N28=450

NAME=$1 # H2, He3, He4, C12, Ca40, Ca48
THETA=$2 # 21, 23, 25, 28

if [ $THETA -eq 21 ] ; then
    NN=$N21
fi
if [ $THETA -eq 23 ] ; then
    NN=$N23
fi
if [ $THETA -eq 25 ] ; then
    NN=$N25
fi
if [ $THETA -eq 28 ] ; then
    NN=$N28
fi

cp -p "./"${NAME}"/XS_"${NAME}"_T"${THETA}"_0_10.table" "./"${NAME}"/XS_"${NAME}"_"${THETA}".table"
for ((i=1;i<${NN}/10;i++))
do 
    let imin=$i*10
    let imax=($i+1)*10

    cat "./"${NAME}"/XS_"${NAME}"_T"${THETA}"_"${imin}"_"${imax}".table" >> "./"${NAME}"/XS_"${NAME}"_"${THETA}".table"
done


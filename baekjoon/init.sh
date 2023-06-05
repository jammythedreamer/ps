#!/bin/bash

problem_number=$1
test_case=$2
if [ -z $test_case ]
then
    test_case=1
fi

mkdir $problem_number
cp template.cpp $problem_number/main.cpp
cd $problem_number
mkdir input
mkdir output

for ((i=1;i<=$test_case;i++));
do
    touch input/$i.txt
    touch output/$i.txt
done

code output/1.txt
code input/1.txt
code main.cpp

echo "######################################################
 init complete for problem $1 with $2 test cases 
 Happy PS!!                                        
######################################################"
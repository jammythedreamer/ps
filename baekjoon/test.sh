#!/bin/bash

problem_number=$1

cd $problem_number

test_case=$(ls input | wc -l)

g++ -std=c++17 main.cpp -o program

mkdir actual_output
for ((i=1;i<=$test_case;i++));
do
    touch actual_output/$i.txt
    ./program < input/$i.txt > actual_output/$i.txt
    if diff -w actual_output/$i.txt output/$i.txt; then
        echo "test case $i: success"
    else
        echo "test case $i: fail"
    fi
done

rm -rf actual_output
rm program


#!/bin/bash

problem_number=$1

cd $problem_number

test_case=$(ls input | wc -l)

g++ main.cpp -o program

mkdir actual_output
for ((i=1;i<=$test_case;i++));
do
    touch actual_output/$i.txt
    ./program < input/$i.txt > actual_output/$i.txt
    cat actual_output/$i.txt
done

rm -rf actual_output
rm program


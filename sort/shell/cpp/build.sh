#!/bin/bash

rm ./shell -f
g++ -g -o shell -I.  sort.cpp main.cpp

if [ 0 -eq $? ] ; then
    ./shell
fi

rm ./shell -f


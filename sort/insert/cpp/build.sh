#!/bin/bash

rm ./insert -f
g++ -g -o insert -I.  sort.cpp main.cpp

if [ 0 -eq $? ] ; then
    ./insert
fi

rm ./insert -f


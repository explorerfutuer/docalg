#!/bin/bash

rm ./bubble -f
g++ -g -o bubble -I.  sort.cpp main.cpp

if [ 0 -eq $? ] ; then
    ./bubble
fi

rm ./bubble -f


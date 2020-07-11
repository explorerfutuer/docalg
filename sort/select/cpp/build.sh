#!/bin/bash

rm ./select -f
g++ -g -o select -I.  sort.cpp main.cpp

if [ 0 -eq $? ] ; then
    ./select
fi

rm ./select -f


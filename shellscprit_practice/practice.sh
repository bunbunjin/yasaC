#!/bin/bash

#@(#) practice.sh ver.1.0.0 2021.03.12

#Usage:
#  practice.sh param1 param2
#    param1 - パラメータ1です.
#    param2 - パラメータ2です.

#Description:
#  practice.shスクリプトです.

########################################


echo 'start....'
{
  touch practice
  ls practice
  rm practice
}


practice=ls | tee practice.txt 

if [ '$str' = 'practice' ]; then
  echo 'str = practice'
fi


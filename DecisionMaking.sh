#!/bin/bash
# change these variables
# The values of the variables have been changed  to make all of the below conditions True!
NUMBER=16 
APPLES=16
KING=LUIS

if [ $NUMBER -gt 15 ] ; then
  echo 1
fi
if [ $NUMBER -eq $APPLES ] ; then
  echo 2
fi
if [[ ($APPLES -eq 12) || ($KING = "LUIS") ]] ; then
  echo 3
fi
if [[ $(($NUMBER + $APPLES)) -le 32 ]] ; then
  echo 4
fi

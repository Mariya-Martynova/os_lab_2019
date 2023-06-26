#!/bin/sh

if [ $# -gt 0 ] # если количество параметров больше 0, то
then
  sum=0
  for param in "$@" # @-содержит все что передалось, можно перебирать
  do
    sum=$(($sum+$param))
  done

  resul=$(($sum/$#)) # #-количество параметров

  echo "Avarege: $resul"
  echo "Quantity: $#"
else
  echo "Parameters do not found"
fi
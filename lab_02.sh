#!/bin/sh
#Ask about the name
echo "What is your name?"
read NAME
echo "Your name is $NAME"
#Create a folder of his/her name
mkdir $NAME
touch $NAME.cpp
mv $NAME.cpp $NAME

#! /bin/bash

count=10

if [ $count -ne 9 ]
then
	echo "Turu"
fi
echo "_________" 
if (( $count >= 9 ))
then 
	echo "TURU"
fi
echo "______"
word=abc
if (( $word = "abcc" )) # != , == , -z: NULL string
then
	echo "Turuuuu"	
fi

data=a
if [[ $data == "b" ]]
then
	echo "condition B tutu"
elif [[ $data == "a" ]]
then
	echo "condition A tutu"
else
	echo "Falash"
fi

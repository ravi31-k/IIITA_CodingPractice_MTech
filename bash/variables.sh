#! /bin/bash
#predefine : define by capital cases(system variable)
echo Shell name : $BASH
echo Shell Version : $BASH_VERSION
echo Home Directory : $HOME
echo Current Working Directory : $PWD

#usedefine : define by small casse

name=ravi
echo The name is $name

echo " Enter name :"
read name1 # name2 name3  # this will take input from next line 
echo "Entered name :  $name1" # $name2, $name3"

echo "_______________________________"
read -p  'Username :' user_var
read -sp 'Password :' pass_var #it store in variable but it is not visible
echo "User : $user_var" 
echo "Pass : $pass_var"

echo "________________"
echo "Enter Names:"
read -a names  #create names array
echo "Names : ${names[0]},${names[1]}"

echo "_____When Variable is not define______"
echo "Naam ka h tohra : "
read
echo "Name : $REPLY" #it goes to REPLY by default

#! /bin/bash
# Program:
#	User inputs his first name and last name. Program shows his full name
# History:
# 2013-08-21 Jason_ye First release
PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:~/bin
export PATH

read -p "请输入你的姓氏：" firstname
read -p "请输入你的名字：" lastname
echo "\n 你的全名是 $firstname$lastname"

#!/bin/bash
##字符串的使用
#""和‘’括起来的是字符串
s1="this is a string"
s2="not"
s3='not'

#单引号和双引号的区别
#''单引号能让命令或变量变成字符，而""不能，例：
echo '$s1'
echo "$s\n"

###字符串操作
#1.拼接字符串
echo "$s1 haha"
echo "My name is $s2"



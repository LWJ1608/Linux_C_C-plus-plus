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
echo 1.拼接字符串
echo "$s1 haha"
echo "My name is $s2"

echo 2.获取字符串的长度
String="abcd"
echo ${#String}  #输出4

echo 3.提取子串，索引从0开始
String="abacd"
echo ${String:1:3}  #输出 bac
echo ${String:0:3}  #输出 aba

echo 4.查找子串,返回出现在第几个，从1开始
String="this is a string"
echo `expr index "$String" io`  #输出3

#!/bin/bash
#变量的使用

#等号两边不能空格
name="lwj"
echo $name
echo ${name}
echo "My name is ${name}\n\n"

#在变量前加readonly,变成只读变量
echo "只读变量"
readonly age"18"
#age="19"





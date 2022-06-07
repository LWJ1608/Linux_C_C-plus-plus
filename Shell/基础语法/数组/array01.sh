#!/bin/bash
##数组

#在shell中不支持多维数组,元素间用空格分开
array_name=(2 3 t 3)
echo "$array_name"        #输出数组的首元素
echo "${array_name[1]}"   #输出数组下标为1的元素
#获取所有数组元素
echo "数组所有元素为：${array_name[*]}"
echo "数组所有元素为：${array_name[@]}"

###
 # @Author: lwj
 # @Date: 2022-04-20 21:29:52
 # @Description: 数组的使用
### 
#shell中允许有一维数组，不允许多维数组

#!/bin/bash

#赋值
arr1=(1 2 233 2 4 5 5)  #每个值之间都要用空格分开
arr2=(                #或者这样使用
    1
    2
    3
    4
)
arr3[0]=1            #也可以这样赋值
arr3[1]=2
arr3[2]=3
arr3[3]=5

#读取数组
value=${arr1[0]} #把数组赋给value
echo ${value}
echo ${arr1[@]} #输出数组所有元素
echo " "
传递参数
#获取数组元素个数
length=${#arr1[@]} 
#length=${#arr1[*]}和上一个的一样 
echo "${length}"
echo " "

#取得单个元素的长度
length=${#arr1[2]}
echo "${length}"
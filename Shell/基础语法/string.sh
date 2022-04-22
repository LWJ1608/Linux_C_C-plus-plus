###
 # @Author: lwj
 # @Date: 2022-04-20 21:03:28
 # @Description: 对字符串的操作
### 
#!/bin/bash

#获取字符串长度
string="abcd" #注意变量和=号之间不能有空格，注释不能和语句连在一起
echo ${#string[0]}
echo " "

#提取字符串
string="www.baidu.com"
echo ${string:0:3} #从下标为0的字符开始截取string变量的4个字符，从0开始算
echo " "

#查找字符串
echo `expr index "${string}" i`   #``这个是反引号不是单引号'',查找字符i在第几个出现，从1开始算
echo `expr index "${string}" ib`   #查找字符i或b在第几个出现，从1开始算

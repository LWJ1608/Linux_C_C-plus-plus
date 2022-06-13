#!/bin/bash
## printf的用法

## %s %c %d %f 分别代表字符串，字符，整数，浮点类型
## -10s指一个宽度为10个字符（-代表左对齐，没有则为右对齐）
## %-4.2f 指格式化为小数，其中 .2 指保留2位小数。
printf "%-10s %-8s %-4s\n" 姓名 性别 体重kg
printf "%-10s %-8s %-4.2f\n" 小白 男 66.888
printf "%-10s %-8s %-4.2f\n" 小三 女 77.3423
printf "%-10s %-8s %-4.2f\n\n\n" 小宏 男 99.999

#双引号和单引号作用一样
printf "%d %s\n" 1 "abc"
printf '%d %s\n' 1 "abc"

#没用引号也可输出
printf %s "abcdf"

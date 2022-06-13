#!/bin/bash
## echo的使用

#显示普通字符串
echo "my name is lwj"

#显示换行
echo -e "lwj\n"
echo "lll"

#显示不换行
echo -e "lwj \c"
echo "is me"

#显示结果到文件中
echo "lwj" > echo.txt

#显示命令执行结果
echo `data`

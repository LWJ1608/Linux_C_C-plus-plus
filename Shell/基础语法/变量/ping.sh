#!/bin/bash
##ping 命令的使用
#从键盘读入变量
read -p "please input a ip: " ip

#ip=www.baidu.com
ping -c2 $ip &>/dev/null
if [ $? -eq 0 ] &>/dev/null; then
	echo "$ip is up"
else
	echo "$ip is down"
fi

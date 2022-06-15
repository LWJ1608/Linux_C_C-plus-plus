#!/bin/bash
##ping 命令的使用

ip=www.baidu.com
if [ ping $ip &>/dev/null ];then
	echo "$ip is up"
else
	ech0 "$ip is down"
fi

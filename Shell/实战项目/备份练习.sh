#!/bin/bash

#用shell编写数据备份脚本
#2022.4.7

date=$(date)
size=$(du -sh /etc)

if [ -d /tmp/dbback ]
	then
		echo "Date = $date" > /tmp/dbback/db.txt
		echo "Size = $szie" > /tmp/dbback/db.txt
		cd /tmp/dbback
		tar -zcf etc_$date.tar.gz /etc db.txt &>/dev/null
		rm -rf /etc/dbback/db.txt
	else
		mkdir /etc/dbback	
		echo "Date = $date" > /tmp/dbback/db.txt
		echo "Size = $szie" > /tmp/dbback/db.txt
		cd /tmp/dbback
		tar -zcf etc_$date.tar.gz /etc db.txt &>/dev/null
		rm -rf /etc/dbback/db.txt

fi


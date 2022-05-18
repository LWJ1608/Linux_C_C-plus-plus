#!/bin/bash
#Authou:wlj
#判断Apache是否正常连接
#2022.4.7


port=$(nmap -sT 121.4.45.163 | grep tcp | grep http | awk '{print $2}')
if [ "$port" == "open" ]
	then
		echo "$(date) httpd is ok" >>/etc/autostart-acc.log
	else
		/etc/rc.d/init.d/httpd start &>/dev/null
		echo "$(date) httpd restart!" >> /tmp/autostart-err.log
		echo "N"
fi

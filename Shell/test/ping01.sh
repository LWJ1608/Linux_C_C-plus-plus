###
 # @Author: lwj
 # @Date: 2022-04-09 14:46:12
 # @Description: 测试ping命令的shell脚本
###

#!/bin/bash
ping -c1 www.baidu.com &>/dev/null &&  echo "yes"  || echo "no"

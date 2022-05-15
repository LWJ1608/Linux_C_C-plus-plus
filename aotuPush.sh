#!/bin/bash

path=/root/Linux_C_C-plus-plus/

git_push(){
    echo "-------开始push------"
    modify_time=`stat -c %Y ${1}`
    this_time=`date +%s`

    cd ${1}
    echo "-------切换目录-------"
    echo `pwd`
    echo "---------------------"
    # if [ $[ ${modify_time}-${this_time} ] -gt 86400 ];
    # then
        echo "${1} 文件夹 有变化，正在准备push..."
        date=`date "+%Y-%m-%d %H:%M:%S"`
        git add .    
        git commit -m "push @$(date)"
        git push origin master
    # fi
}

git_push /root/Linux_C_C-plus-plus

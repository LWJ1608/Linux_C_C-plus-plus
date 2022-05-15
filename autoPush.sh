#!/bin/bash

path=/root/Linux_C_C-plus-plus/

git_push(){
    echo "-------开始push------"


    cd ${1}
        date=`date +'%Y-%m-%d %H:%M:%S' -d '-1 hours'`
        git add .    
        git commit -m "push @$(date)"
        git push origin master

}

git_push /root/Linux_C_C-plus-plus

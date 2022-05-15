#!/bin/bash

path=/root/Linux_C_C-plus-plus/

git_push(){
    cd ${1}
    # date=`date "+%Y-%m-%d %H:%M:%S"`
    git add .    
    git commit -m "push @$(date)"
    git push origin master
}

git_push /root/Linux_C_C-plus-plus

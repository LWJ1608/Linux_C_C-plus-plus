#!/bin/bash

path=/root/Linux_C_C-plus-plus/

git_push(){
    cd ${1}
    git add . 
    git commit -m "push @$(date)"
    git push -u origin master
}

git_push /root/Linux_C_C-plus-plus

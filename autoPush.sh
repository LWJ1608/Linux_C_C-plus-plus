#!/bin/bash

push(){
    cd /home/lwj/Linux_C_C-plus-plus
    git pull git@github.com:LWJ1608/Linux_C_C-plus-plus.git
    git pull git@gitee.com:lwj08/Linux_C_C-plus-plus.git
    git add --all
    git commit -m "push @$(date)"
    git push origin master
}


push

#!/bin/bash

push(){
    cd /root/Linux_C_C-plus-plus
    git pull
    git add --all
    git commit -m "push @$(date)"
    git push origin master
}

push
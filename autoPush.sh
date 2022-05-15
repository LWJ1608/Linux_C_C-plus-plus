#!/bin/bash



# git_push(){
    cd /root/Linux_C_C-plus-plus/
    git add . 
    sleep 3
    git commit -m "push @$(date)"
    sleep 5
    git push -u origin master
# }

# git_push /root/Linux_C_C-plus-plus

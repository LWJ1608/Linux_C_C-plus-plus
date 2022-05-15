# #!/bin/bash


# cd /root/Linux_C_C-plus-plus/
# git add . && git commit -m "push @$(date)" && git push -u origin master


#!/bin/bash

echo "push_git.sh start……"
push(){
    cd /root/Linux_C_C-plus-plus/
    git add .
    git commit -m "push @$(date)"
    git push origin master
}
push
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
project_array=(project_name1 project_name2 project_name3 project_name4 project_name5 project_name6 project_name7 project_name8)
for data in ${project_array[@]}  
do  
    echo "project name *************"+${data}+"*************"
    push ${data}
done       
echo "push_git.sh end……"
###
 # @Author: lwj
 # @Date: 2022-04-20 19:16:15
 # @Description: shell定义变量
### 
#!/bin/bash

printf echo 
your_name="qinjx"
echo $your_name
echo ${your_name} #在使用变量的时候要使用$，相比上面使用变量的方法更好
your_name="lwj"  #改变变量的值
echo ${your_name}
printf "${your_name}\n" #输出变量your_name的值不会自己换行


#readonly 在变量前面加readonly让变量变成只读，不能改变其值
myTest="www"
readonly myTest   
# myTest="asdfa"#错误
echo ${myTest}


#unset 可以删除变量，只读变量除外，删除后这个变量不能再使用
age='4'
unset age
echo "${age}"

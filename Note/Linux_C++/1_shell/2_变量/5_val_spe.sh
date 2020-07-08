###
 # @Author: your name
 # @Date: 2020-06-08 20:29:50
 # @LastEditTime: 2020-06-08 20:50:35
 # @LastEditors: Please set LastEditors
 # @Description: In User Settings Edit
 # @FilePath: /Linux/shell/2_变量/5_val_spe.sh
### 

#!/bin/bash

name="zhangsan"
# 单引号不考虑字符的特殊含义
string1="good moring $name"
string2='good moring $name'

echo $string1
echo $string2

# 反引号，获取 shell 命令的输出结果 == $()
echo "today is date"
echo "today is `date`"
echo 'today is date'
echo "today is date"

sleep 2s
echo "***********"
echo "My dir is $(ls)"
echo "***********"

# 转义字符，使用时，echo 后加 -c
echo "this \n is\ta\ntest"
echo -e "this \n is\ta\ntest"
echo "***********"

num=100
# () 内，创建一个子 shell 去执行，不影响外部变量
(num=999;echo "1 $num")
echo 1:$num
#{} 在当期 shell 执行，影响当前变量（代码不要贴着 {}，要留着空格）
{ num=666; echo "2 $num";}
echo 2:$num


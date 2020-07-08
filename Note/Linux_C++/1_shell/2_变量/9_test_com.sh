###
 # @Author: your name
 # @Date: 2020-06-09 20:31:12
 # @LastEditTime: 2020-06-09 20:44:53
 # @LastEditors: Please set LastEditors
 # @Description: In User Settings Edit
 # @FilePath: /Linux/shell/2_变量/9_test_com.sh
### 

#! /bin/bash

num=100

# 判断 0<= num <=200
test $num -ge 0 && test $num -le 200
echo "$?"
test $num -ge 0 -a $num -le 200
echo "$?"

# 判断 0 >= num 或者  num >= 200
test $num -le 0 || test $num -ge 200
echo "$?"
test $num -le 0 -o $num -ge 200
echo "$?"

file="file.txt"

# 判断文件是否不是普通函数
test ! -f $file
echo "$?"

# 判断文件是否存在并且是否是目录文件
test -e $file && test -d $file
echo "$?"
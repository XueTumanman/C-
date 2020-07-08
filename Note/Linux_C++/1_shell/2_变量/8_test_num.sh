###
 # @Author: your name
 # @Date: 2020-06-09 20:09:29
 # @LastEditTime: 2020-06-09 20:18:56
 # @LastEditors: Please set LastEditors
 # @Description: In User Settings Edit
 # @FilePath: /Linux/shell/2_变量/8_test_num.sh
### 

#! /bin/bash

echo "please input two numbers"
read NUM1 NUM2

test $NUM1 -eq $NUM2
echo "相等？ $?"

test $NUM1 -ne $NUM2
echo "不相等？ $?"

test $NUM1 -gt $NUM2
echo "大于？ $?"

test $NUM1 -ge $NUM2
echo "大于等于？ $?"

test $NUM1 -lt $NUM2
echo "小于？ $?"

test $NUM1 -le $NUM2
echo "小于等于？ $?"
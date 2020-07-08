###
 # @Author: your name
 # @Date: 2020-06-09 19:48:40
 # @LastEditTime: 2020-06-09 19:51:08
 # @LastEditors: Please set LastEditors
 # @Description: In User Settings Edit
 # @FilePath: /Linux/shell/2_变量/7_test_string.sh
### 

!#/bin/bash

test "hello" = "hello"
echo "相等？ $?"

test "hello" = "hella"
echo "相等？ $?"

test "hello" != "hello"
echo "不相等？ $?"

test "hello" != "hella"
echo "不相等？ $?"

test -z "hello"
echo "长度是否为0？ $?"

test -n "hello"
echo "长度是否不为0？ $?"
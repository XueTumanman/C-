###
 # @Author: your name
 # @Date: 2020-06-09 19:31:26
 # @LastEditTime: 2020-06-09 19:45:34
 # @LastEditors: Please set LastEditors
 # @Description: In User Settings Edit
 # @FilePath: /Linux/shell/2_变量/6_test_file.sh
### 

#! /bin/bash

echo "please input a filename >>>"
read FILE

test -e $FILE
echo "存在？ $?"

test -s $FILE
echo "非空？ $?"

[ -r $FILE ]
echo "可读？ $?"

[ -w $FILE ]
echo "可写？ $?"

[ -x $FILE ]
echo "可执行？ $?"

test -b $FILE
echo "块设备文件？ $?"

test -c $FILE
echo "字符设备文件？ $?"

test -d $FILE
echo "目录文件？ $?"

test -f $FILE
echo "普通文件？ $?"

test -l $FILE
echo "块链接文件？ $?"

test -S $FILE
echo "套接字文件？ $?"

test -p $FILE
echo "管道文件？ $?"
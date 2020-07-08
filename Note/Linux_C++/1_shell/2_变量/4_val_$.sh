###
 # @Author: your name
 # @Date: 2020-06-08 20:05:31
 # @LastEditTime: 2020-06-08 20:22:07
 # @LastEditors: Please set LastEditors
 # @Description: In User Settings Edit
 # @FilePath: /Linux/shell/2_变量/4_val_$.sh
### 

#!/bin/bash

# 输出从 0~9
echo "\$0 = $0"
echo "\$1 = $1"
echo "\$2 = $2"
echo "\$3 = $3"
echo "\$4 = $4"
echo "\$5 = $5"
echo "\$6 = $6"
echo "\$7 = $7"
echo "\$8 = $8"
echo "\$9 = $9"
# 超过 9，加大括号
echo "\$10 = ${10}"


# $# 保存命令行传入参数的个数
echo "\$# = $#"

# $@或$*：保存命令行传入参数的参数，不包括 $0
echo "\$@ = $@"
echo "\$* = $*"

# $$ 获取当前进程号
echo "\$$ = $$"
# read NUM

# $? 返回上一条命令的执行结果，执行成功 = 0，执行失败 !=0
ls
echo "\$? = $?"

ls asdf
echo "\$? = $?"
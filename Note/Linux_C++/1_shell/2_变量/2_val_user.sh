###
 # @Author: your name
 # @Date: 2020-06-07 16:15:10
 # @LastEditTime: 2020-06-07 16:25:18
 # @LastEditors: Please set LastEditors
 # @Description: In User Settings Edit
 # @FilePath: /Linux/shell/2_变量/val_user.sh
### 

# 定义变量，没有数据类型，= 两边别加空格
NUM=100

# 引用变量 +$
i=$NUM

# 显示变量
echo $NUM
echo $i

# 清除变量
unset NUM
echo "*************"
echo $NUM

# 使用 read 从中断读取数据保存到变量
read str
echo $str

# 使用 readonly 创建只读变量
readonly n=999
echo $n

n=666
echo $n
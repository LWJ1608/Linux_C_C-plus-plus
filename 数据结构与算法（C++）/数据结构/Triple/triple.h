/**
 * @Author: lwj
 * @Date: 2022-06-04 20:09:36
 * @Description:三元组表构建稀疏矩阵
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Triple/triple.h
 **/
#include <iostream>

template <typename Type>
class Triple //三元组表
{
private:
    struct Node //三元组表的类型，一个struct类型代表一个结点
    {
        int row;  //非零元素的行数
        int col;  //非零元素的列数
        int data; //非零元素的值
    };
};
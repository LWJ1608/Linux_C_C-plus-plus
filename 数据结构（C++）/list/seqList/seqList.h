/**
 * @Author: lwj
 * @Date: 2022-05-28 13:04:41
 * @LastEditTime: 2022-05-28 13:04:41
 * @Description:数据结构---顺序表
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/list/seqList/seqList.h
 **/
#pragma once
#include <iostream>

#define MAXSIZE 10
template <typename Type>
class SeqList
{
private:
    Type *data;    //维护存储数据的指针
    int count;     //记录元素个数
    int maxSize;   //数组容量
    void resize(); //扩容，因为只在当前文件中使用，所以放在私有成员中
public:
    SeqList(int isSize = MAXSIZE); //构造函数
    SeqList(const SeqList &s);     //拷贝构造
};

/**
 * @Author: lwj
 * @Date: 2022-05-28 13:04:41
 * @LastEditTime: 2022-05-28 13:04:41
 * @Description:数据结构---顺序表
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/list/seqList/seqList.h
 **/
#pragma once
#include <iostream>
#include <assert.h>

#define MAXSIZE 10
template <typename Type>
class SeqList
{
private:
    Type *data;  // 维护存储数据的指针
    int count;   // 记录元素个数
    int maxSize; // 数组容量
public:
    SeqList(int isSize = MAXSIZE);                   // 构造函数
    SeqList(const SeqList &s);                       // 拷贝构造
    ~SeqList() { delete[] data; }                    // 析构函数
    void clear() { count = 0; }                      // 清空表，只需修改count
    bool isEmpty() const { return count == 0; }      // 判空
    bool isFull() const { return count == maxSize; } // 判满
    int size() const { return count; }               // 返回顺序表的当前存储元素的个数
    void insert(int i, const Type &value);           // 在位置i上插入一个元素value，表的长度增1
    // void remove(int i);                              // 删除位置i上的元素value，若删除位置合法，表的长度减1
    // int search(const Type &value) const;             // 查找值为value的元素第一次出现的位序
    // T visit(int i) const;                            // 访问位序为i的元素值，“位序”0表示第一个元素，类似于数组下标
    // void resize();                                   // 扩容
    // void traverse() const;                           // 遍历顺序表
    // void inverse();                                  // 逆置顺序表
    // bool Union(seqList<Type> &B);                     //合并两个表
};

template <typename Type>
SeqList<Type>::SeqList(int isSize) // 构造函数
{
    assert(isSize > 0); // isSize不能小于0
    this->maxSize = isSize;
    count = 0;
    data = new Type[maxSize]; //在堆区创建一个大小为maxSize的数组
}

template <typename Type>
SeqList<Type>::SeqList(const SeqList &s) // 拷贝构造
{
    maxSize = s.maxSize; // 也可以s有多少个元素就开辟多少空间
    count = s.count;
    data = new Type[maxSize];
    for (int i = 0; i < s.count; i++)
    {
        data[i] = s.data[i];
    }
}

template <typename Type>
void SeqList<Type>::insert(int i, const Type &value) // 在位置i上插入一个元素value，表的长度增1
{
    assert(!isFull());          //断言.满了不能放
    assert(i < 0 || i > count); // i只能在[0~count]
    //在i处插入数据，i及其后面的元素向后移动一位
    for (int j = count; j < count - i; j--)
    {
        data[j] = data[j - 1];
    }
    data[i] = value;
    count++; //表长加一
}
// void remove(int i);                              // 删除位置i上的元素value，若删除位置合法，表的长度减1
// int search(const Type &value) const;             // 查找值为value的元素第一次出现的位序
// T visit(int i) const;                            // 访问位序为i的元素值，“位序”0表示第一个元素，类似于数组下标
template <typename Type>
void traverse() const // 遍历顺序表
{
}
// void inverse();                                  // 逆置顺序表
// bool Union(seqList<Type> &B);
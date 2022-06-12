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
        int row;                                 //非零元素的行数
        int col;                                 //非零元素的列数
        Type data;                               //非零元素的值
        Node(int r = -1, int c = -1, Type d = 0) //结点构造函数
        {
            row = r;
            col = c;
            data = d;
        }
        void setNodeValue(int r, int c, Type d) //元素赋值
        {
            row = r;
            col = c;
            data = d;
        }
    };
    Node *matrix; //三元组表
    int numRow;   //矩阵的行数
    int numCol;   //矩阵的列数
    int count;    //非零元素个数
    int maxSize;  //矩阵容量
public:
    Triple(int r, int c, int size = 10); //构造函数，默认矩阵容量为10
    ~Triple() { delete[] data; }         //析构函数
};
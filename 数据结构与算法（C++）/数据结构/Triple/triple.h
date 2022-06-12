/**
 * @Author: lwj
 * @Date: 2022-06-04 20:09:36
 * @Description:三元组表构建稀疏矩阵
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Triple/triple.h
 **/
#include <iostream>
#include <assert.h>

template <typename Type>
class Triple //三元组表
{
private:
    struct Node //三元组表的类型，一个struct类型代表一个结点
    {
        int row;                                 //非零元素的行号
        int col;                                 //非零元素的列号
        Type data;                               //非零元素的值
        Node(int r = -1, int c = -1, Type d = 0) //结点构造函数
        {
            row = r;
            col = c;
            data = d;
        }
        void pushNodeValue(int r, int c, Type d) //元素赋值
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
    Triple(int r, int c, int size = 10);            //构造函数，默认矩阵容量为10
    ~Triple() { delete[] matrix; }                  //析构函数
    void pushValue(int r, int c, const Type &size); //元素赋值
    Type getValue(int r, int c) const;              //取元素的值
    //用当前对象保存A的转置的三元组表
    //快速转置算法
    //矩阵乘法
    void print() const; //输出三元组表
    void resize();      //扩大三元组表空间
};
template <typename Type>
Triple<Type>::Triple(int r, int c, int size) //行数r,列数c,非零个数size
{
    assert(r >= 0 && c >= 0 && size >= 0); //判定传入的数是否越界
    numRow = r;
    numCol = c;
    count = 0;
    if (r * c > size) // r*c为最大容量
    {
        maxSize = size;
    }
    else
    {
        maxSize = r * c; //最多只能有c*r个非零元素
    }
    if (maxSize != 0)
    {
        matrix = new Node[maxSize]; //开辟矩阵空间
    }
    else
    {
        matrix = nullptr;
    }
}
template <typename Type>
void Triple<Type>::pushValue(int r, int c, const Type &size) //元素赋值
{
    if (size == 0) // 0不存储
    {
        return;
    }
    assert(r >= 0 && r < numRow - 1 && c >= 0 && c < numCol - 1); //越界报错
    if (count == maxSize)                                         //空间满扩容
    {
        resize();
    }
    int i;
    for (i = 0; i < count; i++)
    {
        if (matrix[i].row > r || (matrix[i].row == r && matrix[i].col > c))
        {
            break; //说明要插入的位置没有元素，跳出循环
        }
        if (matrix[i].row == r && matrix[i].col == c)
        {
            //说明要插入位置已有元素，则用新值覆盖它
            matrix[i].pushNodeValue(r, c, size);
            return;
        }
    }
    for (int j = count - 1; j >= i; j--)
    {
        matrix[j + 1] = matrix[j];
    }
    matrix[i].pushNodeValue(r, c, size);
    count++;
}
template <typename Type>
void Triple<Type>::print() const //输出三元组表
{
    std::cout << "Row:" << numRow << "\t"
              << "Col:" << numCol << "\t"
              << "Count:" << count << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << "(" << matrix[i].row << ","
                  << matrix[i].col << ","
                  << matrix[i].data << ")" << std::endl;
    }
}

template <typename Type>
void Triple<Type>::resize() //扩大三元组表空间
{
    Node *tmp = matrix; //把原空间先给tmp保管
    if (2 * maxSize > numRow * numCol)
    {
        maxSize = numRow * numCol;
    }
    else
    {
        maxSize = 2 * maxSize;
    }
    matrix = new Node[maxSize];     //创建新空间
    for (int i = 0; i < count; i++) //把数据放入新空间中
    {
        matrix[i] = tmp[i];
    }
    delete[] tmp;
    tmp = nullptr;
}

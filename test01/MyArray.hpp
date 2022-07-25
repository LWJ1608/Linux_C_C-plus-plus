#include <iostream>
using namespace std;
template <typename T>
class MyArry
{
private:
    int mCapcity; //数组容量
    int mSize;    //元素个数
    int T *Addr;  //元素首地址
public:
    MyArry(int capcity);          //构造函数
    MyArry(const MyArry<T> &arr); //拷贝构造
    T &operator[](const int index);
    MyArry<T> operator=(const MyArry<T> &arr) void pushBack(const T &data);
};

template <typename T>
MyArry<T>::MyArry(int capcity)
{
    this->mCapcity = capcity;
    this->mSize = 0;
    this->new T[capcity];
}

template <typename T>
MyArry<T>::MyArry(const MyArry<T> &arr)
{ //拷贝构造
}
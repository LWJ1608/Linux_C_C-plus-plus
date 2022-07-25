#pragma once
#include <iostream>

template <typename T>
class MyArry
{
private:
    int mCapcity; //数组容量
    int mSize;    //元素个数
    int T *Addr;  //元素首地址
public:
    MyArry(int capcity);                    //构造函数
    MyArry(const MyArry &arr);              //拷贝构造
    T &operator[](const int index);         // []号重载
    MyArry<T> operator=(const MyArry &arr); // =号重载
    void pushBack(const T &data);           //放入元素函数
};

template <typename T>
MyArry<T>::MyArry(int capcity)
{
    this->mCapcity = capcity;
    this->mSize = 0;
    this->new T[capcity];
}

template <typename T>
MyArry<T>::MyArry(const MyArry &arr)
{
    this->mCapcity = arr->mCapcity;
    this->mSize = arr->mSize;
    T *arr1 = new T[mCapcity];
    for (int i = 0; i < mSize; i++)
    {
        arr1[i] = arr[i];
    }
}

template <typename T>
T &MyArry<T>::operator[](const int index) // []号重载
{
}

template <typename T>
MyArry<T> MyArry<T>::operator=(const MyArry &arr) // =号重载
{
}

template <typename T>
void MyArry<T>::pushBack(const T &data)
{
}
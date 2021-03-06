/**
 * @Author: lwj
 * @Date: 2022-06-01 15:54:01
 * @Description:实现串的基本功能
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/String/string.h
 **/
#pragma once
#include <iostream>
#include <cstring>
#include <assert.h>
using namespace std;
class String
{
private:
    char *data;    //存储串
    int maxSize;   //最大容量
    int strLength; //记录串的长度
public:
    String();                                                //无参构造
    String(const char *str);                                 //构造函数
    String(const String &S);                                 //拷贝构造
    ~String() { delete[] data; }                             //析构函数
    bool operator==(const String &str1) const;               //重载==，用判断两个串是否相等
    String &operator+(const String &str1);                   //重载+，用于合并俩个串
    friend ostream &operator<<(ostream &cout, String &str1); //重载<<，用于输入串
    friend istream &operator>>(istream &cin, String &str1);  //重载<<，用于输入串
    String &operator=(const String &str1);                   //重载=，把一个串的赋值
    inline char &operator[](size_t index) const;             //重载[]，通过下标运算取出字符
    void resize(const int num);                              //扩大容量,默认空间*2
    size_t capacity() const { return this->maxSize; }        //返回串容量
    size_t size() const { return strLength; }                //求串的长度
    bool empty() const { return strLength == 0; }            //判空
    int compare(const String &str1) const;                   //比较当前串和串s的大小
    String subStr(int pos, int num) const;                   //从pos位置开始取长度为num的子串
    int bfFind(const String &s) const;                       //朴素的模式匹配算法
    String &insert(int pos, const String &s);                //在pos位置插入子串s
    String &eraser(int pos, int num);                        //删除从pos位置开始的num个字符
    const char *getData() const { return data; };            //获取字符数组data
    // int kmpFind(const String &) const;                       //改进的模式匹配算法
    // void getNext(const String &t, int *next);                //获取next数组
    //获取nexVal数组
};
String::String()
{
    data = new char[0]; //创建一个空的空间
    maxSize = 0;
    strLength = 0;
}
String::String(const char *str)
{
    maxSize = 2 * strlen(str);    //设置容量
    data = new char[maxSize + 1]; //开辟空间,+1是为了存储‘\0’,在String中不算是字符
    strLength = strlen(str);      //计算串长度
    strcpy(data, str);            //把str拷贝到data中
}
void String::resize(const int num)
{
    char *tmp = nullptr;
    tmp = new char[num];
    strncpy(tmp, data, this->strLength);
    delete[] data;
    data = tmp;
    maxSize = num;
    tmp = nullptr;
}
bool String::operator==(const String &str1) const //重载==，用判断两个串是否相等
{
    if (this->strLength != str1.strLength)
    {
        return false;
    }
    return strcmp(data, str1.data) ? false : true;
}
String &String::operator+(const String &str1) //重载+，用于合并俩个串
{
    // assert((str1.strLength + strLength) < maxSize);
    if ((str1.strLength + strLength) > maxSize)
    {
        resize(str1.strLength + strLength);
    }
    strcat(data, str1.data);
    strLength += str1.strLength;
    return *this;
}
ostream &operator<<(ostream &cout, String &str1) //重载<<，用于输入串
{
    cout << str1.data;
    return cout;
}
istream &operator>>(istream &cin, String &str1) //重载<<，用于输入串
{
    char *tmp = new char[10000]; //申请一个临时空间
    cin >> tmp;
    str1.maxSize = 2 * strlen(tmp);         //为str1重新规定容量大小
    str1.data = new char[str1.maxSize + 1]; //+1是为了放‘\0’
    strcpy(str1.data, tmp);
    str1.strLength = strlen(tmp);
    delete[] tmp;
    return cin;
}
String &String::operator=(const String &str1) //重载=，把一个串的赋值
{
    if (str1.data == data)
    {
        return *this; //如果两个相等，直接返回自己
    }
    delete[] data;
    maxSize = str1.maxSize;
    data = new char[maxSize + 1];
    strcpy(data, str1.data);
    strLength = str1.strLength;
    return *this;
}
inline char &String::operator[](size_t index) const //重载[]，通过下标运算取出字符
{
    assert(index >= 0 && index < maxSize);
    return data[index];
}
int String::compare(const String &str1) const //比较当前串和串s的大小
{
    int i = 0;
    while (data[i] == str1.data[i] && data[i] && str1.data[i])
    {
        ++i;
    }
    return data[i] - str1.data[i]; //如果相等返回0，小于返回小于0的数，大于返回大于0的数
}
int String::bfFind(const String &s) const //朴素的模式匹配算法,找到串s，返回第一次出现的下标，没有返回-1
{
    if (s.strLength > strLength)
    {
        return -1;
    }
    int i = 0; //主串指针
    int j = 0; //子串指针
    while (i < strLength && j < s.strLength)
    {
        if (data[i++] == s.data[j++]) //相等的话下一个
        {
            // i++;
            // j++;
        }
        else //不相等的话，指针回溯
        {
            i = i - j + 1; //主串，i-j能知道，主串比较到哪个位置了，加+1就是下一个
            j = 0;         //子串
        }
    }

    if (s.strLength <= j)
    {
        return i - s.strLength;
    }
    else
    {
        return -1;
    }
}

String String::subStr(int pos, int num) const //从pos位置开始取长度为num的子串
{
    assert(pos >= 0 && pos < strLength);
    assert(num >= 0 && num <= strLength);
    String tmp;
    int i;
    if (strLength - pos < num)
    {
        num = strLength - pos;
    }
    delete[] tmp.data;
    tmp.maxSize = tmp.strLength = num;
    tmp.data = new char[num + 1];
    for (i = 0; i < num; i++)
    {
        tmp.data[i] = data[pos + i];
    }
    tmp.data[i] = '\0'; //记得在子串后面加
    return tmp;
}
String &String::insert(int pos, const String &s) //在pos位置插入子串s
{
    assert(pos >= 0 && pos < strLength);
    if (strLength + s.strLength > maxSize) //空间不够的话扩容
    {
        resize(strLength + s.strLength);
    }
    for (int i = strLength; i >= pos; i--) // data[strLength]为‘\0’,记得也后移
    {
        data[i + s.strLength] = data[i];
    }
    for (int j = 0; j < s.strLength; j++)
    {
        data[pos + j] = s.data[j];
    }
    strLength += s.strLength;
    return *this;
}
String &String::eraser(int pos, int num) //删除从pos位置开始的num个字符
{
    assert(pos >= 0 && pos < strLength);
    if (strLength - pos <= num)
    {
        data[pos] = '\0';
        strLength -= num;
    }
    for (int i = 0; i < strLength - pos; i++)
    {
        data[pos + i] = data[pos + num + i];
    }
    strLength -= num;
}
// void String::getNext(const String &t, int *next) //获取next数组
// {
// }
// int String::kmpFind(const String &) const //改进的模式匹配算法
// {
// }

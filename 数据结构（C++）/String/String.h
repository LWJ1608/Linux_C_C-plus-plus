/**
 * @Author: lwj
 * @Date: 2022-06-01 15:54:01
 * @Description:实现串的基本功能
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/String/string.h
 **/
// class outOfRange : public exception //用于检查范围的有效性
// {
// public:
//     const char *whar() const throw()
//     {
//         return "ERROR! OUT OF RANGE.\n";
//     }
// };
// class badSize : public exception //用于检查长度的有效性
// {
// public:
//     const char *whar() const throw()
//     {
//         return "ERROR! BAD SIZE.\n";
//     }
// };
#include <iostream>
#include <string.h>
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
    //重载>>，用于输出串
    //重载=，把一个串的赋值
    //重载[]，通过下标运算取出字符
    void resize(const int num);                 //扩大容量,默认空间*2
    size_t capacity() { return this->maxSize; } //返回串容量
    size_t size() { return strLength; }         //求串的长度
    bool empty() { return strLength == 0; }     //判空
    //比较当前串和串s的大小
    //从pos位置开始取长度为num的子串
    //朴素的模式匹配算法
    //在pos位置插入子串s
    //删除从pos位置开始的num个字符
    //获取字符数组data
    //改进的模式匹配算法
    //获取next数组
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
    maxSize = 2 * strlen(str);     //设置容量
    data = new char[maxSize + 1];  //开辟空间,+1是为了存储‘\0’,在String中不算是字符
    strLength = strlen(data);      //计算串长度
    strncpy(data, str, strLength); //把str拷贝到data中
}
void String::resize(const int num)
{
    char *tmp = nullptr;
    tmp = new char[num + 1];
    strncpy(tmp, data, this->strLength);
    delete[] data;
    data = tmp;
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
    assert((str1.strLength + strLength) < maxSize);
    strcat(data, str1.data);
    strLength += str1.strLength;
    return *this;
}
ostream &operator<<(ostream &cout, String &str1) //重载<<，用于输入串
{
    cout << str1.data;
    return std::cout;
}

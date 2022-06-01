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
#include <cstring>
class String
{
private:
    char *data;    //存储串
    int maxSize;   //最大容量
    int strLength; //记录串的长度
public:
    String(const char *str = nullptr);          //构造函数
    String(const String &S);                    //拷贝构造
    ~String() { delete[] data; }                //析构函数
    //重载==，用判断两个串是否相等
    //重载+，用于合并俩个串
    //重载=，把一个串的赋值
    //重载[]，通过下标运算取出字符
    //重载<<，用于输入串
    //重载>>，用于输出串
    size_t capacity() { return this->maxSize; } //返回串容量
    //求串的长度
    //判空
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

String::String(const char *str)
{
    maxSize = 2 * sizeof(str) / sizeof(str[0]);
    // maxSize = 2 * strlen(str);
    data = new char[maxSize + 1];
    strLength = strlen(data);
    strncpy(data, str, strLength);
}

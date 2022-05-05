/**
 * @Author: lwj
 * @Date: 2022-05-04 16:50:05
 * @LastEditTime: 2022-05-04 16:50:14
 * @LastEditors: lwj
 * @Description:string容器的字符串查找和替换
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL/String/test04.cpp
 **/

#include <iostream>
#include <string>

using namespace std;
void test01()
{

    const char *str1 = "wo";
    const char *str2 = "别迷恋哥，哥只是个传说";
    char char_1 = 'e';
    string s1("hello worlwd!");
    string s2 = "ll";

    cout << "\n*************************查找**************************" << endl;
    // * `int find(const string& str, int pos = 0) const;`              //查找str第一次出现位置,从pos开始查找
    int index_1 = s1.find(s2);
    cout << "ll第一次出现位置：" << index_1 << endl;

    // * `int find(const char* s, int pos = 0) const; `                 //查找s第一次出现位置,从pos开始查找
    int index_2 = s1.find(str1);
    cout << "字符串str1第一次出现位置：" << index_2 << endl;

    // * `int find(const char* s, int pos, int n) const; `              //从pos位置查找s的前n个字符第一次位置
    int index_3 = s1.find(str2, 0, 2);
    cout << "字符串str2的前俩个字符第一次出现位置：" << index_3 << endl;

    // * `int find(const char c, int pos = 0) const; `                  //查找字符c第一次出现位置
    int index_4 = s1.find(char_1);
    cout << "字符char_1第一次出现位置：" << index_4 << endl;

    // * `int rfind(const string& str, int pos = npos) const;`          //查找str最后一次位置,从pos开始查找
    int index_5 = s1.rfind(s2);
    cout << "字符串s2最后一次出现位置：" << index_5 << endl;

    // * `int rfind(const char* s, int pos = npos) const;`              //查找s最后一次出现位置,从pos开始查找
    int index_6 = s1.rfind(str1);
    cout << "字符串str1最后一次出现的位置：" << index_6 << endl;

    // * `int rfind(const char* s, int pos, int n) const;`              //从pos查找s的前n个字符最后一次位置
    int index_7 = s1.rfind(str1, 0, 1);
    cout << "字符串str1的前两个字符最后一次出现的位置：" << index_7 << endl;

    // * `int rfind(const char c, int pos = 0) const;  `                //查找字符c最后一次出现位置
    int index_8 = s1.rfind(char_1);
    cout << "字符char_1最后一次出现位置：" << index_4 << endl;

    cout << "\n***************************替换***************************" << endl;

    // * `string& replace(int pos, int n, const string& str); `         //替换从pos开始n个字符为字符串str
    string &s4 = s1.replace(0, 2, s2);
    cout << "s4 = " << s4 << endl;

    // * `string& replace(int pos, int n,const char* s); `               //替换从pos开始的n个字符为字符串s
    string &s5 = s1.replace(0, 2, str1);
    cout << "s5 = " << s5 << endl;
}

int main()
{
    test01();
    return 0;
}

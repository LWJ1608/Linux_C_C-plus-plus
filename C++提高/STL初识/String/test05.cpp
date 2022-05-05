/**
 * @Author: lwj
 * @Date: 2022-05-05 17:00:53
 * @LastEditTime: 2022-05-05 17:00:54
 * @LastEditors: lwj
 * @Description:string字符串比较
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL/String/test05.cpp
 **/
// string容器的比较是对它们的ASCII进行比较的
// = 返回 0
// > 返回 1
// < 返回 - 1

#include <iostream>
#include <string>

using namespace std;
void test01()
{
    const char* str1="ba";
    const char* str2="bd";
    string s1="bb";
    string s2="bc";
    // * `int compare(const string &s) const; `  //与字符串s比较
    int c_num1=s1.compare(s2);
    cout<<"s1 s2 "<<c_num1<<endl;

    // * `int compare(const char *s) const;`      //与字符串s比较
    int c_num2 = s1.compare(str1);
    int c_num3 = s1.compare(str2);
    cout << "s1 str1 " << c_num2 << endl;
    cout << "s1 str2 " << c_num3 << endl;
}
int main()
{
    test01();
    return 0;
}
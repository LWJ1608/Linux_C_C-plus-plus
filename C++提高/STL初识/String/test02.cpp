/**
 * @Author: lwj
 * @Date: 2022-05-04 13:45:52
 * @LastEditTime: 2022-05-04 13:45:52
 * @LastEditors: lwj
 * @Description:string 容器的赋值操作
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL/String/test02.cpp
 **/
// * `string& operator=(const char* s);`           //char*类型字符串 赋值给当前的字符串
// * `string& operator=(const string &s);`         //把字符串s赋给当前的字符串
// * `string& operator=(char c);`                  //字符赋值给当前的字符串
// * `string& assign(const char *s);`              //把字符串s赋给当前的字符串
// * `string& assign(const char *s, int n);`       //把字符串s的前n个字符赋给当前的字符串
// * `string& assign(const string &s);`            //把字符串s赋给当前字符串
// * `string& assign(int n, char c);`              //用n个字符c赋给当前字符串

#include <iostream>
#include <string>

using namespace std;
void test01()
{
    const char *str1 = "lwj"; // c风格的字符串
    string str2 = "hello world";
    // =号重载方式赋值
    string s1;
    s1 = str1; // char*类型字符串 赋值给当前的字符串
    cout << "s1 = " << s1 << endl;

    string s2;
    s2 = str2; //把字符串s赋给当前的字符串
    cout << "s2 = " << s2 << endl;

    string s3;
    s3 = 's'; //字符赋值给当前的字符串
    cout << "s3 = " << s3 << endl;

    // string的成员函数assign进行赋值
    string s4;
    s4.assign(str1); //将字符串str1赋值给当前的字符串
    cout << "s4 = " << s4 << endl;

    string s5;
    s5.assign(str1, 2); //将str1前2个字符赋值给当前字符串
    cout << "s5 = " << s5 << endl;

    string s6;
    s6.assign(str2); //把字符串str2赋值给当前字符串
    cout << "s6 = " << s6 << endl;

}
int main()
{
    test01();
    return 0;
}
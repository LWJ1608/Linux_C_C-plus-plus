/**
 * @Author: lwj
 * @Date: 2022-05-04 15:07:59
 * @LastEditTime: 2022-05-04 15:08:00
 * @LastEditors: lwj
 * @Description:string容器的字符串拼接
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL/String/test03.cpp
 **/

// * `string& operator+=(const char* str);`                   //重载+=操作符
// * `string& operator+=(const char c);`                         //重载+=操作符
// * `string& operator+=(const string& str);`                //重载+=操作符
// * `string& append(const char *s); `                               //把字符串s连接到当前字符串结尾
// * `string& append(const char *s, int n);`                 //把字符串s的前n个字符连接到当前字符串结尾
// * `string& append(const string &s);`                           //同operator+=(const string& str)
// * `string& append(const string &s, int pos, int n);`//字符串s中从pos开始的n个字符连接到字符串结尾

#include <iostream>
#include <string>
using namespace std;

//对字符串进行拼接
void test01()
{
    //+=号重载，对字符串进行操作
    const char *s = "hahah ";
    string s1("我");
    string s2("吃鸡，cf");
    s1 += "爱玩游戏"; //把char* 类型的字符串拼接到当前的字符串上
    cout << "s1 = " << s1 << endl;
    s1 += ':';
    cout << "s1 = " << s1 << endl;
    s1 += s2; //拼接两个string类型的字符串
    cout << "s1 = " << s1 << endl;

    // string容器自带的字符拼接成员函数
    string s3("I ");
    s3.append("LOVE "); //把字符串s连接到当前字符串结尾
    cout << "s3 = " << s3 << endl;
    s3.append(s, 3); //把字符串s的前n个字符连接到当前字符串结尾
    cout << "s3 = " << s3 << endl;
    s3.append(s2); //同operator+=(const string& str)
    cout << "s3 = " << s3 << endl;
}
int main()
{
    test01();
    return 0;
}
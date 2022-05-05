/**
 * @Author: lwj
 * @Date: 2022-05-05 18:35:38
 * @LastEditTime: 2022-05-05 18:35:39
 * @LastEditors: lwj
 * @Description:string字符串的插入和删除
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL/String/test06.cpp
 **/

// * `string& erase(int pos, int n = npos);`                  //删除从Pos开始的n个字符

#include <iostream>
#include <string>

void test01()
{
    const char *str1 = "lwj";
    std::string s1 = "yyds";
    std::string s2 = "ddys";
    // * `string& insert(int pos, const char* s);  `              //在pos位置插入char*类型的字符串
    std::string tmp_1 = s1.insert(0, str1);
    std::cout << "插入str1后,s1 = " << tmp_1 << std::endl;

    // * `string& insert(int pos, const string& str); `           //在pos位置插入string类型的字符串
    std::string tmp_2 = s1.insert(0, s2);
    std::cout << "插入s2后,s1 = " << tmp_2 << std::endl;

    // * `string& insert(int pos, int n, char c);`                //在指定位置插入n个字符c
    std::string tmp_3 = s1.insert(0, 8, '8');
    std::cout << "在下标为0的位置插入8个‘8’后,s1 = " << tmp_3 << std::endl;
}
int main()
{
    test01();
    return 0;
}
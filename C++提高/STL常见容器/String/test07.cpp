/**
 * @Author: lwj
 * @Date: 2022-05-05 19:41:26
 * @LastEditTime: 2022-05-05 19:41:27
 * @LastEditors: lwj
 * @Description:从string字符串中获取想要的子串
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL/String/test07.cpp
 **/
#include <iostream>
#include <string>
void test01()
{
    std::string s1 = "yyds";
    // `string substr(int pos = 0, int n = npos) const;`   //返回由pos开始的n个字符组成的字符串
    s1 = s1.substr(0, 3);
    std::cout<<s1<<std::endl;
}
int main()
{
    test01();
    return 0;
}
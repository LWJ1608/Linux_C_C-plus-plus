/**
 * @Author: lwj
 * @Date: 2022-05-13 14:08:26
 * @LastEditTime: 2022-05-13 14:08:26
 * @LastEditors: lwj
 * @Description:pair对组创建
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Set_Multiset/test06.cpp
 **/
#include <iostream>
#include <string>

//对组创建
void test01()
{
    //第一种创建方法
    std::pair<std::string, int> ret("小王", 19);
    std::cout << "姓名：" << ret.first << "\t年龄：" << ret.second << std::endl;

    //第二种创建方法
    std::pair<std::string, int> ret1 = std::make_pair("小三", 30);
    std::cout << "姓名：" << ret.first << "\t年龄：" << ret.second << std::endl;
    
}

int main()
{
    test01();
    return 0;
}
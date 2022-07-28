/**
 * @Author: lwj
 * @Date: 2022-07-28 11:48:57
 * @FilePath: /Linux_C_C-plus-plus/test01/test02.cpp
 * @Description:文件读写
 **/
#include <iostream>
using namespace std;
#include <fstream>

void test02()
{
    ifstream ifs("test02.txt",ios::in);//通过构造函数打开文件
    if(ifs==NULL)
}

int main()
{
    test02();
    return 0;
}
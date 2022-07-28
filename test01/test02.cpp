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
    //打开文件
    ifstream ifs("test02.txt", ios::in); //通过构造函数打开文件
    // ifstream ifs;
    // ifs.open("test02.txt", ios::in);//成员函数打开文件
    if (!ifs)
    {
        cout << "文本打开失败！" << endl;
        return;
    }
    //读取文件
    char ch;
    while (ifs.get(ch))
    {
        cout << ch << endl;
    }
    //关闭文件
    ifs.close();
}

int main()
{
    test02();
    return 0;
}
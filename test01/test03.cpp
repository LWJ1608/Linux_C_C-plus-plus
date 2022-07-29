/**
 * @Author: lwj
 * @Date: 2022-07-29 12:33:26
 * @FilePath: /Linux_C_C-plus-plus/test01/test03.cpp
 * @Description:二进制文件读写
 **/
#include <iostream>
using namespace std;
#include <fstream>
class Person
{
private:
    int m_age;
    int m_id;

public:
    Person(int age, int id) : m_age(age), m_id(id) {}
    void Show()
    {
        cout << "Age = " << m_age << "    "
             << "Id = " << Id << endl;
    }
};
int main()
{

    return 0;
}
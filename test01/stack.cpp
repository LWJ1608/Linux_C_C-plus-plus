/**
 * @Author: lwj
 * @Date: 2022-08-29 14:12:10
 * @FilePath: /Linux_C_C-plus-plus/test01/stack.cpp
 * @Description: stack(栈)的使用
 **/
#include <iostream>
#include <stack>

class Person
{
private:
    int m_id;

public:
    Person(int id) : m_id(id) {}
};
void test01()
{
    Person *p1;
    Person p(10491919);
    p1 = &p;
    std::stack<Person> v;
    std::stack<Person *> v1;
    v.push(p);
    v1.push(p1);
}
int main()
{
    test01();
    return 0;
}
/**
 * @Author: lwj
 * @Date: 2022-08-29 14:59:43
 * @FilePath: /Linux_C_C-plus-plus/test01/set.cpp
 * @Description: set
 **/
#include <iostream>
#include <set>
class compare
{
public:
    bool operator()(int s1, int s2)
    {
        return s1 > s2;
    }
};
void printSet(std::set<int, compare> s)
{
    for (std::set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
void test01()
{
    std::set<int, compare> v1;
    v1.insert(8);
    v1.insert(4);
    v1.insert(9);
    v1.insert(1);

    printSet(v1);
}
int main()
{
    test01();
    return 0;
}
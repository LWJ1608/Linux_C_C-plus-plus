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
        return s1 < s2;
    }
};

int main()
{
    std::set<int> v1;
    v1.return 0;
}
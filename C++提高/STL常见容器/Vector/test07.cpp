/**
 * @Author: lwj
 * @Date: 2022-05-07 18:58:49
 * @LastEditTime: 2022-05-07 18:58:49
 * @LastEditors: lwj
 * @Description:vecotor	数据插入和删除
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Vector/test07.cpp
 **/
//删除容器中所有元素
#include <iostream>
#include <vector>
void printVector(std::vector<int> &v)
{
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
void test01()
{
    std::vector<int> v1;

    // * `push_back(ele);`                                         //尾部插入元素ele
    for (int i = 0; i < 5; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    // * `pop_back();`                                                //删除最后一个元素
    v1.pop_back();
    printVector(v1);

    // * `insert(const_iterator pos, ele);`        //迭代器指向位置pos插入元素ele
    v1.insert(v1.begin(), 88);
    printVector(v1);

    // * `insert(const_iterator pos, int count,ele);`//迭代器指向位置pos插入count个元素ele
    v1.insert(v1.end(), 3, 99);
    printVector(v1);

    // * `erase(const_iterator pos);`                     //删除迭代器指向的元素
    v1.erase(v1.begin());
    printVector(v1);

    // * `erase(const_iterator start, const_iterator end);`//删除迭代器从start到end之间的元素
    v1.erase(v1.begin() + 3, v1.end()-1);
    printVector(v1);

    // * `clear();                                         //清空
    

    
}
int main()
{
    test01();
    return 0;
}
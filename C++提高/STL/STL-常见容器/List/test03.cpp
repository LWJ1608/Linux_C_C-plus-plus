/**
 * @Author: lwj
 * @Date: 2022-05-11 21:23:52
 * @LastEditTime: 2022-05-11 21:23:53
 * @LastEditors: lwj
 * @Description:
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/List/test03.cpp
 **/
// * `size(); `                       //返回容器中元素的个数
// * `empty(); `                      //判断容器是否为空
// * `resize(num);`                   //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//   ​					               //如果容器变短，则末尾超出容器长度的元素被删除。
// * `resize(num, elem); `            //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
#include <iostream>
#include <list>

void test01()
{
    std::list<int> L1;
    for (int i = 0; i < 5; i++)
    {
        L1.push_back(i);
    }
    int num = L1.size(); //返回容器大小
    std::cout << "容器大小为：" << num << std::endl;
    std::cout << "L1.empty() = " << L1.empty() << std::endl; //判空
    L1.resize(8);                                            //扩容
    std::cout << "容器大小为：" << num << std::endl;
    L1.resize(8,8);//扩容，没用到的空间用8填充
}
int main()
{
    test01();
    return 0;
}
/**
 * @Author: lwj
 * @Date: 2022-05-27 15:33:58
 * @LastEditTime: 2022-05-27 15:33:58
 * @Description:测试栈的功能
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Stack/listStack/main.cpp
 **/

#include "listStack.h"

int main(void)
{
    ListStack<int> L1;
    for (int i = 0; i < 5; i++)
    {
        L1.push(i);//插入数据
    }
    std::cout << "栈元素个数为：" << L1.size() << std::endl;
    std::cout << "栈顶元素为：" << L1.getTop() << std::endl;
    std::cout << "移除栈顶元素后：" << std::endl;
    std::cout << "栈顶元素为：" << L1.pop() << std::endl;

    return 0;
}
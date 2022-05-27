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
    for (int i = 0; i < L1.size(); i++)
    {
        L1.push(i);
    }
    return 0;
}
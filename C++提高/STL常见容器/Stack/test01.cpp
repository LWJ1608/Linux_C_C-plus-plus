/**
 * @Author: lwj
 * @Date: 2022-05-11 13:07:16
 * @LastEditTime: 2022-05-11 13:07:18
 * @LastEditors: lwj
 * @Description:stack容器的常用接口
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Stack/test01.cpp
 **/

//构造函数
// * `stack<T> stk;`                       //stack采用模板类实现， stack对象的默认构造形式
// * `stack(const stack &stk);`            //拷贝构造函数
// 赋值操作：
// * `stack& operator=(const stack &stk);` //重载等号操作符
// 数据存取：
// * `push(elem);`                         //向栈顶添加元素
// * `pop();`                              //从栈顶移除第一个元素
// * `top(); `                             //返回栈顶元素
// 大小操作：
// * `empty();`                            //判断堆栈是否为空
// * `size(); `                            //返回栈的大小

#include <iostream>
#include <stack>

// void printStack(std::stack<int> &s)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         std::cout << s.pop() << std::endl;
//     }
//     std::cout << std::endl;
// }
void test01()
{
    std::stack<int> s1;     //默认构造
    std::stack<int> s2(s1); //拷贝构造
    std::stack<int> s3;

    s3 = s1; //等号重载赋值
    for (int i = 0; i < 5; i++)
    {
        s1.push(i); //向栈顶添加元素
    }
    int a = s1.top(); //返回栈顶元素
    std::cout << "s1.top = " << a << std::endl;

    s1.pop(); //移除栈顶元素
    std::cout << "s1.top = " << s1.top() << std::endl;

    std::cout << s1.empty() << std::endl;
    std::cout << "stack大小为：" << s1.size() << std::endl;
}

int main()
{
    test01();
    return 0;
}
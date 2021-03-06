/*
 * @Author: lwj
 * @Date: 2022-04-25 20:58:31
 * @Description:内联函数的使用
 */
#include <iostream>
using namespace std;
// 1. 内联函数必须和函数体的实现写在一块,;
// 2. 内联函数直接将函数体插入在函数调用的地方;
// 3. 内联函数速度更快,没有压栈,调转,返回等额外开销;
// 4. 内联函数中不能有循环语句,不能存在过多的条件判断语句;
// 5. 内联函数只是一种请求,C++编译器不一定允许这种请求;

//内联函数使用注意事项：
// 根据C++谷歌代码编写规范，10行内输出，赋值函数推荐使用
//循环体和多条判断语句函数不使用

//内联函数
inline void printA()
{
    int a = 10;
    cout << "a = " << a << endl;
}

int main(void)
{
    printA();

    return 0;
}

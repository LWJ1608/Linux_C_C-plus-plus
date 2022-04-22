/*
 * @Author: lwj
 * @Date: 2022-03-22 14:27:49
 * @LastEditTime: 2022-03-22 14:38:34
 * @Description:有元函数的模板化
 * @FilePath: /C++基础/友元函数模板化/友元函数模板.cpp
 */

#include <iostream>
using namespace std;

template <typename Type> //模板
class Complex;           //类的前置声明
template <typename Type>
ostream &operator<<(ostream &out, const Complex<Type> &c); //友元函数的前置声明

template <typename Type>
class Complex
{
public:
    friend ostream &operator<<<Type>(ostream &out, const Complex<Type> &c); //对<<的后面加上<Type>;进行友元函数的模版化;
    Complex(Type a, Type b);
    Complex(const Complex &c) {}
    Complex &operator=(const Complex &c) {}
    ~Complex() {}

public:
    void printComplex();
    Complex operator+(const Complex &c);

private:
    Type a;
    Type b;
};

//成员函数实现 +
template <typename Type>
Complex<Type>::Complex(Type a, Type b)
{
    this->a = a;
    this->b = b;
}
template <typename Type>
void Complex<Type>::printComplex()
{
    cout << "a:" << a << " b:" << b << endl;
}
template <typename Type>
Complex<Type> Complex<Type>::operator+(const Complex<Type> &c)
{
    return Complex(a + c.a, b + c.b);
}

//友元函数实现<<运算符重载
template <typename Type>
ostream &operator<<(ostream &out, const Complex<Type> &c)
{
    out << "(" << c.a << ", " << c.b << ")";

    return out;
}
int main(void)
{
    Complex<int> c1(1, 2);
    Complex<int> c2(3, 4);
    Complex<int> c3 = c1 + c2;
    cout << c3 << endl;
    c3.printComplex();

    return 0;
}

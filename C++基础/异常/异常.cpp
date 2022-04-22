/**
 * @author lwj
 * 修改日期 2022.3.21
 * 异常简单例子
 * */

//try 可能出现异常的地方
//throw 抛出变量或类对象的类型
//catch 捕获异常类进行处理（按数据类型进行捕获）

#include<iostream>
using namespace std;

//异常规范，就是明确了抛出的数据类型，
class Test{};
double test(int a,int b)throw (short,int,double,Test)
{
    if(b==0)
    {
        throw b;//抛出异常后，不再向下执行
    }
    return a/b;
}

int main()
{
    int a=9;
    int b=0;
    double result =0.0;
    try//可能发生异常的地方
    {
        result=test(a,b);
    } 
    
    catch(int){  //按类型进行捕获
        cout<<"Div Error(int), b==0"<<endl;
    }
    catch(short){
        cout<<"Div Error(short), b==0"<<endl;
    }
    catch(...){  //捕获的是所有的异常
                 //这个只能作为最后的捕获分支，上面没捕获到，交给它处理。
    }
    cout<<result<<endl;
    //异常的发生，程序正常的结束！
    
}


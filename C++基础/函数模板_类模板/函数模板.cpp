/*@author: liaowangjun
 * 修改时间：2022.3.14
 * 模板使用注意事项
*/
#include<iostream>
using namespace std;
//模板有利用代码复用性，参数类型有自己设定
//
template<typename Type>//模板声明，typename可以用class替换

Type Max(const Type a,const Type b){
        return a > b ? a : b ;
}

/*//这样写可以分别传入想要的数据类型
  template<typename Type1,typename Type2>
  Type Max(coust Type1 a,coust Type2 b)
  {
  	return a > b ? a : b ;
  }

int main()
{       
        cout<<Max('a','b')<<endl;
//        cout<<Max(2,3.232)<<endl;//erro:在模板中，不支持隐式转换
	//可修改为以下方式：
	cout<<Max<int>(2,3.343)<<endl;
	cout<<Max(2,(int)3.343)<<endl;
	cout<<Max((double)2,3.343)<<endl;
	return 0;
} 

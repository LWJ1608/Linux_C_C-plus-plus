/**
*@author lwj
*�޸����� 2022.3.16
*��̬���ݷ���
**/

//1.���غ���д������
//
//����overload����ͬһ�����У���������ͬ�������б�ͬ���������������Щ�����Ĳ�ͬ�����б���ͬ���ĺ������������Σ��Ӷ�����һЩ��ͬ���Ƶ�Ԥ��������δ���ֶ�̬��

//��дoverride��Ҳ�и��ǣ��������¶��常��������ͬ������ͬ�������麯������Ҫ���ڼ̳й�ϵ�г��ֵģ�����д�ĺ���������virtual�ģ���д�����ķ������η����Բ�ͬ������virtual��private�ģ���������д������Ϊpublic,protectedҲ���ԣ������˶�̬��

//�ض���redefining��Ҳ�����أ��������¶��常��������ͬ���Ƶķ��麯���������б������ͬ���Բ�ͬ���Ḳ���丸��ķ�����δ���ֶ�̬��

//a���������ĺ����ͻ���ĺ���ͬ�������ǲ�����ͬ����ʱ����������virtual������ĺ��������ء�

//b���������ĺ��������ĺ���ͬ�������Ҳ���Ҳ��ͬ�����ǻ��ຯ��û��vitual�ؼ��֣���ʱ������ĺ��������ء��������virtual�ͳ���д�� )

#include <iostream>  
using namespace std;  
class Base  
{  
private:  
    virtual void display() { cout<<"Base display()"<<endl; }  
    void show(){ cout<<"Base show()"<<endl; }  
public:  
    void exec(){ display(); show(); }  
    void fun(string s) { cout<<"Base fun(string)"<<endl; }  
    void fun(int a) { cout<<"Base fun(int)"<<endl; }//overload:����fun������Base����ڲ�������  
    virtual int function(){}  
};  
class ClassA:public Base  
{  
public:  
    void display() { cout<<"ClassA display()"<<endl; }//override:������displayΪ�麯�����Ҳ����б�һֱ���ʴ˴�Ϊ��д  
    void fun(int a,int b) { cout<<"ClassA fun(int,int)"<<endl; }//redefining:fun������Base���в�Ϊ�麯�����ʴ˴�Ϊ�ض���  
    void show() { cout<<"ClassA show()"<<endl; }//redefining:����ͬ��  
    int function(int a){}//overload:ע���������ض�������д����Ϊ�����б�ͬ���ڱ���ʱClassA����ʵ���и��������Լ�͵͵���ϵĴ�Base�̳�����int function(){};  
};  
int main(){  
    ClassA a;  
    Base *base=&a;  
    base->exec();//display()��ClassA�ģ���Ϊ�����ˣ�show()��Base�Լ���  
    a.exec();//���ͬ��  
    a.show();//show()��ClassA�ض����  
    base->fun(1);//fun()��Base�Լ��ģ���Ϊֱ�ӴӶ���base����  
    a.fun(1, 1);//fun()��ClassA�ض����  
    return 0;  
}

#include<iostream>
using namespace std;

int main(void){
	int a =9; 
    int &b = a; //��ͨ����,����һ������,����û���ڴ��ַ,���þ��Ǹ��ڴ�ȡ�������;
	int &i=10;//�ᱨ��&iû�з���ĵ�ַ�洢��ֵ��ֻ���������ڵ�ַ 
    const int &c = 10; //����const��&c��ɳ���������������������ڴ�ռ䣬����ֱ�Ӹ�����ֵ 
	cout<<b<<endl;
    return 0;
}

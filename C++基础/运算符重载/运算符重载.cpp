/**
 * @author lwj
 * 修改日期 2022.3.21
 * 异常简单例子
 * */

//对+，+=，[]，*，==，！=  进行了重载

#include<iostream>
#include<string.h>
#include<assert.h>

using namespace std;

class  String
{
private:
                char* data;
public:
                String(const char* str="")
                {
                    if(str==NULL)
                    {
                        data=new char[1];
                        data[0] = 0;
                    }else
                    {
                        data = new char[strlen(str)+1];
                        strcpy(data,str);
                    }
                }
                String(const String& s)
                {
                    data = new char[strlen(s.data)+1];
                    strcpy(data,s.data); 
                }
    ~ String()
    {
        delete []data;
    }

public:
                //+重载
                String  operator+(const String& s1)
                {
                    char * tmp = new char[strlen(s1.data)+1] ;//先创建存放两个相加的数的大小的内存
                    strcpy(tmp,data);//先把一个数先放入tmp中
                    strcat(tmp,s1.data);//然后再将另一个数拼接起来
                    return tmp;
                }

                //=重载
                String  operator=(const String& s2)
                {
                    // char * tmp = new char[strlen(s1.data)+1] ;//先创建存放两个相加的数的大小的内存
                    strcpy(data,s2.data);//先把一个数先放入tmp中
                    return String(data);
                }

                //+=重载
                void operator+=(const String& s3)
                {
                    char *tmp = new char[strlen(s3.data)+strlen(data)+1];
                    strcpy(tmp,s3.data);
                    strcat(tmp,data);
                    delete []data;
                    data =  tmp;
                }

                //[]的重载
                char operator[](int pos)
                {
                    assert(pos>=0 && pos<=strlen(data));
                    return data[pos];
                }
                
                //==重载
                bool operator==(const String& s5)
                {
                    if(data == s5.data)
                    {
                        return true;
                    }else
                    {
                        return false;
                    }
                }

                //*重载
                char operator*(int i)
                {
                    return data[i];
                }
                //输出数据
                void  printStr()
                {
                    int count = strlen(data);
                    for (size_t i = 0; i < count; i++)
                    {
                        cout<<data[i];
                    }
                    cout<<endl;
                }
};

int main()
{
    String a1 = "asdfna";
    String a2 = "sfasdfasf";

    String a3 (a1);//测试拷贝构造
    // cout<<"a3.data = ";
    // a3.printStr();

    // a3 = a1;//=号重载,防止重复释放空间
    // a3 = a2 + a1;//测试=重载
    // cout<<"a3.data = ";

    // a3+= a2; //+=重载
    // cout<<"a3.data = ";
    // a3.printStr();

    // cout<<a3[0]<<endl;//测试[]重载

    // if(a1==a2)//测试==重载
    // {
    //     cout<<"相等"<<endl;
    // }else
    // {
    //     cout<<"不相等"<<endl;
    // }



}
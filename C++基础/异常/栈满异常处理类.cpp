/**
 * @author lwj
 * 修改日期 2022.3.21
 * 异常简单例子
 * */

#include<iostream>
#include<string>
using namespace std;

#define STACK_SIZE    6

//编写相关的异常类，来处理入栈满
template<typename Type>
class pushOnStackFull{
public:
    pushOnStackFull(const char *s, int val) : str(s), value(val){} 
    ~pushOnStackFull(){}
public:
    void What(){  //明确异常发生了什么，并且相应的解决
        cout<<str<<endl; //这里只是打印信息。
        cout<<value<<" not push stack!"<<endl;
    }
private:
    Type value;
    string str;
};

template<typename Type>
class Stack{
public:
    Stack(int sz = STACK_SIZE){
        capacity = sz > STACK_SIZE ? sz : STACK_SIZE;
        data = new Type[capacity];
        top = 0;
    }
    ~Stack(){
        delete []data;
        data = NULL;
        capacity = top = 0;
    }
public:
    bool isFull()const{
        return top >= capacity;
    }
    bool push(const Type &x){
        if(isFull()){
            throw pushOnStackFull<Type>("栈满，不能入栈!", x);
        }
        data[top++] = x;
        return true;
    }
public:
    void showStack()const{
        for(int i = top-1; i >=0; --i){
            cout<<data[i]<<endl;
        }
    }
private:
    Type *data;
    size_t capacity;
    size_t top;
};

int main(void){
    Stack<int> st;
    try{
        for(int i = 0; i <= 8; i++){
            st.push(i);
        }
    }
    catch(pushOnStackFull<int> &e){
        e.What();
    }
    st.showStack();
}
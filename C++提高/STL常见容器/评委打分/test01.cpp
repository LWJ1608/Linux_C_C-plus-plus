/**
 * @Author: lwj
 * @Date: 2022-05-10 20:11:43
 * @LastEditTime: 2022-05-10 20:11:44
 * @LastEditors: lwj
 * @Description:
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/评委打分/test01.cpp
 **/
// 1. 创建五名选手，放到vector中
// 2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
// 3. sort算法对deque容器中分数排序，去除最高和最低分
// 4. deque容器遍历一遍，累加总分
// 5. 获取平均分

#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <algorithm>

class Person
{
public:
    std::string _name;
    int _score;

    Person(std::string name, int score)
    {
        this->_name = name;
        this->_score = score;
    }
};
//把选手信息放入vector容器中
void personPutVector(std::vector<Person> &v1)
{
   //存放选手信息
    std::string Name = "ABCDE"; //设定选手的名为A，B，C，D，E
    for (int i = 0; i < 5; i++)
    {
        std::string name = "选手";
        name = Name[i];
        int score = 0;
        Person p(name, score);
        v1.push_back(p); //把选手放入vector容器
    }
}
//打分
void getScore(std::vector<Person> &v)
{
    std::deque<int> d1;
    for (std::vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        for (int i = 0; i < 10; i++)
        {
            int num = rand() % 41 + 60; //产生随机数
            d1.push_back(num);          //把分数放入deque容器
        }
        sort(d1.begin(), d1.end()); //分数排序
        //去分
        d1.pop_back();
        d1.pop_front();
        int count = 0;
        for (int i = 0; i < 10; i++) //求平均数
        {
            count += d1[i]; //分数相加
        }
        int avg = count / 8; //求平均值
        it->_score = avg;
    }
}
void printPerson(std::vector<Person> &p1) //打印选手平均数
{

    for (int a = 0; a < 5; a++)
    {
        std::cout << "选手" << p1[a]._name << "的平均数：" << p1[a]._score << std::endl;
    }
}
int main()
{
    std::vector<Person> v1;
    personPutVector(v1);
    getScore(v1);
    printPerson(v1);
     return 0;
}

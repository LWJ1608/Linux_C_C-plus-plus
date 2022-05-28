/**
 * @Author: lwj
 * @Date: 2022-05-28 13:04:14
 * @LastEditTime: 2022-05-28 13:04:14
 * @Description:测试顺序表
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/list/main.cpp
 **/
#include "seqList.h"
using namespace std;

void testSeqList()
{
    SeqList<int> s1;
    SeqList<int> s2;

    cout << "insert插入测试：" << endl;
    for (int i = 0; i < 10; i++)
    {
        s1.insert(i, i);
        s2.insert(i, 99);
    }
    s1.traverse();

    cout << "测试返回表大小函数size（）：" << s1.size() << endl;

    cout << "拷贝构造函数测试：" << endl;
    SeqList<int> s3(s1);
    s3.traverse();

    cout << "表满扩大容量函数resize():" << endl;
    cout << "未扩大表时的容量：" << s1.size() << endl;
    for (int i = 0; i < 10; i++)
    {
        if (s1.isFull())
        {
            s1.resize();
        }
        s1.insert(0, 88);
    }
    cout << "扩大表后容量为：" << s1.size() << endl;
    s1.traverse();

    cout << "测试删除元素函数remove()：" << endl;
    s1.remove(s1.size());//删除最后一个元素
    s1.traverse();

    cout << "测试visit()功能：" << s1.visit(5) << endl;

    // cout << "测试查找value元素功能：" << s1.search(4)<<" "<<s1.search(99)<< endl;

    // cout << "测试逆置功能：" << endl;
    // s1.inverse();
    // s1.traverse();

    // cout << "测试s2表插入s1表：" << endl;
    // s1.Union(s2);
    // s1.traverse();
}
int main()
{
    testSeqList();
    return 0;
}
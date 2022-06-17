/**
 * @Author: lwj
 * @Date: 2022-06-17 09:10:47
 * @Description:测试二叉树功能
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/数据结构/BinTree/main.cpp
 **/

#include"binTree.h"
// ABC##DE##F##G#H##
/*
先根序如下:
A B C D E F G H
中根序如下:
C B E D F A G H
后根序如下:
C E F D B H G A
*/
int main(void)
{
    //    char *VLR = "ABCDEFGH";
    //    char *LVR = "CBEDFAGH";
    //    char *LRV = "CEFDBHGA";

    //    BinTree<char> bt; //对象初始化不写'#'；
    //    int n = strlen(VLR);
    //    bt.createBinTree(VLR, LVR, n); //在这里创建二叉树不用'#'结束，因为是由先序和中序创建，不看结束标志'#';
    //    bt.createBinTree_1(LVR, LRV, n);
    //    bt.prevOrder();
    //    cout<<endl;

    // bt.createBinTree(VLR, LRV, n); 不能创建

    /*
        BinTree<char> bt('#');
        char *str = "ABC##DE##F##G#H##";
    //    char *str = "ABC##DE###G#H##";
        bt.createBinTree(str);
        BinTree<char> bt1(bt);
        bt1.levelOrder();
        cout<<endl;

    */

    /*

    //    st.createBinTree();
        BinTree<char> bt('#');
        BinTree<char> bt1('#');
        char *str = "ABC##DE##F##G#H##";
        bt.createBinTree(str);
        bt1.createBinTree(str);  //构建的是一颗空树,引用传递构建，原先字符串已经为空！

        if(bt.equal(bt1)){
            cout<<"相等"<<endl;
        }else{
            cout<<"不相等"<<endl;
        }
    */
    BinTree<char> bt('#');
    char *str = "ABC##DE##F##G#H##";
    bt.createBinTree(str);
    cout << bt.size() << endl;
    cout << bt.height() << endl;
    BinTreeNode<char> *p = bt.find('H');
    BinTreeNode<char> *t = bt.find('G');
    printf("%p\n", t);
    BinTreeNode<char> *q = bt.parent(p);
    printf("%p\n", q);

    bt.prevOrder();
    cout << endl;
    bt.inOrder();
    cout << endl;
    bt.endOrder();
    cout << endl;

    return 0;
}
/**
 * @Author: lwj
 * @Date: 2022-06-17 09:10:37
 * @Description:二叉树方法的实现
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/数据结构/BinTree/binTree.h
 **/
#pragma once
#include <iostream>
#include <stack> //非递归遍历引入栈
#include <queue> //层次遍历引入队列
using namespace std;

template <typename Type> //为的是声明友元类，调用BinTreeNode<Type>的私有数据
class BinTree;

template <typename Type> // BinTreeNode类
class BinTreeNode
{
    friend class BinTree<Type>;

public:
    BinTreeNode() : data(Type()), leftChild(NULL), rightChild(NULL) {}
    BinTreeNode(Type value, BinTreeNode<Type> *left = NULL, BinTreeNode<Type> *right = NULL)
        : data(value), leftChild(left), rightChild(right) {}
    ~BinTreeNode() {}

private:
    Type data;
    BinTreeNode *leftChild;
    BinTreeNode *rightChild;
};

///////////////////////////////////////////////////////////////////////////////
template <typename Type> // BinTree类
class BinTree
{
public:
    BinTree() : root(NULL) {}
    BinTree(Type ref) : root(NULL), refval(ref) {}
    BinTree(const BinTree &t)
    {
        root = copy(t.root); //调用拷贝方法
    }
    ~BinTree()
    {
        makeEmpty(); //析构函数这里将二叉树置空
        root = NULL;
    }
    ////////////////////////////以下为供外部使用的接口//////////////////////////////
public:                                                            //创建二叉树
    void createBinTree();                                          //键盘输入创建
    void createBinTree(const char *str);                           //主函数传字符串创建
    void createBinTree(const char *VLR, const char *LVR, int n);   //先序和中序创建
    void createBinTree_1(const char *LVR, const char *LRV, int n); //中序和后序创建
public:                                                            //递归遍历
    void prevOrder() const;                                        //前序遍历
    void inOrder() const;                                          //中序遍历
    void endOrder() const;                                         //后序遍历
public:                                                            //非递归遍历
    void prevOrder_1() const;
    void inOrder_1() const;
    void endOrder_1() const;
    void levelOrder() const;

public:                                                          //各种方法的声明
    int size() const;                                            //返回二叉树的结点个数
    int height() const;                                          //返回二叉树的高度
    BinTreeNode<Type> *root_1() const;                           //以下的三个方法比较简单，就不在进行调用保护方法了；
    BinTreeNode<Type> *leftChild(BinTreeNode<Type> *cur) const;  //返回该结点的左孩子指针
    BinTreeNode<Type> *rightChild(BinTreeNode<Type> *cur) const; //返回该结点的右孩子指针
    BinTreeNode<Type> *find(const Type &key) const;              //查找一个数返回指向它的指针
    BinTreeNode<Type> *parent(BinTreeNode<Type> *cur) const;     //返回指向该结点的父亲结点指针
    void makeEmpty();                                            //清空二叉树
    bool equal(const BinTree<Type> &t) const;                    //比较俩个二叉树是否想等
    BinTreeNode<Type> *copy(BinTreeNode<Type> *t) const;         //复制一个二叉树

    ////////////////////////////以下为供内部使用的接口//////////////////////////////
protected: // protected:供自己函数内部调用，写保护方法
    void prevOrder_1(BinTreeNode<Type> *t) const;
    void inOrder_1(BinTreeNode<Type> *t) const;
    void endOrder_1(BinTreeNode<Type> *t) const;
    void levelOrder(BinTreeNode<Type> *t) const;

protected:
    int size(BinTreeNode<Type> *t) const;
    int height(BinTreeNode<Type> *t) const;
    BinTreeNode<Type> *find(const Type &key, BinTreeNode<Type> *t) const;
    BinTreeNode<Type> *parent(BinTreeNode<Type> *cur, BinTreeNode<Type> *t) const;
    void makeEmpty(BinTreeNode<Type> *t);
    bool equal(BinTreeNode<Type> *t, BinTreeNode<Type> *t1) const;

protected:
    void prevOrder(BinTreeNode<Type> *t) const;
    void inOrder(BinTreeNode<Type> *t) const;
    void endOrder(BinTreeNode<Type> *t) const;

protected:
    void createBinTree(BinTreeNode<Type> *&t);
    BinTreeNode<Type> *createBinTree_1();
    void createBinTree(const char *&str, BinTreeNode<Type> *&t);
    BinTreeNode<Type> *createBinTree_1(const char *&str);
    void createBinTree(BinTreeNode<Type> *&t, const char *VLR, const char *LVR, int n);
    void createBinTree_1(BinTreeNode<Type> *&t, const char *LVR, const char *LRV, int n);
    //以上都只是在类内声明；
private:
    BinTreeNode<Type> *root;
    Type refval; //'#'
};

///////////////////////////////以下为函数实现////////////////////////////////////
template <typename Type> //类外实现公有方法的调用
void BinTree<Type>::createBinTree()
{ //创建二叉树
    // createBinTree(root);
    root = createBinTree_1();
}
template <typename Type>
void BinTree<Type>::prevOrder() const
{ //先序递归遍历
    cout << "先根序如下: " << endl;
    prevOrder(root);
}
template <typename Type>
void BinTree<Type>::inOrder() const
{ //中序递归遍历
    cout << "中根序如下: " << endl;
    inOrder(root);
}
template <typename Type>
void BinTree<Type>::endOrder() const
{ //后序递归遍历
    cout << "后根序如下: " << endl;
    endOrder(root);
}

template <typename Type>
void BinTree<Type>::createBinTree(const char *str)
{ //创建二叉树
    //    createBinTree(str, root);
    root = createBinTree_1(str);
}
template <typename Type>
int BinTree<Type>::size() const
{ //求结点个数
    return size(root);
}
template <typename Type>
int BinTree<Type>::height() const
{ //求树的高度
    return height(root);
}
template <typename Type>
BinTreeNode<Type> *BinTree<Type>::root_1() const
{ //求根节点
    return root;
}
template <typename Type>
BinTreeNode<Type> *BinTree<Type>::leftChild(BinTreeNode<Type> *cur) const
{ //求当前结点的左孩子
    return cur->leftChild;
}
template <typename Type>
BinTreeNode<Type> *BinTree<Type>::rightChild(BinTreeNode<Type> *cur) const
{ //求当前结点的右孩子
    return cur->rightChild;
}
template <typename Type>
BinTreeNode<Type> *BinTree<Type>::find(const Type &key) const
{ //查找当前结点
    return find(key, root);
}
template <typename Type>
BinTreeNode<Type> *BinTree<Type>::parent(BinTreeNode<Type> *cur) const
{ //查找当前结点的父结点
    return parent(cur, root);
}
template <typename Type>
void BinTree<Type>::makeEmpty()
{ //将二叉树置空
    makeEmpty(root);
}
template <typename Type>
bool BinTree<Type>::equal(const BinTree<Type> &t) const
{ //两个二叉树是否相同的比较
    return equal(t.root, root);
}
template <typename Type>
void BinTree<Type>::prevOrder_1() const
{ //非递归先序
    prevOrder_1(root);
}
template <typename Type>
void BinTree<Type>::inOrder_1() const
{ //非递归中序
    inOrder_1(root);
}
template <typename Type>
void BinTree<Type>::endOrder_1() const
{ //非递归后序
    endOrder(root);
}
template <typename Type>
void BinTree<Type>::levelOrder() const
{ //层次遍历
    levelOrder(root);
}
template <typename Type>
void BinTree<Type>::createBinTree(const char *VLR, const char *LVR, int n)
{ //创建二叉树
    createBinTree(root, VLR, LVR, n);
}
template <typename Type>
void BinTree<Type>::createBinTree_1(const char *LVR, const char *LRV, int n)
{ //创建二叉树
    createBinTree_1(root, LVR, LRV, n);
}

/////////////////////////以下的都是写保护的方法，供自己使用/////////////////////////////
template <typename Type> //
void BinTree<Type>::createBinTree_1(BinTreeNode<Type> *&t, const char *LVR, const char *LRV, int n)
{ //中序和后序创建二叉树
    if (n == 0)
    {
        t = NULL;
        return;
    }
    int k = 0;
    while (LVR[k] != LRV[n - 1])
    {
        k++;
    }
    t = new BinTreeNode<Type>(LVR[k]);

    createBinTree_1(t->rightChild, LVR + k + 1, LRV + k, n - k - 1);
    createBinTree_1(t->leftChild, LVR, LRV, k);
}
template <typename Type>
void BinTree<Type>::createBinTree(BinTreeNode<Type> *&t, const char *VLR, const char *LVR, int n)
{ //先序和中序创建二叉树
    if (n == 0)
    {
        t = NULL;
        return;
    }
    int k = 0;
    while (LVR[k] != VLR[0])
    {
        k++;
    }
    t = new BinTreeNode<Type>(LVR[k]);
    createBinTree(t->leftChild, VLR + 1, LVR, k);
    createBinTree(t->rightChild, VLR + k + 1, LVR + k + 1, n - k - 1);
}
template <typename Type>
void BinTree<Type>::levelOrder(BinTreeNode<Type> *t) const
{ //层次遍历
    queue<BinTreeNode<Type> *> qu;
    BinTreeNode<Type> *p;

    if (t != NULL)
    {
        qu.push(t);
        while (!qu.empty())
        {
            p = qu.front();
            qu.pop();
            cout << p->data << " ";
            if (p->leftChild)
            {
                qu.push(p->leftChild);
            }
            if (p->rightChild)
            {
                qu.push(p->rightChild);
            }
        }
    }
}
typedef enum
{
    L,
    R
} Tag;
template <typename Type>
class stkNode
{
public:
    stkNode(BinTreeNode<Type> *p = NULL) : ptr(p), tag(L) {}

public:
    BinTreeNode<Type> *ptr;
    Tag tag; // L R
};
template <typename Type>
void BinTree<Type>::endOrder_1(BinTreeNode<Type> *t) const
{ //非递归后序
    stkNode<Type> n;
    stack<stkNode<Type>> st;
    BinTreeNode<Type> *p = t;

    do
    {
        while (p != NULL)
        {
            n.ptr = p;
            n.tar = L;
            st.push(n);
            p = p->leftChild;
        }
        bool isRun = true;
        while (isRun && !st.empty())
        {
            n = st.top();
            st.pop();

            switch (n.tag)
            {
            case L:
                p = n.ptr;
                n.tag = R;
                st.push(n);
                p = p->rightChild;
                isRun = false;
                break;
            case R:
                cout << n.ptr->data << " ";
                break;
            }
        }
    } while (!st.empty()); //不用p1=NULL,因为当栈空时，最后一个节点刚好被访问完成。
}
template <typename Type>
void BinTree<Type>::inOrder_1(BinTreeNode<Type> *t) const
{ //非递归中序
    stack<BinTreeNode<Type> *> st;
    BinTreeNode<Type> *p = t;

    do
    {
        while (p != NULL)
        {
            st.push(p);
            p = p->leftChild;
        }
        if (!st.empty())
        {
            p = st.top();
            st.pop();
            cout << p->data << " ";
            p = p->rightChild;
        }                               //中序遍历时，当root出栈时，此时占空，
    } while (p != NULL || !st.empty()); //为根的时候右边还要入栈。
}

template <typename Type>
void BinTree<Type>::prevOrder_1(BinTreeNode<Type> *t) const
{ //非递归先序
    stack<BinTreeNode<Type> *> st;
    BinTreeNode<Type> *tmp;

    if (t != NULL)
    {
        st.push(t);
        while (!st.empty())
        {
            tmp = st.top();
            st.pop();
            cout << tmp->data << " ";
            if (tmp->rightChild)
            {
                st.push(tmp->rightChild);
            }
            if (tmp->leftChild)
            {
                st.push(tmp->leftChild);
            }
        }
    }
}
template <typename Type>
BinTreeNode<Type> *BinTree<Type>::copy(BinTreeNode<Type> *t) const
{ //拷贝函数
    BinTreeNode<Type> *tmp;

    if (t == NULL)
    {
        return NULL;
    }
    else
    {
        tmp = new BinTreeNode<Type>(t->data);
        tmp->leftChild = copy(t->leftChild);
        tmp->rightChild = copy(t->rightChild);
    }

    return tmp;
}
template <typename Type>
bool BinTree<Type>::equal(BinTreeNode<Type> *t, BinTreeNode<Type> *t1) const
{ //两个二叉树是否相同的比较
    if (t == NULL && t1 == NULL)
    { //取反判断与这个是一个道理
        return true;
    }
    if (t != NULL && t1 != NULL && t->data == t1->data && equal(t->leftChild, t1->leftChild) && equal(t->rightChild, t1->rightChild))
    {
        return true;
    }
    else
    {

        return false;
    }
}
template <typename Type>
void BinTree<Type>::makeEmpty(BinTreeNode<Type> *t)
{ //将二叉树置空
    if (t != NULL)
    {
        makeEmpty(t->leftChild);
        makeEmpty(t->rightChild);
        delete t;
    }
}
template <typename Type>
BinTreeNode<Type> *BinTree<Type>::parent(BinTreeNode<Type> *cur, BinTreeNode<Type> *t) const
{ //查找当前结点的父结点
    if (t == NULL || cur == NULL || cur == t)
    {
        return NULL;
    }
    if (t->leftChild == cur || t->rightChild == cur)
    {
        return t;
    } //思路：利用父的孩子节点和当前节点比较
    BinTreeNode<Type> *p = parent(cur, t->leftChild);
    if (p != NULL)
    {
        return p;
    }

    return parent(cur, t->rightChild);
}
template <typename Type>
BinTreeNode<Type> *BinTree<Type>::find(const Type &key, BinTreeNode<Type> *t) const
{ //查找当前结点
    if (t == NULL)
    {
        return NULL;
    }
    if (t->data == key)
    {
        return t;
    }

    BinTreeNode<Type> *p = find(key, t->leftChild);
    if (p != NULL)
    {
        return p;
    }

    return find(key, t->rightChild);
}
template <typename Type>
int BinTree<Type>::height(BinTreeNode<Type> *t) const
{ //求树的高度
    if (t == NULL)
    {
        return 0;
    }
    int leftHeight = height(t->leftChild);
    int rightHeight = height(t->rightChild);

    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}
template <typename Type>
int BinTree<Type>::size(BinTreeNode<Type> *t) const
{ //求结点个数
    if (t == NULL)
    {
        return 0;
    }

    return size(t->leftChild) + size(t->rightChild) + 1;
}
template <typename Type>
BinTreeNode<Type> *BinTree<Type>::createBinTree_1(const char *&str)
{ //创建二叉树
    BinTreeNode<Type> *t;

    if (refval == *str)
    {
        t = NULL;
    }
    else
    {
        t = new BinTreeNode<Type>(*str);
        t->leftChild = createBinTree_1(++str);
        t->rightChild = createBinTree_1(++str);
    }
    return t;
}

template <typename Type>
void BinTree<Type>::createBinTree(const char *&str, BinTreeNode<Type> *&t)
{ //创建二叉树
    if (*str == refval)
    {
        t = NULL;
    }
    else
    {
        t = new BinTreeNode<Type>(*str);
        createBinTree(++str, t->leftChild); //前加，后加不一样！！！在这里，就是传引用，保证每次字符串都是往后走的
        createBinTree(++str, t->rightChild);
    }
}
template <typename Type>
BinTreeNode<Type> *BinTree<Type>::createBinTree_1()
{ //创建二叉树
    Type createData;
    cin >> createData;
    BinTreeNode<Type> *t;

    if (refval == createData)
    {
        t = NULL;
    }
    else
    {
        t = new BinTreeNode<Type>(createData);
        t->leftChild = createBinTree_1();
        t->rightChild = createBinTree_1();
    }

    return t;
}
template <typename Type>
void BinTree<Type>::endOrder(BinTreeNode<Type> *t) const
{ //后序递归遍历
    if (t == NULL)
    {
        return;
    }
    else
    {
        endOrder(t->leftChild);
        endOrder(t->rightChild);
        cout << t->data << " ";
    }
}

template <typename Type>
void BinTree<Type>::inOrder(BinTreeNode<Type> *t) const
{ //中序递归遍历
    if (t == NULL)
    {
        return;
    }
    else
    {
        inOrder(t->leftChild);
        cout << t->data << " ";
        inOrder(t->rightChild);
    }
}

template <typename Type>
void BinTree<Type>::prevOrder(BinTreeNode<Type> *t) const
{ //先序递归遍历
    if (t == NULL)
    {
        return;
    }
    else
    {
        cout << t->data << " ";
        prevOrder(t->leftChild);
        prevOrder(t->rightChild);
    }
}
//根据先根序创建二叉树
template <typename Type>
void BinTree<Type>::createBinTree(BinTreeNode<Type> *&t)
{ //创建二叉树
    Type createData;
    cin >> createData;

    if (refval == createData)
    {
        t = NULL;
    }
    else
    {
        t = new BinTreeNode<Type>(createData);
        createBinTree(t->leftChild);
        createBinTree(t->rightChild);
    }
}

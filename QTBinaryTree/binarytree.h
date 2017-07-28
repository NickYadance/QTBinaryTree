#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <string>
#include <iostream>
#include <map>
#include <iterator>
#include <QObject>
#include <QMessageBox>

enum Tag
{
    THREAD , LINK
};

//树节点结构
struct Node
{
    int d;
    struct Node *left;
    struct Node *right;
    Tag         ltag;
    Tag         rtag;
    std::string     name;
};

typedef enum { no_move, mLeft, mRight } l_r;

//二叉树类
class BinaryTree : public QObject
{
    Q_OBJECT
    QString     str_for_show ;
public:
    BinaryTree();

    struct Node *search_insert_r(struct Node **, const int);
    struct Node *delete_tree_r(struct Node **);
    std::map<std::string,int>               results;
    QVector< std::pair<std::string , std::string> >   threadResults ;
    int         LeafNumber ;

    void        InOrderTraverse(Node * T);     //中序遍历
    void        PreOrderTraverse(Node *T);     //前序遍历
    void        PostOrderTraverse(Node * T);   //后序遍历
    void        _InOrderThreading(Node* cur, Node*& prev);              //中序线索化
    void        _PreOrderThreading(Node* cur, Node*& prev);             //前序线索化
    void        _PostOrderThreading(Node* cur, Node*& prev);            //后序线索化
    void        _InOrderThreadTraverse(Node *cur);       //前序线索树遍历
    void        _PreOrderThreadTraverse(Node *cur);      //中序线索树遍历
    void        GetLeafNumber(Node *T);        //统计叶子节点个数
    void        clearThread(Node * node);                  //清除线索
    bool        delete_node(struct Node **, const int);
    void        print_tree(Node *, std::string st);
    void        setStr_for_show(const QString &value);
    QString     getStr_for_show() const;
};

#endif // BINARYTREE_H

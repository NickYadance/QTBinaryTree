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

//���ڵ�ṹ
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

//��������
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

    void        InOrderTraverse(Node * T);     //�������
    void        PreOrderTraverse(Node *T);     //ǰ�����
    void        PostOrderTraverse(Node * T);   //�������
    void        _InOrderThreading(Node* cur, Node*& prev);              //����������
    void        _PreOrderThreading(Node* cur, Node*& prev);             //ǰ��������
    void        _PostOrderThreading(Node* cur, Node*& prev);            //����������
    void        _InOrderThreadTraverse(Node *cur);       //ǰ������������
    void        _PreOrderThreadTraverse(Node *cur);      //��������������
    void        GetLeafNumber(Node *T);        //ͳ��Ҷ�ӽڵ����
    void        clearThread(Node * node);                  //�������
    bool        delete_node(struct Node **, const int);
    void        print_tree(Node *, std::string st);
    void        setStr_for_show(const QString &value);
    QString     getStr_for_show() const;
};

#endif // BINARYTREE_H

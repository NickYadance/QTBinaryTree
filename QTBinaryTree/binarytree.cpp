#include "binarytree.h"

void BinaryTree::setStr_for_show(const QString &value)
{
    str_for_show = value;
}

QString BinaryTree::getStr_for_show() const
{
    return str_for_show;
}

void BinaryTree::PreOrderTraverse(Node * T)
{
    if (T)
    {
        str_for_show.append(QString::number(T->d)).append(" ");
        PreOrderTraverse(T->left);
        PreOrderTraverse(T->right);
    }
}

void BinaryTree::InOrderTraverse(Node * T)
{
    if (T)
    {
        InOrderTraverse(T->left);
        str_for_show.append(QString::number(T->d)).append(" ");
        InOrderTraverse(T->right);
    }
}

void BinaryTree::PostOrderTraverse(Node * T)
{
    if (T)
    {
        PostOrderTraverse(T->left);
        PostOrderTraverse(T->right);
        str_for_show.append(QString::number(T->d)).append(" ");
    }
}

void BinaryTree::_InOrderThreading(Node *cur, Node *&prev)
{
    if(cur==NULL)
    {
        return;
    }
    //递归遍历左子树
    _InOrderThreading(cur->left ,prev);

    if(cur->left ==NULL)
    {
        cur->ltag =THREAD;
        cur->left =prev;
        if (cur->left)
            threadResults.append(std::make_pair(cur->name, cur->left->name));
    }
    if(prev&&prev->right ==NULL)
    {
        prev->rtag =THREAD ;
        prev->right =cur;
        if (prev->right)
            threadResults.append(std::make_pair(prev->name, prev->right->name));
    }
    prev=cur;

    //递归遍历右子树
    _InOrderThreading(cur->right ,prev);
}

void BinaryTree::_PreOrderThreading(Node *cur, Node *&prev)
{
    if (cur == nullptr)
    {
        return ;
    }
    if(cur->left ==NULL)
    {
        cur->ltag =THREAD;
        cur->left =prev;
        if (cur->left)
            threadResults.append(std::make_pair(cur->name, cur->left->name));
    }
    if(prev&&prev->right ==NULL)
    {
        prev->rtag =THREAD ;
        prev->right =cur;
        if (prev->right)
            threadResults.append(std::make_pair(prev->name, prev->right->name));
    }
    prev = cur ;

    if (cur->ltag == LINK)
    {
        _PreOrderThreading(cur->left, prev);
    }
    if (cur->rtag == LINK)
    {
        _PreOrderThreading(cur->right, prev);
    }
}

void BinaryTree::_PostOrderThreading(Node *cur, Node *&prev)
{
    if (cur == NULL)
        return;

    if(cur->left ==NULL)
    {
        cur->ltag =THREAD;
        cur->left =prev;
        if (cur->left)
            threadResults.append(std::make_pair(cur->name, cur->left->name));
    }

    if (cur->ltag==LINK)
        _PostOrderThreading(cur->left,prev);

    if (cur->rtag == LINK)
    {
        _PostOrderThreading(cur->right, prev);
    }
    if(prev&&prev->right ==NULL)
    {
        prev->rtag =THREAD ;
        prev->right =cur;
        if (prev->right)
            threadResults.append(std::make_pair(prev->name, prev->right->name));
    }
    prev = cur;
}

void BinaryTree::_InOrderThreadTraverse(Node * cur)
{
    while(cur)
    {
        while (cur && cur->ltag == LINK)
        {
            cur = cur->left ;
        }
        str_for_show.append("->").append(QString::number(cur->d));
        while(cur && cur->ltag == THREAD && cur->right)
        {
            cur = cur->right ;
            str_for_show.append("T->").append(QString::number(cur->d));
        }
        cur = cur->right ;
    }
}

void BinaryTree::_PreOrderThreadTraverse(Node * cur)
{
    while(cur && cur->right)
    {
        while (cur->ltag == LINK)
        {
            str_for_show.append(QString::number(cur->d)).append("->");
            cur = cur->left ;
        }
        while(cur && cur->rtag == THREAD )
        {
            str_for_show.append(QString::number(cur->d)).append("T->");
            cur = cur->right ;
        }
    }
    if (cur)    str_for_show.append(QString::number(cur->d));
}

void BinaryTree::GetLeafNumber(Node *T)
{
    if (T)
    {
        if (T->left==nullptr && T->right==nullptr)
        {
            ++LeafNumber ;
            return ;
        }
        GetLeafNumber(T->left);
        GetLeafNumber(T->right);
    }
}

void BinaryTree::clearThread(Node * node)
{
    if (node)
    {
        if (node->rtag == THREAD)
        {
            node->rtag = LINK;
            node->right = nullptr;
        }
        if (node->ltag == THREAD)
        {
            node->ltag = LINK;
            node->left = nullptr;
        }
        clearThread(node->left);
        clearThread(node->right);
    }
}

BinaryTree::BinaryTree()
{

}

/*
 * 销毁树
 *
 */
Node * BinaryTree::delete_tree_r(struct Node ** tree)
{
    if (*tree != NULL)
    {
        struct Node *tmp = *tree;
        tmp->left = delete_tree_r(&((*tree)->left));
        tmp->right = delete_tree_r(&((*tree)->right));
        free(tmp); *tree = NULL;
        return (tmp);
    }
    return nullptr;
}


/*
 *
 * 遍历树，插入节点
 *
 * */
Node * BinaryTree::search_insert_r(struct Node ** root, const int d)
{
    struct Node * pnew = NULL;
    if (!(*root))
    {
        //        pnew = (struct Node *)malloc(sizeof(struct Node));
        pnew = new Node ;
        pnew->d = d;
        pnew->left = pnew->right = NULL;
        pnew->ltag = pnew->rtag = LINK ;
        *root = pnew;
    }
    else
    {
        if ((*root)->d == d) {
            QMessageBox::information(0, "Error", "Target node already exists!");
            return ((*root));
        }
        if (d < (*root)->d) search_insert_r(&((*root)->left), d);
        if (d >(*root)->d) search_insert_r(&((*root)->right), d);
    }
    return (pnew);
}

/*
 * 绘制树
 * 遍历树节点，将<节点的名字-值>存储在map中
 *
 */
void BinaryTree::print_tree(struct Node *root, std::string st)
{
    std::string str = st;
    if (root)
    {
        results[str] = root->d;
        root->name = str ;
        str.append("L");
        print_tree(root->left, str);
        str.erase(str.end() - 1);
        str.append("R");
        print_tree(root->right, str);
    }
}

/*
 * 删除节点
 * way枚举变量: 记录要删除的节点属于左子树还是右子树
 *
 * */
bool BinaryTree::delete_node(struct Node ** root, const int d)
{
    int found = 0;
    struct Node * pv = *root, *prev = NULL;
    l_r way = no_move;

    while (pv && !found) // 遍历节点
    {
        if (d == pv->d)
        {
            found = 1;
        }
        else if (d < pv->d) // 遍历左子树
        {
            prev = pv;
            pv = pv->left;
            way = mLeft;
        }
        else // 遍历右子树
        {
            prev = pv;
            pv = pv->right;
            way = mRight;
        }
    }

    if (found) // 判断节点属性并删除
    {
        if (pv->left == NULL && pv->right == NULL) //叶子节点
        {
            free(pv); pv = NULL;
            if (way == mLeft)     prev->left = NULL;
            else if (way == mRight)    prev->right = NULL;
            else    *root = NULL;
        }
        else if (pv->right == NULL) //单左子树根节点
        {
            if (way == mLeft)    prev->left = pv->left;
            else if (way == mRight)   prev->right = pv->left;
            else    *root = pv->left;
            free(pv);
        }
        else if (pv->left == NULL) //单右子树根节点
        {
            if (way == mLeft)  prev->left = pv->right;
            else if (way == mRight) prev->right = pv->right;
            else    *root = pv->right;
            free(pv);
        }
        else  //树根节点
        {
            struct Node * ptmp = NULL;
            prev = ptmp = pv->right;
            while (ptmp->left)
            {
                prev = ptmp;
                ptmp = ptmp->left;
            }
            pv->d = ptmp->d;

            prev->left = ptmp->right;

            if ((ptmp == prev))
            {
                if (!prev->right)
                {
                    pv->right = NULL;
                }
                else
                {
                    pv->right = prev->right;
                }
            }

            free(ptmp);
        }
        return (true);
    }
    return (false);
}

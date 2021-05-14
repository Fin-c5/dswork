#pragma once

///二叉树类型定义

///二叉链表结点结构
template <typename E>
struct BiTNode
{
     E data;
     BiTNode *lchild, *rchild;
};

///二叉树
template <typename E>
using BiTree = BiTNode<E> *;

///二叉树算法

///先序遍历二叉树 Preorder(T,visit)
template <typename E, typename F>
void Preorder(BiTree<E> T, F visit)
{
    if (T) {
        visit(T->data);
        Preorder(T->lchild, visit);
        Preorder(T->rchild, visit);
    }
}

///中序遍历二叉树 Inorder(T,visit)
template <typename E, typename F>
void Inorder(BiTree<E> T, F visit)
{
    if (T) {
        Inorder(T->lchild, visit);
        visit(T->data);
        Preorder(T->rchild, visit);
    }
}

///后序遍历二叉树 Postorder(T,visit)
template <typename E, typename F>
void Postorder(BiTree<E> T, F visit)
{
    if (T) {
        Preorder(T->lchild, visit);
        Preorder(T->rchild, visit);
        visit(T->data);
    }
}
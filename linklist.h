#pragma once
/// 单链表类型定义
template<typename E>
struct LNode
{
    E data;
    LNode *next;
};
//typedef LNode *LinkList; // C
template <typename E>
using LinkList = LNode<E>*;
//单链表基本操作
///初始化空表 InitList（&L）
template <typename E>
void InitList（LinkList<E> &L)
{
    L=new LNode<E>:
    L->next=nullptr;

    ///链表插入
    template <typename E>
    void ListInsert(LinkList<E> &L, int i,E e)
    {
        //查找第i-1的节点p
        //Linklist<E> p-l;
        auto p=L;
        int j=0;
        while(p && j< i-1){
            p=p->next;
            j++;

        }
        //若找到，则在p之后插入额e，抛出异常
        if(p && j==i-1){
            auto s =new LNode<E>;
            s->next =p->next;
            p->next=s;
        }else{
            throw "Invalid i"
        }
    }///链表删除
    template <typename E>
    void ListInsert(LinkList<E> &L, int i,E e)
    {
        //查找第i-1的节点p
        auto p=L;
        int j=0;
        while(p && j< i-1){
            p=p->next;
            j++;

        }
        //若找到第i个节点，则删除 ，抛出异常
        if(p && j==i-1){
            auto p=q->next;
            p->next =q->next;
            //取出数据元素，删除之
            p->next=e;
            delete q;
        }else{
            throw "Invalid i"


}


#pragma once

///单链表类型定义
template <typename E>
struct LNode 
{
    E data;
    LNode *next;
};

// typedef LNode *Linklist;// C
  template <typename E>
  using Linklist = LNode<E> *;

  ///单链表基本操作

/// 初始化空表 Initlist(&L)
 template <typename E>
 void Initlist(Linklist<E> &L)
 {
     L = new LNode<E>;
     L->next = nullptr;
 }

 template <typename E>
 void ListInsert(LinkList<E> &L, int i,E e )
 {
     //查找第i-1个结点p
     // Linklist<E> p = L;
     auto p = L; //c++11
     int j=0;
     while(p && j< i-1){
         p = p->next; ++j;
     }

     if (p&&j==i-1){
         //新建结点s
         auto s = new LNdoe<E>;
         s->data =e;
         //在p之后插入s
         s->next =p->next;
         p->next = s;
     }else{ 
          throw "Invalid i";
     }
 }

 template<typename E>
 void ListDelete(Linklist<E> &L, int i,E &e) 
 {
     auto p =L;
     int j=0;
     while (p&& j<i-1){
         p=p->next; ++j;
     }

     if (p&&j==i-1 && p->next){
         //从链表中删除结点
         auto q=p->next;
         p->next =q->next;
         //取出数据元素，删除之
         e=q->data;
         delete q;
     }else {
         throw "Invalid i";
     }
 }
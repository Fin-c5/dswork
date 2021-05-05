#pragma once

/// 顺序栈类型定义
template<typename E, int M>
struct SqStack
{
    E elem[M];
    int top;
}
/// 基本操作

///初始化 InitStack（&S）
template<typename E, int M>
void InitStack(SqStack<E,M> &S)
{
    S.top = 0;
}

///判断是否为空 StackEmpty(S)
template<typename E, int M>
bool StackEmpty(const SqStack<E,M> &S)
{
    return S.top ==0;
}
///入栈 Push（&S，e）
template<typename E, int M>
void Push(SqStack<E,M> &S,E e)
{
    //如果栈满，则抛出异常
    if (S.top == M) throw "Stack full"
    //入栈
    S.elem[S.top++];
}
///出栈 Pop（&S &e）
template<typename E, int M>
void Pop(SqStack<E,M> &S,E &e)
{ //若栈空，则抛出异常
if (S.top ==0) throw "Stack empty"
    //出栈
e = S.elem[--s.top];
}
///取栈顶元素
template<typename E, int M>
void Gettop(const SqStack<E,M> &S,E &e )
{   //若栈空，则抛出异常
  if (S.top ==0) throw "Stack empty"  
  //取栈顶元素
  e = S.elem[S.top - 1];
}


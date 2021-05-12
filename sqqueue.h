#pragma once

/// 循环队列类型定义

template <typename E, int M>
struct SqQueue
{
    E elem[M];
    int front, rear;
};

/// 循环队列基本操作

/// 初始化循环队列为空 InitQueue(&Q)
template <typename E, int M>
void InitQueue(SqQueue<E,M> &Q)
{
    Q.front = Q.rear = 0;
}

///判断队列是否为空 QueueEmpty(Q)
template <typename E, int M>
bool QueueEmpty(const SqQueue<E,M> &Q)
{
    return Q.front == Q.rear;
}

/// 入队列 EnQueue(&Q,e)
template <typename E, int M>
void EnQueue(SqQueue<E,M> &Q, E e)
{
    //若队列满，则抛出异常
    if ((Q.rear + 1) % M == Q.front) throw "Queue full";
    //否则 e 入队列
    Q.elem[Q.rear] = e;
    Q.rear = (Q.rear + 1) % M;
}

///出队列 DeQueue(&Q,&e)
template <typename E, int M>
void DeQueue(SqQueue<E,M> &Q, E &e)
{
    //若队列空，则抛出异常
    if (Q.front == Q.rear) throw "Queue empty";
    //否则，出对列
    e = Q.elem[Q.front];
    Q.front = (Q.front + 1) % M;
}

///出队列（不返回对头元素）DeQueue(&Q)
template <typename E, int M>
void DeQueue(SqQueue<E,M> &Q)
{
    //若队列空，则抛出异常
    if (Q.front == Q.rear) throw "Queue empty";
    //否则，出对列
    Q.front = (Q.front + 1) % M;
}

/// 取队头元素 GetHead(Q,&e)
template <typename E, int M>
void GetHead(const SqQueue<E,M> &Q, E &e)
{
    //若队列为空，则抛出异常
    if (Q.front == Q.rear) throw "Queue empty";
    //否则，返回队头元素
    e = Q.elem[Q.front];
}


/// 取队头元素 GetHead(Q)
template <typename E, int M>
void GetHead(const SqQueue<E,M> &Q)
{
    //若队列为空，则抛出异常
    if (Q.front == Q.rear) throw "Queue empty";
    //否则，返回队头元素
    return Q.elem[Q.front];
}
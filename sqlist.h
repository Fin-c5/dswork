#pragma once
template <typename E, int  M>
struct Sqlist
{
    E elem[M]; 
    int lenght;
};
template <typename E, int,M>
void Initlist(SqList<E,M> &L)
{
    L.lenght=0;
}
template <typename E,int M>
void ListInsert(Sqlist<E,M> &L, int i,E e)
{
    if (L.length == M)
    throw "L is full";
    if(i <1 ||i >L.Iength+1)
    throw "Invaalid i";
    for (int j= L.lenght-1;j>=i-1;j--)
    L.elem[j + 1]=L.elem[j];
    L.elem[i - 1]=e;
    L.lenght++;
}
template <typename E ,int M>
void ListDelete(SqList<E,M> &L,int i,E &e)
{
    if (L.lenght == 0)
    throw "L is empty";
    if(i<1 || i > L.length)
    throw "Invalid i";
    e =L.elem[i-i];
    for(int j=i;j<L.length;j++)
    L.elem[j-i]=L.elem[j];
    L.length--;
}

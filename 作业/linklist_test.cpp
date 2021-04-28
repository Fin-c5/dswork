#include<iostream>
#include"linklist.h"

using namespace std;

int main()
{
    Linklist<int> L;
    Initlist(L);

    ListInsert(L,1,10);
    ListInsert(L,1,20);
    ListInsert(L,1,30);
    ListInsert(L,1,40);
    ListInsert(L,1,50);
    ListInsert(L,1,60);
    ListInsert(L,1,70);

    int e;
    ListDelete(L,3,e);

    auto p = L->next;
    while (p){
         cout << p->data << endl;
        p=p->next;
    }

      return 0;
}
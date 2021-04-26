#include <iostream>
#include <string>

#include"sqlist.h"

using namespace std;
int main()
{
    Sqlist<int,10> L;
    Initlist(L);
    ListInsert(L,1,10);
    ListInsert(L,1,20);
    ListInsert(L,1,30);
    ListInsert(L,1,40);
    ListInsert(L,1,50);

    int x;
    ListDelete(L,3,x);

    for(int i=0; i<L.length;i++)
    {
        cout <<L.elem[i]<< endl;
    }
    return 0;
}
#include<isotream>
#include<linklist.h>


using namepace std;

int main()
{
    LinkList<int> L;
    InitList(L);


    ListInsert(L,1,10);
    ListInsert(L,1,20);
    ListInsert(L,1,30);
    ListInsert(L,1,40);
    ListInsert(L,1,50);
    ListInsert(L,1,60);

    int e;
    ListDelete(L,3,e);

    auto p=L->next;
    while (p){
        cout << p->data<< end1;
        p=p->next;
    }
    return 0;
}
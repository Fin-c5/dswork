#include <iostream>
#include "sqqueue.h"

using namespace std;

int main()
{
    SqQueue<int, 10> Q;

    InitQueue (Q);

    EnQueue(Q, 10);
    EnQueue(Q, 20);
    EnQueue(Q, 30);
    EnQueue(Q, 40);
    EnQueue(Q, 50);
    
    while (!QueueEmpty(Q))
    {
        int e;
        DeQueue(Q, e);
        cout << e << endl;
    }
    

    return 0;
}
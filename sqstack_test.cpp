#include<iosteam>
#include"sqstack.h"


int main()
{
    SqStack<int,8> S;
    initStack(S);
    push(S,10);
    push(S,20);
    push(S,30);
    push(S,40);

    while (! StackEmpty(S))
    {
        int e;
        Pop(S,e);
        std::cout << e << std::endl;
        
      
    }
    return 0;
          
}
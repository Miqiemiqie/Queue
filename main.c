#include "Queue.h"



void test1()
{
    Queue p;
    QueueInit(&p);
    QueuePUsh(&p,1);
    QueuePUsh(&p,2);
    QueuePUsh(&p,3);
    QueuePUsh(&p,4);
    QueuePop(&p);
    QueuePop(&p);
    QueuePUsh(&p,5);
    QueuePUsh(&p,6);
    QueuePUsh(&p,10);
    QueuePUsh(&p,20);
    printf("%d\n", QUeueBegin(&p));
    printf("%d\n", QUeueLast(&p));
    printf("%d\n", QueueSize(&p));

    QNode* cur = p.head;
    while (cur)
    {
        QNode* next = cur->next;
        printf("%d ", cur->data);
        QueuePop(&p);
        cur=next;
    }
    QueueDestroy(&p);
}

int main() {
    test1();
    return 0;
}

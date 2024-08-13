#ifndef EMBEDDED_SYS_QUEUE_H
#define EMBEDDED_SYS_QUEUE_H

typedef struct q{
    int front,end;
    int arr[10];
}Queue;
void queueInit   (Queue* qp);
void enqueue     (Queue* qp,int data);
void dequeue     (Queue* qp,int*returned_data);
void displayQueue(Queue*qp);
#endif

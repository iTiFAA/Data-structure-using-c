#include "queue.h"
#include <stdio.h>

void queueInit(Queue* qp){
    //create new queue
    qp->front = -1;
    qp->end = -1;
}
void enqueue(Queue* qp,int data){
    //making sure queue has space for an entry
    if(qp->end <= 9){
        //checking if the queue is empty or not
        if(qp->front == -1){
            //we update both front and end
            ++qp->front;
            ++qp->end;
            qp->arr[qp->end] = data;
        }
        else{
            //we update end only
            ++qp->end;
            qp->arr[qp->end] = data;
        }
    }
    else{
        printf("queue is full\n");
    }
}
void dequeue(Queue* qp,int*returned_data){
    //making sure the queue is not empty
    if(qp->front <= qp->end){
        //we return data to the user and update front
        *returned_data = qp->arr[qp->front];
        ++qp->front;
    }
    else{
        printf("the queue is empty\n");
    }
}
void displayQueue(Queue*qp){
    //making sure the queue is not empty
    if(qp->front > qp->end || qp->front == -1){
        printf("the queue is empty\n");
    }
    else{
        //iterating through the whole queue and print its values
        for(int i = qp->front;i<=qp->end;++i){
            printf("%d ",qp->arr[i]);
        }
        printf("\n");
    }
}
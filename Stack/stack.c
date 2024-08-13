#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

void stackInit(stack* sp){
    //creating a new stack
    sp->topOfStackIndex = -1;
}
void stackPush(stack*sp,int data){
    //making sure the stack has space for an entry
    if(sp->topOfStackIndex <= 9){
        //we update the stack pointer
        sp->topOfStackIndex++;
        sp->arr[sp->topOfStackIndex] = data;
    }
    else{
        printf("stack is full\n");
    }
}
void displayStack(stack* sp){
    //making sure the stack is not empty
    if(sp->topOfStackIndex != -1){
        //iterating through the whole stack and printing its values
        for(int i = 0;i<=sp->topOfStackIndex;++i){
            printf("%d ",sp->arr[i]);
        }
        printf("\n");
    }
    else
        printf("stack is empty!\n");
}

void stackPop(stack* sp,int* returned_data){
    //making sure the stack is not empty
    if(sp->topOfStackIndex != -1){
        //we return the data to user and update the stack pointer
        *returned_data = sp->arr[sp->topOfStackIndex];
        --sp->topOfStackIndex;
    }
    else
        printf("stack is empty!\n");
}



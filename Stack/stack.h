#ifndef EMBEDDED_SYS_STACK_H
#define EMBEDDED_SYS_STACK_H
typedef struct s{
    int topOfStackIndex;
    int arr[10];
}stack;

void stackInit   (stack* sp);
void stackPush   (stack*sp,int data);
void displayStack(stack* sp);
void stackPop    (stack* sp,int* returned_data);
#endif

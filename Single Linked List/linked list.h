#ifndef EMBEDDED_SYS_LINKED_LIST_H
#define EMBEDDED_SYS_LINKED_LIST_H

typedef struct n{
   int info;
   struct n* link;
} Node;

void insertNodeAtBeginning(int data);
void insertNodeAtEnd      (int data);
void createList           (int num_of_nodes);
void displayList          (void);
void deleteNode           (int data);
#endif

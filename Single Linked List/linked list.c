#include "linked list.h"
#include <stdio.h>
#include <stdlib.h>

Node* start = NULL;

void insertNodeAtBeginning(int data){
    //create new node
    Node* temp = malloc(sizeof(Node));
    temp -> info = data;
    //link node with the list
    temp -> link = start;
    start = temp;
}

void insertNodeAtEnd(int data){
    //create new node
    Node* temp = malloc(sizeof(Node));
    temp -> info = data;
    //find the last node
    Node* last = start;
    while(last->link != NULL){
        last = last->link;
    }
    //link node to the list
    last -> link = temp;
    temp -> link = NULL;
}


void createList(int num_of_nodes){
    //get the first value from user
    int data = 0;
    printf("enter a value to be inserted:");
    scanf("%d",&data);
    //create the first Node
    insertNodeAtBeginning(data);
    //num of nodes-1 because we already created the first one
    for(int i = 0; i<(num_of_nodes-1);++i){
        printf("enter the next value:");
        scanf("%d",&data);
        insertNodeAtEnd(data);
    }
}

void displayList(void){
    Node* ptr = start;
    //we keep looping until the ptr holds NULL and not the Node that holds NULL
    while(ptr != NULL){
        printf("%d ",ptr->info);
        ptr = ptr -> link;
    }
    printf("\n");
}
void deleteNode(int data){
    //if the wanted node is the first one
    Node* temp = NULL;
    if(start->info == data){
        //temp points at the first node and start at the second then it frees temp
        temp = start;
        start = start->link;
        free(temp);
    }
    else{
        //looping through the list using ptr
        Node* ptr = start;
        while(ptr->link != NULL){
            //if the next node holds the desired value
            if(ptr->link->info == data){
                //temp holds the wanted node and breaks the loop
                temp = ptr->link;
                break;
            }
            //if we didn't find the wanted value we keep looping
            ptr = ptr->link;
        }
        //if the loop terminated naturally, so we didn't find the desired node
        if(ptr->link == NULL){
            printf("value doesn't exist");
        }
        //else we broke the loop and we found the wanted Node
        else{
            //the node before the wanted one holds the one after
            ptr->link = temp->link;
            //we free the wanted Node
            free(temp);
        }
    }
}




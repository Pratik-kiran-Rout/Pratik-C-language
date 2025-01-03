#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
    // struct pointer 
}Node;

// Traversing 
void Display(Node *ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    return ;
}

int main(){
    Node *head,*sec,*third;
    head = (Node*)malloc(sizeof(Node*));
    sec = (Node*)malloc(sizeof(Node*));
    third = (Node*)malloc(sizeof(Node*));
    head->data=10;
    head->next=sec;

    sec->data=20;
    sec->next=third;

    third->data=30;
    third->next=NULL;
    Display(head);
    return 0;
}
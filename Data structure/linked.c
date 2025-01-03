#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int  data;
    struct Node *next;
}Node ;

void printlink(Node *ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    return;
}
int main() {
    Node *head,*second,*third;
    head = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*)malloc(sizeof(Node));
    head->data = 23;
    head->next = second;
    second->data = 24;
    second->next = third;
    third->data = 25;
    third->next = NULL;
    printlink(head);
    return 0;
}
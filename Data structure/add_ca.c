#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void print(Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void addFirst(Node **head, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void Sum(Node **head1, Node **head2)
{
    int carry = 0;
    Node *ptr1 = *head1;
    Node *ptr2 = *head2;
    Node *head3 = NULL;

    while (carry != 0 || ptr1 != NULL || ptr2 != NULL)
    {
        int sum = carry;

        if (ptr1 != NULL)
        {
            sum += ptr1->data;
            ptr1 = ptr1->next;
        }
        if (ptr2 != NULL)
        {
            sum += ptr2->data;
            ptr2 = ptr2->next;
        }

        carry = sum / 10;
        int data = sum % 10;

        addFirst(&head3, data);
    }

    print(head3);
}

int main()
{
    Node *head1= NULL;
    Node *head2= NULL;
    
    addFirst(&head1, 9);
    addFirst(&head1, 9);
    addFirst(&head1, 9);

    addFirst(&head2, 4);
    addFirst(&head2, 4);
    addFirst(&head2, 4);
    addFirst(&head2, 4);

    Sum(&head1,&head2);
    return 0;
}
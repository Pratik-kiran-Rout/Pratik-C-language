#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct linklist
{
    Node *head;
} linklist;

void print(Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    return;
}

void addFirst(linklist *p, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = p->head;
    p->head = newNode;
    return;
}

void addLast(linklist *p, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    Node *iter = p->head;
    newNode->data = data;
    newNode->next = NULL;
    while (iter->next != NULL)
    {
        iter = iter->next;
    }
    iter->next = newNode;
    return;
}

void add_at_pos(linklist *p, int data, int pos)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    Node *iter = p->head;
    newNode->next = NULL;
    if (p->head == NULL)
    {
        printf("Empty.\n");
        return;
    }
    for (int i = 1; i < pos - 1; i++)
    {
        iter = iter->next;
    }
    newNode->next = iter->next;
    iter->next = newNode;
}

void add_at_val(linklist *p, int data, int newData)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = newData;
    Node *iter = p->head;
    newNode->next = NULL;
    if (p->head == NULL)
    {
        printf("Empty.\n");
        return;
    }
    while (iter != NULL)
    {
        if (iter->data == data)
        {
            newNode->next = iter->next;
            iter->next = newNode;
            return;
        }
        iter = iter->next;
    }
    printf("%d is not present.\n", data);
    return;
}

void removeFirst(linklist *p)
{
    if (p->head == NULL)
    {
        printf("Empty.\n");
        return;
    }
    p->head = p->head->next;
}

void removeLast(linklist *p)
{
    if (p->head == NULL)
    {
        printf("Empty.\n");
        return;
    }

    if (p->head->next == NULL)
    {
        p->head = NULL;
        return;
    }

    Node *prevNode = p->head;
    Node *iter = p->head->next;

    while (iter->next != NULL)
    {
        prevNode = iter;
        iter = iter->next;
    }
    prevNode->next = NULL;
}

void reverse(linklist *p)
{
    Node *prev = NULL;
    Node *current = p->head;
    Node *next = NULL;
    if (p->head == NULL)
    {
        printf("Empty.\n");
        return;
    }
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    p->head = prev;
}

void search(linklist *p, int search)
{
    if (p->head == NULL)
    {
        printf("Empty.\n");
        return;
    }
    Node *iter = p->head;
    int count = 0;
    while (iter != NULL)
    {
        count++;
        if (iter->data == search)
        {
            printf("Present at position %d\n", count);
            return;
        }
        iter = iter->next;
    }
}

void sort(linklist *p)
{
    if (p->head == NULL || p->head->next == NULL)
        return;

    bool swapped;
    Node *iter;
    do
    {
        swapped = false;
        iter = p->head;

        while (iter->next != NULL)
        {
            if (iter->data > iter->next->data)
            {
                int temp = iter->data;
                iter->data = iter->next->data;
                iter->next->data = temp;
                swapped = true;
            }
            iter = iter->next;
        }
    } while (swapped);
}
void sum(linklist *p1,linklist *p2)
{
    int carry = 0;
    
    Node *ptr1 = p1;
    Node *ptr2 = p2;
    linklist l3;
    l3.head=NULL;
    while (carry != 0 || ptr1 != NULL || ptr2 != NULL)
    {
        int sum = 0;
        sum += carry;

        if (ptr1 != NULL)
        {
            sum += ptr1->data;
            ptr1=ptr1->next;
        }
        if (ptr2 != NULL)
        {
            sum += ptr2->data;
            ptr2=ptr2->next;
        }
        carry = sum / 10;
        int data = sum % 10;

        addFirst(&l3,data);
    }
}
int main()
{
    linklist l,l2;
    l.head = NULL;
    l2.head = NULL;

    int opr, pos, value, newVal;
    int check = 0;

    printf("\nEnter 1 for add at first operation.");
    printf("\nEnter 2 for add at last operation.");
    printf("\nEnter 3 for add at any position operation.");
    printf("\nEnter 4 for add after a value operation.");
    printf("\nEnter 5 for remove at first operation.");
    printf("\nEnter 6 for remove at last operation.");
    printf("\nEnter 7 for reverse operation.");
    printf("\nEnter 8 for search operation.");
    printf("\nEnter 9 for sorting operation.");

    while (check != -1)
    {
        printf("\nEnter the operation: ");
        scanf("%d", &opr);
        switch (opr)
        {
        case 1:
            printf("Enter value to add at first: ");
            scanf("%d", &value);
            addFirst(&l, value);
            print(l.head);
            break;
        case 2:
            printf("Enter value to add at last: ");
            scanf("%d", &value);
            addLast(&l, value);
            print(l.head);
            break;
        case 3:
            printf("Enter position: ");
            scanf("%d", &pos);
            printf("Enter value: ");
            scanf("%d", &value);
            add_at_pos(&l, value, pos);
            print(l.head);
            break;
        case 4:
            printf("Enter the data value you want to add after: ");
            scanf("%d", &value);
            printf("Enter the new data value: ");
            scanf("%d", &newVal);
            add_at_val(&l, value, newVal);
            print(l.head);
            break;
        case 5:
            removeFirst(&l);
            printf("Deleted from first\n");
            print(l.head);
            break;
        case 6:
            removeLast(&l);
            printf("Deleted from last\n");
            print(l.head);
            break;
        case 7:
            reverse(&l);
            printf("Reversed\n");
            print(l.head);
            break;
        case 8:
            printf("Enter the search item: ");
            scanf("%d", &value);
            search(&l, value);
            break;
        case 9:
            sort(&l);
            printf("Sorted\n");
            print(l.head);
            break;
        default:
            printf("\nInvalid\n");
            break;
        }
        printf("\nEnter -1 to exit or any number to continue: ");
        scanf("%d", &check);
    }
    return 0;
}
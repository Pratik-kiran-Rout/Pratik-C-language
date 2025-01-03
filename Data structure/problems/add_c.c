#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct linklist
{
    Node *head;
} ll;

void print(Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    return;
}

void addFirst(ll *p, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = p->head;
    p->head = newNode;
    return;
}

void Sum(ll *p1, ll *p2)
{

    int carry = 0;

    Node *ptr1 = p1->head;
    Node *ptr2 = p2->head;
    ll l3;
    l3.head = NULL;

    while (carry != 0 || ptr1 != NULL || ptr2 != NULL)
    {
        int sum = 0;
        sum += carry;

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

        addFirst(&l3, data);
    }
    printf("Sum: ");
    print(l3.head);
}

int main()
{
    int d, value;
    ll l1, l2;
    l1.head = NULL;
    l2.head = NULL;
    printf("Enter no. of digits for first number: ");
    scanf("%d", &d);
    for (int i = 0; i < d; i++)
    {
        printf("Enter digit %d: ",i + 1);
        scanf("%d", &value);
        addFirst(&l1, value);
    }
    printf("Enter no. of digits for second number: ");
    scanf("%d", &d);
    for (int i = 0; i < d; i++)
    {
        printf("Enter digit %d: ",i + 1);
        scanf("%d", &value);
        addFirst(&l2, value);
    }

    // addFirst(&l1, 9);
    // addFirst(&l1, 9);
    // addFirst(&l1, 9);

    // addFirst(&l2, 4);
    // addFirst(&l2, 4);
    // addFirst(&l2, 4);
    // addFirst(&l2, 4);
    Sum(&l1, &l2);
}
#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

int q[SIZE];
int front = -1;
int rear = -1;

bool isEmpty()
{
    return front == -1;
}

bool isFull()
{
    return rear == SIZE - 1;
}

bool singleElement()
{
    return front == rear;
}

void enqueue(int item)
{
    if (isFull())
    {
        printf("Queue is full.\n");
        return;
    }
    else
    {
        if (isEmpty())
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
        q[rear] = item;
    }
}

void dequeue()
{
    if (isEmpty())
    {
       // printf("Queue is empty.\n");
        return;
    }
    else
    {
        int temp = q[front];
        printf("Deleted element is = %d.\n", temp);
        if (singleElement())
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front + 1;
        }
    }
}

int peek()
{
    if (isEmpty())
    {
       // printf("Queue is empty.\n");
        return;
    }
    return q[front];
}

void print()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        printf("%d\t", q[i]);
    }
    printf("\n");
}

int main()
{
    int opr, item;
    int check;
    printf("Enter 1 for insertion of element.\n");
    printf("Enter 2 for deletion of element.\n");
    printf("Enter 3 for peek operation.\n");
    printf("Enter any number to continue and -1 to stop: ");
    scanf("%d", &check);

    while (check != -1)
    {

        // printf("Enter -1 to exit.\n");

        printf("Choose your operation: ");
        scanf("%d", &opr);

        switch (opr)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &item);
            enqueue(item);
            print();
            break;

        case 2:
            dequeue();
            print();
            break;

        case 3:
            if(isEmpty()){
                printf("Queue is empty.\n");
                break;
            }
            printf("Peeked element = %d\n", peek());
            print();
            break;

        default:
            printf("Invalid Operation.\n");
            break;
        }

        printf("Enter any number to continue and -1 to stop: ");
        scanf("%d", &check);
    }

    return 0;
}
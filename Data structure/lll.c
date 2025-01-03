#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define the structure for a node in the linked list
typedef struct Node
{
    int data;           // Data held by the node
    struct Node *next;  // Pointer to the next node in the list
} Node;

// Define the structure for the linked list itself
typedef struct linklist
{
    Node *head;  // Pointer to the first node in the list
} linklist;

// Function to print the contents of the linked list
void print(Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);  // Print the data of the current node
        ptr = ptr->next;            // Move to the next node
    }
    return;
}

// Function to add a new node at the beginning of the linked list
void addFirst(linklist *p, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));  // Allocate memory for the new node
    newNode->data = data;                          // Set the data for the new node
    newNode->next = p->head;                       // Link the new node to the previous head
    p->head = newNode;                             // Update the head to point to the new node
    return;
}

// Function to add a new node at the end of the linked list
void addLast(linklist *p, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));  // Allocate memory for the new node
    Node *iter = p->head;                          // Start from the head of the list
    newNode->data = data;                          // Set the data for the new node
    newNode->next = NULL;                          // The new node will be the last node, so its next pointer is NULL

    // Traverse to the end of the list
    while (iter->next != NULL)
    {
        iter = iter->next;
    }

    iter->next = newNode;  // Link the last node to the new node
    return;
}

// Function to add a new node at a specific position in the linked list
void add_at_pos(linklist *p, int data, int pos)
{
    Node *newNode = (Node *)malloc(sizeof(Node));  // Allocate memory for the new node
    newNode->data = data;                          // Set the data for the new node
    Node *iter = p->head;                          // Start from the head of the list
    newNode->next = NULL;                          // Initialize the next pointer of the new node

    if (p->head == NULL)
    {
        printf("Empty.\n");  // If the list is empty, print a message and return
        return;
    }

    // Traverse to the node before the position where the new node is to be inserted
    for (int i = 1; i < pos - 1; i++)
    {
        iter = iter->next;
    }

    // Insert the new node at the specified position
    newNode->next = iter->next;
    iter->next = newNode;
}

// Function to add a new node after a node with a specific value
void add_at_val(linklist *p, int data, int newData)
{
    Node *newNode = (Node *)malloc(sizeof(Node));  // Allocate memory for the new node
    newNode->data = newData;                       // Set the data for the new node
    Node *iter = p->head;                          // Start from the head of the list
    newNode->next = NULL;                          // Initialize the next pointer of the new node

    if (p->head == NULL)
    {
        printf("Empty.\n");  // If the list is empty, print a message and return
        return;
    }

    // Traverse the list to find the node with the specified value
    while (iter != NULL)
    {
        if (iter->data == data)
        {
            newNode->next = iter->next;  // Insert the new node after the found node
            iter->next = newNode;
            return;
        }
        iter = iter->next;
    }

    printf("%d is not present.\n", data);  // If the value is not found, print a message
    return;
}

// Function to remove the first node from the linked list
void removeFirst(linklist *p)
{
    if (p->head == NULL)
    {
        printf("Empty.\n");  // If the list is empty, print a message and return
        return;
    }

    p->head = p->head->next;  // Update the head to point to the second node, effectively removing the first node
}

// Function to remove the last node from the linked list
void removeLast(linklist *p)
{
    if (p->head == NULL)
    {
        printf("Empty.\n");  // If the list is empty, print a message and return
        return;
    }

    if (p->head->next == NULL)
    {
        p->head = NULL;  // If there's only one node, set the head to NULL, making the list empty
        return;
    }

    Node *prevNode = p->head;  // Initialize the previous node pointer
    Node *iter = p->head->next;  // Initialize the iterator pointer

    // Traverse to the second last node in the list
    while (iter->next != NULL)
    {
        prevNode = iter;
        iter = iter->next;
    }

    prevNode->next = NULL;  // Remove the last node by setting the next pointer of the second last node to NULL
}

// Function to reverse the linked list
void reverse(linklist *p)
{
    Node *prev = NULL;      // Pointer to the previous node, initialized to NULL
    Node *current = p->head;  // Pointer to the current node, starting from the head
    Node *next = NULL;      // Pointer to the next node

    if (p->head == NULL)
    {
        printf("Empty.\n");  // If the list is empty, print a message and return
        return;
    }

    // Traverse the list and reverse the links
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    p->head = prev;  // Update the head to point to the new first node (previously the last node)
}

// Function to search for a specific value in the linked list
void search(linklist *p, int search)
{
    if (p->head == NULL)
    {
        printf("Empty.\n");  // If the list is empty, print a message and return
        return;
    }

    Node *iter = p->head;  // Start from the head of the list
    int count = 0;

    // Traverse the list to find the node with the specified value
    while (iter != NULL)
    {
        count++;
        if (iter->data == search)
        {
            printf("Present at position %d\n", count);  // Print the position if found
            return;
        }
        iter = iter->next;
    }
}

// Function to sort the linked list using Bubble Sort
void sort(linklist *p)
{
    if (p->head == NULL || p->head->next == NULL)
        return;  // If the list is empty or has only one element, return as it's already sorted

    bool swapped;
    Node *iter;

    // Perform Bubble Sort on the linked list
    do
    {
        swapped = false;
        iter = p->head;

        while (iter->next != NULL)
        {
            if (iter->data > iter->next->data)
            {
                int temp = iter->data;          // Swap the data of adjacent nodes if they are in the wrong order
                iter->data = iter->next->data;
                iter->next->data = temp;
                swapped = true;
            }
            iter = iter->next;
        }
    } while (swapped);  // Repeat the process until no swaps are made
}

int main()
{
    linklist l;          // Create a linked list
    l.head = NULL;       // Initialize the head of the linked list to NULL

    int opr, pos, value, newVal;
    int check = 0;

    // Print available operations to the user
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

        // Perform the operation based on user input
        switch (opr)
        {
        case 1:
            printf("Enter value to add at first: ");
            scanf("%d", &value);
            addFirst(&l, value);
            print(l.head);  // Print the list after the operation
            break;
        case 2:
            printf("Enter value to add at last: ");
            scanf("%d", &value);
            addLast(&l, value);
            print(l.head);  // Print the list after the operation
            break;
        case 3:
            printf("Enter position: ");
            scanf("%d", &pos);
            printf("Enter value: ");
            scanf("%d", &value);
            add_at_pos(&l, value, pos);
            print(l.head);  // Print the list after the operation
            break;
        case 4:
            printf("Enter the data value you want to add after: ");
            scanf("%d", &value);
            printf("Enter the new data value: ");
            scanf("%d", &newVal);
            add_at_val(&l, value, newVal);
            print(l.head);  // Print the list after the operation
            break;
        case 5:
            removeFirst(&l);
            printf("Deleted from first\n");
            print(l.head);  // Print the list after the operation
            break;
        case 6:
            removeLast(&l);
            printf("Deleted from last\n");
            print(l.head);  // Print the list after the operation
            break;
        case 7:
            reverse(&l);
            printf("Reversed\n");
            print(l.head);  // Print the list after the operation
            break;
        case 8:
            printf("Enter the search item: ");
            scanf("%d", &value);
            search(&l, value);
            break;
        case 9:
            sort(&l);
            printf("Sorted\n");
            print(l.head);  // Print the list after the operation
            break;
        default:
            printf("\nInvalid\n");  // Print an error message if an invalid option is selected
            break;
        }

        printf("\nEnter -1 to exit or any number to continue: ");
        scanf("%d", &check);  // Check if the user wants to continue or exit
    }
    return 0;
}

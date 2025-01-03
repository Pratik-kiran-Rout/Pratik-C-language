#include <stdio.h>
#include <stdlib.h>

// Definition of a binary tree root
typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;

// Function to create a new root
Node *newroot(int data)
{
    Node *newroot = (Node*)malloc(sizeof(Node));
    newroot->data = data;
    newroot->left = NULL;
    newroot->right = NULL;
    return newroot;
}
Node *createTree()
{
    int data;
    printf("Enter root value (-1 for NULL): ");
    scanf("%d", &data);

    if (data == -1)
    {
        return NULL;
    }

    Node *root = newroot(data);
    printf("Enter left child of %d:\n", data);
    root->left = createTree();

    printf("Enter right child of %d:\n", data);
    root->right = createTree();

    return root;
}
void inorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}
void preorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void postorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
}
int main()
{
    Node *root = createTree();

    // Display the tree using preorder traversal
    printf("\nInorder traversal of the binary tree:\n");
    inorderTraversal(root);
    printf("\nPreorder traversal of the binary tree:\n");
    preorderTraversal(root);
    printf("\nPostorder traversal of the binary tree:\n");
    postorderTraversal(root);

    return 0;
}

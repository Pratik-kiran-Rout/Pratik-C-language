#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
     int data;
     struct Node *left;
     struct Node *right;
} Node;

Node *creatnode(int data)
{
     Node *newnode = (Node *)malloc(sizeof(Node));
     newnode->data = data;
     newnode->left = newnode->right = NULL;
     return newnode;
}

// Insertion in a tree
void Insertion(Node **root, int data)
{
     if (*root == NULL){
          *root = creatnode(data);
          return;
     }
     if (data < (*root)->data){
          Insertion(&(*root)->left, data);
     }
     else{
          Insertion(&(*root)->right, data);
     }
}

// In-order traversal
void Inorder(Node *root)
{
     if (root != NULL)
     {
          Inorder(root->left);
          printf("%d ", root->data);
          Inorder(root->right);
     }
}

// Pre-order traversal
void Preorder(Node *root)
{
     if (root != NULL)
     {
          printf("%d ", root->data);
          Preorder(root->left);
          Preorder(root->right);
     }
}

// Post-order traversal
void Postorder(Node *root)
{
     if (root != NULL)
     {
          Postorder(root->left);
          Postorder(root->right);
          printf("%d ", root->data);
     }
}

// Find the minimum value node in the tree (for deletion)
Node *FindMin(Node *root)
{
     while (root && root->left != NULL)
     {
          root = root->left;
     }
     return root;
}

// Deletion in a binary search tree
void Deletion(Node **root, int data)
{
     if (*root == NULL)
          return;
     // search the node
     if (data < (*root)->data){
          Deletion(&(*root)->left, data);
     }
     else if (data > (*root)->data){
          Deletion(&(*root)->right, data);
     }
     else{
          // leaf node
          if ((*root)->left == NULL && (*root)->right == NULL){
               free(*root);
               *root = NULL;
          }
          // node having single node
          else if ((*root)->left == NULL){
               Node *temp = *root;
               *root = (*root)->right;
               free(temp);
          }
          else if ((*root)->right == NULL){
               Node *temp = *root;
               *root = (*root)->left;
               free(temp);
          }
          //  It is a root node 
          else
          {
               Node *temp = FindMin((*root)->right);
               (*root)->data = temp->data;
               Deletion(&(*root)->right, temp->data);
          }
     }
}

int main()
{
     Node *root = NULL;
     Insertion(&root, 10);
     Insertion(&root, 26);
     Insertion(&root, 30);
     Insertion(&root, 4);
     Insertion(&root, 11);
     Insertion(&root, 21);
     Insertion(&root, 17);
     Insertion(&root, 33);

     printf("Inorder traversal before deletion:\n");
     Inorder(root);
     printf("\n");

     Deletion(&root, 26);

     printf("Inorder:\n");
     Inorder(root);
     printf("\n");
     
     printf("Preorder :\n");
     Preorder(root);
     printf("\n");
     
     
     printf("Postorder :\n");
     Preorder(root);
     printf("\n");
     return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
    int height;
} Node;

Node* createNode(int data) {
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode->data = data;  // This line
    newnode->left = newnode->right = NULL;
    newnode->height = 1;
    return newnode;
}

int height(Node* node) {
    return (node == NULL) ? 0 : node->height;
}

int max(int x, int y) {
    return (x > y) ? x : y;
}

// Right Rotate
Node* RightRotate(Node* y) {
    Node* x = y->left;
    Node* t2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = t2;

    // Update heights
    y->height = 1 + max(height(y->left), height(y->right));
    x->height = 1 + max(height(x->left), height(x->right));
    return x;
}

// Left Rotate
Node* LeftRotate(Node* x) {
    Node* y = x->right;
    Node* t2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = t2; // Corrected this line (was left instead of right)

    // Update heights
    x->height = 1 + max(height(x->left), height(x->right));
    y->height = 1 + max(height(y->left), height(y->right));
    return y;
}

// Left-Right Rotation
Node* LeftRightRotation(Node* x) {
    x->left = LeftRotate(x->left);
    return RightRotate(x);
}

// Right-Left Rotation
Node* RightLeftRotation(Node* x) {
    x->right = RightRotate(x->right);
    return LeftRotate(x);
}

// Find balance factor
int Balance(Node* x) {
    return (height(x->left) - height(x->right));
}

Node* insertion(Node* node, int key) {
    if (node == NULL) {
        return createNode(key);
    }
    if (key < node->data) {
        node->left = insertion(node->left, key);  // Corrected to assign the return value
    } else if (key > node->data) {
        node->right = insertion(node->right, key); // Corrected to assign the return value
    } else {
        return node; // Duplicates are not allowed
    }

    // Update height
    node->height = 1 + max(height(node->left), height(node->right));

    // Get the balance factor
    int balance = Balance(node);

    // Perform rotations
    if (balance > 1 && key < node->left->data) {
        return RightRotate(node);
    }
    if (balance < -1 && key > node->right->data) {
        return LeftRotate(node);
    }
    if (balance > 1 && key > node->left->data) {
        return LeftRightRotation(node);
    }
    if (balance < -1 && key < node->right->data) {
        return RightLeftRotation(node);
    }

    return node; // Return the unchanged node pointer
}
void inorder(Node* node) {
    if (node != NULL) {
        inorder(node->left);
        printf("%d\t", node->data);
        inorder(node->right);
    }
}
int main() {
    Node* root = NULL;
    root = insertion(root, 10);
    root = insertion(root, 9);
    root = insertion(root, 8);

    printf("Inorder traversal after insertions:\n");
    inorder(root);
    printf("\n");

    root = insertion(root, 20);
    root = insertion(root, 15);
    
    printf("Inorder traversal after more insertions:\n");
    inorder(root);
    printf("\n");

    return 0;
}

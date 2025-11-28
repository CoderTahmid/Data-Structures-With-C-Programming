#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* left;
    int data;
    struct node* right;
};

struct node* createNode(int x) {
    struct node* newNode;
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->left = NULL;
    newNode->data = x;
    newNode->right = NULL;

    return newNode;
}

void printInOrder(struct node* root) {
    if (root == NULL) return;

    printInOrder(root->left);
    printf("%d --> ", root->data);
    printInOrder(root->right);
}

void printPostOrder(struct node* root) {
    if (root == NULL) return;

    printPostOrder(root->left);
    printPostOrder(root->right);
    printf("%d --> ", root->data);
}

void printPreOrder(struct node* root) {
    if (root == NULL) return;

    printf("%d --> ", root->data);
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int main() {
    struct node* root = createNode(10);

    root->left = createNode(20);
    root->right = createNode(30);

    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->left = createNode(60);
    root->right->right = createNode(70);

    printf("Printing in in-order....\n");
    printInOrder(root);
    printf("\n");

    printf("Printing in post order...\n");
    printPostOrder(root);
    printf("\n");

    printf("Printing in pre order...\n");
    printPreOrder(root);
    printf("\n");
}
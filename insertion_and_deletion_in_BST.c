#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int x) {
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

struct node* insertBST(struct node* root, int x) {
    if (root == NULL) {
        return createnode(x);
    }

    if (x > root->data) {
        root->right = insertBST(root->right, x);
    } else if (x < root->data) {
        root->left = insertBST(root->left, x);
    }

    return root;
}

struct node* findmin(struct node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

struct node* deleteBST(struct node* root, int x) {
    if (root == NULL) return root;

    if (x > root->data) {
        root->right = deleteBST(root->right, x);
    } else if (x < root->data) {
        root->left = deleteBST(root->left, x);
    } else {
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        } else {
            struct node* temp = findmin(root->right);

            root->data = temp->data;
            root->right = deleteBST(root->right, temp->data);
        }
    }

    return root;
}

void printInorder(struct node* root) {
    if (root == NULL) {
        return;
    }

    printInorder(root->left);
    printf("%d ->", root->data);
    printInorder(root->right);
}

int main() {
    struct node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 3);
    insertBST(root, 10);
    insertBST(root, 1);
    insertBST(root, 7);
    insertBST(root, 12);
    printInorder(root);
    deleteBST(root, 5);
    printf("\n");
    printInorder(root);
}
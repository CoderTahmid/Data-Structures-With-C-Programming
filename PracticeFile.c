#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* start = NULL;

void insertBegin() {
    int n;
    printf("Enter number to insert begin: ");
    scanf("%d", &n);

    struct node* newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = n;

    if (start == NULL) {
        newNode->next = NULL;
        start = newNode;
    } else {
        newNode->next = start;
        start = newNode;
    }
}

void insertEnd() {
    int n;
    printf("Enter number to insert end: ");
    scanf("%d", &n);

    struct node* newNode;
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = n;
    newNode->next = NULL;
    struct node* i = start;

    if (i == NULL) {
        start = newNode;
    } else {
        while (i->next != NULL) {
            i = i->next;
        }
        i->next = newNode;
    }
}

void insertAny() {
    int n, pos;
    printf("Enter a number to insert anywhere: ");
    scanf("%d", &n);

    struct node* newNode;
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = n;

    struct node* i = start;

    if (i == NULL) {
        newNode->next = NULL;
        start = newNode;
    } else {
        printf("Enter the number after which you want to insert: ");
        scanf("%d", &pos);

        while (i->data != pos) {
            i = i->next;
        }
        newNode->next = i->next;
        i->next = newNode;
    }
}

void deleteFirst() {
    if (start == NULL) {
        printf("There's nothing to delete: \n");
    } else {
        printf("Deleting the first node...\n");
        start = start->next;
    }
}

void deleteLast() {
    if (start == NULL) {
        printf("There's nothing to delete... \n");
    } else if (start->next == NULL) {
        printf("Deleting the last node...\n");
        start = NULL;
    } else {
        printf("Deleting the last node...\n");
        struct node* i = start;

        while (i->next->next != NULL) {
            i = i->next;
        }
        i->next = NULL;
    }
}

void deleteAnyNode() {
    struct node* i = start;

    if (i == NULL) {
        printf("There's nothing to delete...\n");
    } else if (i->next == NULL) {
        printf("There's only one node, so deleting it...\n");
        start = NULL;
    } else {
        int n;
        printf("Enter the node's data part you want to Delete: ");
        scanf("%d", &n);

        if (i->data == n) {
            printf("Deleting the first node...\n");
            start = start->next;
        } else {
            int count = 0;
            while (i->next->data != n) {
                i = i->next;
                if (i->next == NULL) {
                    count++;
                    break;
                }
            }

            if (count) {
                printf("%d does not present in the linked list\n", n);
            } else {
                i->next = i->next->next;
            }
        }
    }
}

void printLinkedList() {
    struct node* i = start;

    if (i == NULL) {
        printf("Here's nothing to print..\n");
    } else {
        while (i != NULL) {
            printf("%d ->", i->data);
            i = i->next;
        }
    }
}

int main() {
    insertBegin();
    insertBegin();
    insertBegin();
    insertBegin();
    insertBegin();
    deleteFirst();
    deleteAnyNode();
    deleteLast();
    printLinkedList();
}
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* start = NULL;

void insertBegin() {
    int n;
    printf("Enter a number to insert begin: ");
    scanf("%d", &n);

    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = n;
    newNode->next = NULL;

    if (start == NULL) {
        start = newNode;
    } else {
        newNode->next = start;
        start = newNode;
    }
}

void deleteFirstNode() {
    if (start == NULL) {
        printf("There's nothing to delete...\n");
    } else if (start->next == NULL) {
        printf("The first node deleted\n");
        start = NULL;
    } else {
        start = start->next;
    }
}

void deleteLastNode() {
    struct node* i = start;

    if (i == NULL) {
        printf("There's nothing to delete...\n");
    } else if (start->next == NULL) {
        printf("First node deleted...\n");
        start = NULL;
    } else {
        printf("Deleting last node...\n");
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
        printf("Deleting the first node...\n");
        start = NULL;
    } else {
        int n, c = 0;
        printf("Enter the node's data part you want to insert: ");
        scanf("%d", &n);

        if (i == NULL) {
            printf("The given number is not present in this linked list\n");
        } else if (i->data == n) {
            printf("Deleting the first node...\n");
            start = start->next;
        } else {
            printf("Deleting the node which contain %d...\n", n);

            while (i->next->data != n) {
                i = i->next;
            }

            if (i->next->data == n && i->next->next == NULL) {
                i->next = NULL;
            } else {
                i->next = i->next->next;
            }
        }
    }
}

void printLinkedList() {
    struct node* i = start;

    while (i != NULL) {
        printf("%d -->", i->data);
        i = i->next;
    }
}

int main() {
    insertBegin();
    insertBegin();
    insertBegin();
    deleteAnyNode();
    // deleteLastNode();
    // deleteFirstNode();
    // deleteFirstNode();
    printLinkedList();
}
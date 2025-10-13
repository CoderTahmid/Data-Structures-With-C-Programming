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
    deleteLastNode();
    // deleteFirstNode();
    // deleteFirstNode();
    printLinkedList();
}
#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* pre;
    int data;
    struct node* next;
};

struct node* start = NULL;
struct node* tail = NULL;

void insertBegin() {
    int n;
    printf("Enter number to insert begin: ");
    scanf("%d", &n);

    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = n;
    newNode->pre = NULL;
    newNode->next = NULL;

    if (start == NULL) {
        start = newNode;
        tail = newNode;
    } else {
        start->pre = newNode;
        newNode->next = start;
        start = newNode;
    }
}

void insertLast() {
    int n;
    printf("Enter number to insert last: ");
    scanf("%d", &n);

    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = n;
    newNode->pre = NULL;
    newNode->next = NULL;

    struct node* i = start;

    if (i == NULL) {
        start = newNode;
        tail = newNode;
    } else {
        while (i->next != NULL) {
            i = i->next;
        }
        newNode->pre = i;
        i->next = newNode;
        tail = newNode;
    }
}

void insertAny() {
    int n, pos;
    printf("Enter number to insert anywhere: ");
    scanf("%d", &n);
    printf("Enter the number after which you want to insert: ");
    scanf("%d", &pos);

    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = n;
    newNode->pre = NULL;
    newNode->next = NULL;

    struct node* i = start;

    if (i == NULL) {
        start = newNode;
        tail = newNode;
    } else {
        while (i->data != pos) {
            i = i->next;
        }

        if (i->next == NULL) {
            newNode->pre = tail;
            tail->next = newNode;
            tail = newNode;
        } else {
            newNode->pre = i;
            newNode->next = i->next;
            i->next->pre = newNode;
            i->next = newNode;
        }
    }
}

void deleteFirstNode() {
    if (start == NULL) {
        printf("There's nothing to delete...\n");
    } else if (start->next == NULL) {
        printf("There's only one node, so deleteing it...\n");
        start = NULL;
        tail = NULL;
    } else {
        printf("Deleteing the first node...\n");
        start->next->pre = NULL;
        start = start->next;
    }
}

void deleteLastNode() {
    struct node* i = start;

    if (i == NULL) {
        printf("There's nothing to delete...\n");
    } else if (i->next == NULL) {
        printf("There's only one node so delteting it...\n");
        start = NULL;
        tail = NULL;
    } else {
        printf("Deleteing the last node...\n");
        while (i->next->next != NULL) {
            i = i->next;
        }
        tail = i->pre->next;
        tail->next = NULL;
    }
}

void deleteAnyNode() {
    int n;
    printf("Enter the node's data part that you want to delete: ");
    scanf("%d", &n);

    struct node* i = start;

    if (i == NULL) {
        printf("There's nothing to delete...\n");
    } else if (i->next == NULL) {
        printf("There's only one node so deleting it...\n");
        start = NULL;
        tail = NULL;
    } else if (i->data == n) {
        printf("Deleting the first node...\n");
        start->next->pre = NULL;
        start = start->next;
    } else {
        while (i->next->data != n) {
            i = i->next;
        }

        if (i->next->next == NULL) {
            tail = i;
            i->next = NULL;
        } else {
            i->next->next->pre = i;
            i->next = i->next->next;
        }
    }
}

void printLinkedList() {
    struct node* i = start;

    printf("Printing linked list right way...\n");
    while (i != NULL) {
        printf("%d-->", i->data);
        i = i->next;
    }
    printf("\n");
}

void printLinkedListInReverseWay() {
    struct node* j = tail;

    printf("Printing linked list reverserly...\n");

    while (j != NULL) {
        printf("%d-->", j->data);
        j = j->pre;
    }
}

int main() {
    insertBegin();
    insertBegin();
    insertBegin();
    insertLast();
    insertAny();
    deleteAnyNode();
    deleteFirstNode();
    deleteLastNode();
    printLinkedList();
    printLinkedListInReverseWay();
}
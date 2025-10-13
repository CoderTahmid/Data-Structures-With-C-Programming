#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* start = NULL;

void insertAny() {
    int n, pos;
    printf("Enter a number to insert anwhere: ");
    scanf("%d", &n);
    printf("Enter the number after which you want to insert: ");
    scanf("%d", &pos);

    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = n;
    newNode->next = NULL;

    struct node* i = start;

    if (i == NULL) {
        start = newNode;
    } else {
        while (i->data != pos) {
            i = i->next;
        }

        newNode->next = i->next;
        i->next = newNode;
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
    insertAny();
    insertAny();
    insertAny();
    printLinkedList();
}
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* start = NULL;

void push() {
    int n;
    printf("Enter number to insert in the stack: ");
    scanf("%d", &n);

    struct node* newNode = (struct node*)malloc(sizeof(struct node));

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

void pop() {
    struct node* i = start;

    if (i == NULL) {
        printf("There's nothing to delete...\n");
    } else if (i->next == NULL) {
        printf("There's only one item, so deleting it...\n");
        start = NULL;
    } else {
        printf("Popping one item from the stack...\n");
        while (i->next->next != NULL) {
            i = i->next;
        }
        i->next = NULL;
    }
}

void printStack() {
    struct node* i = start;

    while (i != NULL) {
        printf("%d -->", i->data);
        i = i->next;
    }
}

int main() {
    push();
    push();
    push();
    pop();
    printStack();
}
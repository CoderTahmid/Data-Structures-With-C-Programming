#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* start = NULL;

void enqueue() {
    struct node* i = start;

    int n;
    printf("Enter number to insert in the queue: ");
    scanf("%d", &n);

    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = n;
    newNode->next = NULL;

    if (i == NULL) {
        start = newNode;
    } else {
        while (i->next != NULL) {
            i = i->next;
        }
        i->next = newNode;
    }
}

void dequeue() {
    if (start == NULL) {
        printf("there's nothing to delete...\n");
    } else {
        printf("Deleting one item from the queue...\n");
        start = start->next;
    }
}

void printQueue() {
    struct node* i = start;

    while (i != NULL) {
        printf("%d -->", i->data);
        i = i->next;
    }
}

int main() {
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    printQueue();
}
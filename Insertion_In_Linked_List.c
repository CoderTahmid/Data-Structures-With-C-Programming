#include <stdio.h>
#include <stdlib.h>

struct student {
    int data;
    struct student *next;
};

struct student *start = NULL;

void printLinkedList() {
    struct student *i = start;
    while (i != NULL)
    {
        printf("%d ->", i->data);
        i = i->next;
    }
}

void insertBegin() {
    int n;
    printf("Enter a number to insert begin: ");
    scanf("%d", &n);

    struct student *newNode;
    newNode = (struct student * )malloc(sizeof(struct student));
    newNode->data = n;
    if (start == NULL) {
        newNode->next = NULL;
        start = newNode;
    } else {
        newNode->next = start;
        start = newNode;
    }
    
}

int main() {
    // insertBegin();
    // insertBegin();
    insertBegin();
    printLinkedList();
}
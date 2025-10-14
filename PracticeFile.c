#include <stdio.h>
#include <stdlib.h>
struct student {
    int data;
    struct student* next;
};
struct student* head = NULL;
void print() {
    struct student* i = head;
    while (i != NULL) {
        printf("%d->", i->data);
        i = i->next;
    }
    printf("NULL\n");
}
void createNewnode() {
    int x;
    printf("Enter Data : ");
    scanf("%d", &x);
    struct student* newnode;
    newnode = (struct student*)malloc(sizeof(struct student));
    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL) {
        head = newnode;
    } else {
        struct student* i = head;
        while (i->next != NULL) {
            i = i->next;
        }
        i->next = newnode;
    }
}
void deleteAny() {
    int x;
    printf("Which data to delete : ");
    scanf("%d", &x);
    if (head == NULL) {
        printf("There's no data to delete.");
    } else if (head->data == x) {
        head = head->next;
    } else {
        {
            struct student* i = head;
            while (i->next->data != x) {
                i = i->next;
            }
            i->next = i->next->next;
        }
    }
}
int main() {
    createNewnode();
    createNewnode();
    // createNewnode();
    print();
    deleteAny();
    print();

    return 0;
}
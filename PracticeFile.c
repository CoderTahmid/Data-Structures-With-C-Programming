#include <stdio.h>
#include <string.h>

// Structure Basics Using Pointer Concept

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student *s1, *s2, *s3;

    s1->id = 10;
    strcpy(s1->name, "Tahmid");

    s2->id = 20;
    strcpy(s2->name, "Rifat");

    s3->id = 30;
    strcpy(s3->name, "Shimul");

    printf("s1 id: %d s1 name: %s\n", s1->id, s1->name);
    printf("s2 id: %d s2 name: %s\n", s2->id, s2->name);
    printf("s3 id: %d s3 name: %s\n", s3->id, s3->name);
    //fff 
    return 0;
}
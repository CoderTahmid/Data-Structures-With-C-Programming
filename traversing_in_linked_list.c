#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    struct student *next;
};

int main() {
    struct student *s1, *s2, *s3, *start;

    s1 = (struct student *) malloc(sizeof(struct student));
    s2 = (struct student *) malloc(sizeof(struct student));
    s3 = (struct student *) malloc(sizeof(struct student));

    /*
    now the question is why we need to do this part,
    I mean "(struct student *) malloc(sizeof(struct student))"
    Like why we need to allocate memory dynamically 
    amader to "struct student *s1, *s2, *s3, *start;" ei line ei memory te storage allocate hoye jawar kotha
    the fact is
    ei structe actually amader ekta blueprint dey
    like ei student type data ta emon houa uchit.
    it's a blueprint 
    and ei memory allocate korar maddhome amra oitar jonne storage niye nei
    */

    start = s1;

    s1->id = 10;
    s2->id = 20;
    s3->id = 30;

    s1->next = s2;
    s2->next = s3;
    s3->next = NULL;

    struct student *i = start;

    while (i != NULL) {
        printf("id = %d\n", i->id);
        i = i->next;
    }
}
#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    struct student *next;
    /*
    ebhabe je amra ekta structure'r bhitore thik tar motoi dekhte
    ekta member declear korsi
    etakei muloto self refencing bole
    */
};

int main() {
    struct student s1, s2, s3;

    s1.id = 50;
    s2.id = 100;
    s3.id = 39;

    strcpy(s1.name, "Tahmid");
    strcpy(s2.name, "King");
    strcpy(s3.name, "Mahadi");

    s1.next = &s2;
    s2.next = &s3;
    s3.next = NULL;

    printf("%p\n", s1.next); // output: 000000D68D1FFC10 (address off s2)
    printf("%p", s2.next); // output: 000000B3AA1FFDB0 (address off s3)


}
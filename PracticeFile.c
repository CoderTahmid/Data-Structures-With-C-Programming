#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
};

int main() {
    struct student s1, s2, s3;
    
    s1.id = 10;
    s2.id = 20;
    s3.id = 50;

    printf("%d\n", s1.id);
}
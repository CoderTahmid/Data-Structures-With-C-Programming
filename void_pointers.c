#include <stdio.h>

// void pointers

int main(){
    
    int n = 10;
    void *ptr = &n;
    printf("%d\n", *(int*)ptr); // output: 10
    
    /*
    void pointer emon ekta pointer
    jar kono associated data type nai
    this data type could be anything 
    
    ekhane print line e jeta hocche
    amra to prothome ptr ke ekta void pointer hishabe banaisi
    to print line e 
    amra first e type casting korsi (int*) by this syntax
    type cast kore int type pointer e convert kora hoise eta
    then hocche amra dereferencing kore print korsi
    void pointer use korte chaile eta ke must type cast kora lagbe
    */
    
    
    return 0;
    
}
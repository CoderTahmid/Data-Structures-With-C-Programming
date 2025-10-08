#include <stdio.h>

int main() {
    int n, num, idx;

    printf("Enter you array size : ");
    scanf("%d", &n);

    n++;
    int arr[n];
    printf("Enter your array : ");
    for (int i = 0 ; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to insert : ");
    scanf("%d", &num);

    printf("Enter the index where you want to insert the number : ");
    scanf("%d", &idx);
    printf("\n");

    printf("Before insertion your array is : ");
    for (int i = 0 ; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = n ; i >= idx ; i--) {
        arr[i] = arr[i - 1];
    }
    arr[idx] = num;

    printf("After insertion your array is : ");
    for (int i = 0 ; i < n ; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}
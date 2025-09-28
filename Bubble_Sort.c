#include <stdio.h>

// Array sorting in ascending order

int main() {
    int n, i, j;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Before sort : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("After sort : ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
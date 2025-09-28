#include <stdio.h>

int main() {
    int n;
    printf("Enter the array size : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int num;
    printf("Enter the number you want to delete : ");
    scanf("%d", &num);

    int idx = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            idx = i;
            break;
        }
    }

    if (idx > -1) {
        printf("Before delete : ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        for (int i = idx; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        printf("After delete : ");
        for (int i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("The number does not exist\n");
    }
}
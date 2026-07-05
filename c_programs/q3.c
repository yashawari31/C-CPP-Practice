#include <stdio.h>

int main() {
    int arr[100], n, i, j = 0;

    printf("Enter size:");
    scanf("%d", &n);

    printf("Enter sorted array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            j++;       
            arr[j] = arr[i];  
        }
    }

    printf("After removing duplicates:\n");
    for(i = 0; i <= j; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
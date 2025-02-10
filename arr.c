#include <stdio.h>

int main() {
    int arr[5]; // Declaring an array of size 5
    int i;

    // Initializing array using for loop
    for (i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Printing array elements using for loop
    printf("\nArray elements are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Display contents of an integer array

#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5}; // Example array
    int size = sizeof(array) / sizeof(array[0]); // Calculate the size of the array

    printf("Array contents:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

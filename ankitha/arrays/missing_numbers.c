#include <stdio.h>

void printMissingNumbers(int arr[], int size) {
    int expected = 1;  // Start with the first expected number
    
    for (int i = 0; i < size; i++) {
        // Print all missing numbers until we reach the current array element
        while (expected < arr[i]) {
            printf("%d ", expected);
            expected++;
        }
        expected++;  // Move to the next expected number
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Missing numbers: ");
    printMissingNumbers(arr, size);
    
    return 0;
}


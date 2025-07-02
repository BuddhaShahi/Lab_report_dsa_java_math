// 8. Write a c program to implement Bubble sort.

#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;

    // Outer loop for number of passes
    for (i = 0; i < n - 1; i++) {
        // Inner loop for comparing adjacent elements
        for (j = 0; j < n - i - 1; j++) {
            // Swap if the current element is greater than the next
            if (arr[j] > arr[j + 1]) {
                // Swapping
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print array
void printArray(int arr[], int n) {
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}


// Enter number of elements: 5
// Enter 5 elements: 64 34 25 12 22
// Sorted array: 12 22 25 34 64

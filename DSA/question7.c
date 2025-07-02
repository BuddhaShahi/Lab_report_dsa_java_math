// 7. Write a c program to demonstrate to find binary search.

#include <stdio.h>

// Binary Search function
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;  // Found at index mid
        else if (key < arr[mid])
            high = mid - 1;  // Search in left half
        else
            low = mid + 1;   // Search in right half
    }

    return -1; // Not found
}

int main() {
    int arr[100], n, i, key, result;

    printf("Enter the number of elements (sorted): ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, n, key);

    if (result == -1)
        printf("Element %d not found in array.\n", key);
    else
        printf("Element %d found at position %d (index %d).\n", key, result + 1, result);

    return 0;
}


// Enter the number of elements (sorted): 5
// Enter 5 sorted elements: 10 20 30 40 50
// Enter the element to search: 30
// Element 30 found at position 3 (index 2).

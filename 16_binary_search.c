#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid; // Return the index if key is found
        else if (arr[mid] < key)
            low = mid + 1; // Discard the left half
        else
            high = mid - 1; // Discard the right half
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int n, key;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the key to search for: ");
    scanf("%d", &key);
    
    int result = binarySearch(arr, 0, n - 1, key);
    
    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found in the array\n", key);
    
    return 0;
}

/*
Output:
Enter the number of elements in the array: 7
Enter the elements of the array in sorted order:
1
2
3
4
5
67
68
Enter the key to search for: 68
Element 68 found at index 6
*/

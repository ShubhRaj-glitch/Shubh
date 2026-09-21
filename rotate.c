// Rotate an array to the right by k positions


#include <stdio.h>

// Function to reverse a portion of the array from index start to end
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to right-rotate array by k positions
void rightRotate(int arr[], int n, int k) {
    if (n == 0) return;
    
    // Handle cases where k is greater than n
    k = k % n;
    
    // Step 1: Reverse the last k elements
    reverse(arr, n - k, n - 1);
    
    // Step 2: Reverse the first n-k elements
    reverse(arr, 0, n - k - 1);
    
    // Step 3: Reverse the entire array
    reverse(arr, 0, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Original array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    rightRotate(arr, n, k);

    printf("\nRotated array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}   
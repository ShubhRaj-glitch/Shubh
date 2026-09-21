// Find the second largest element in an array.


#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
       
        if (arr[i] > largest) {
            secondLargest = largest; 
            largest = arr[i];        
        }
        
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No second largest element exists.\n");
    } else {
        printf("Largest: %d\n", largest);
        printf("Second Largest: %d\n", secondLargest);
    }

    return 0;
}   
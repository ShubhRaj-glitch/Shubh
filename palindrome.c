#include <stdio.h>

int main() {
    int n, original, remainder, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Store the original number for comparison
    original = n;

    // Reverse the number mathematically
    while (n != 0) {
        remainder = n % 10;          // Extract the last digit
        reversed = reversed * 10 + remainder; // Append digit to reversed number
        n /= 10;                     // Remove the last digit
    }

    // Check if original equals reversed
    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}   
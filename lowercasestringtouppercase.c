// Convert a lowercase string to uppercase without using built-in functions.


#include <stdio.h>

void to_uppercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        // Check if character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Safer than gets()
    
    to_uppercase(str);
    
    printf("Uppercase string: %s", str);
    return 0;
}   
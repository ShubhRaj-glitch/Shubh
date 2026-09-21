// Count vowels and consonants in a string.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    // Iterate through the string until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase for easier comparison

        if (isalpha(ch)) { // Check if character is an alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}   
#include <stdio.h>

int main() {
    char n ;
    printf("Enter a alphabet:");
    scanf("%c", &n);
if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U') {
    printf("The alphabet is vowel");
} else {
    printf("The alphabet is consonant");
}
return 0;
}
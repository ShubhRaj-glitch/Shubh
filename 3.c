#include <stdio.h>
int main() {
    int integer;
    printf("enter an integer:");
    scanf("%d", &integer);
    if (integer % 2 == 0) {
        printf("The integer is even");
    } else {
        printf("The integer is odd");
    }
    return 0;
}
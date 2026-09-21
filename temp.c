#include <stdio.h>
int main () {
    int celsius ;
    printf("Enter the temp(in celsius):");
    scanf("%d", &celsius);
    printf("Temp in fahrenheit: %d\n", (celsius * 9/5) + 32);
    return 0;
}
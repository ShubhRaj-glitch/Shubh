#include <stdio.h>
int main() {
    int a , b ;
    char sign ;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the sign:");
    scanf(" %c", &sign);
    switch (sign) {
        case '+' :
        printf("The sum is : %d\n", a + b);
        break;
        case '-' :
        printf("The difference is : %d\n", a - b);
        break ;
        case '*' :
        printf("The multiplication is : %d\n", a*b );
        break;
        case '/' :
        printf("The division is : %d\n", a/b);
        break;
        case '%':
        printf("The percentage is : %d\n", (a/a+b)*100 || (b/a+b)*100);
        break;
        default :
        printf("invalid");
    }
    return 0;
}
#include <stdio.h>
int main () {
    int n , d1 , d2 , d3 , sum ;
    printf("Enter the 3 digit number :");
    scanf("%d", &n);

    d1 = n/100 ;
    d2 = (n/10) % 10 ;
    d3 = n % 10 ;
    sum = (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3) ;

    if ( sum == n) {
        printf("%d is a armstrong number \n", n);
    } else {
        printf("%d is not an armstrong number\n", n);
    }
    return 0 ;
}
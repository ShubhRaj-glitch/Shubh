#include <stdio.h>
int main () {
   int p , r , t ;
    printf("Enter the principle: ");
    scanf("%d", &p);
    printf("Enter the rate: ");
    scanf("%d", &r);
    printf("Enter the time: ");
    scanf("%d", &t);
    int SI = (p*r*t)/100 ;
    printf("the simple interest is : %d\n ", SI );
   int CI = p*((1+r/100)^t)-t ; 
    printf("the compound interest is: %d\n", CI);
    return 0 ;
}
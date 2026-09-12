#include <stdio.h>
int main () {
    int units ;
    printf("Enter the no. of units:");
    scanf("%d", &units);
   if(units <= 100) {
        printf("bill: %d\n", units * 5);
    } else if (units <= 200) {
        printf("bill: %d\n", units * 10 );
    } else if (units <= 300) {
        printf("bill: %d\n",units * 7 );
    } else {
        printf("bill: %d\n",units * 12 );
    }
    return 0; 
}
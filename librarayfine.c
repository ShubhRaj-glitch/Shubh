#include <stdio.h>
int main () {
    int day ;
    printf("Enter the day:");
    scanf("%d", &day);
    if(day <= 0) {
        printf("no fine");
    } else if (day <= 5) {
        printf("fine: %d\n", day * 2);
    } else if (day <= 10) {
        printf("fine: %d\n",day * 4 );
    } else if (day <= 30){
        printf("fine: %d\n",day * 6 );
    }else {
        printf("Membership Cancelled");
    }
    return 0;
}
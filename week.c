#include <stdio.h>
int main() {
    char day ;
    printf("Enter the day:");
    scanf("%d" , &day);
    switch (day) {
        case 1 :
        printf("Monday");
        break;
        case 2 :
        printf("Tuesday");
        case 3 :
        printf("Wednesday");
        break;
        case 4 :
        printf("Thursday");
        break;
        case 5 :
        printf("Friday");
        break;
        case 6 :
        printf("Saturday");
        break;
        default:
        printf("Sunday");
        deafult :
        printf("error");
    }
    return 0;
}
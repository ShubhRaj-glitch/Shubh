#include <stdio.h>
int main (){
    int t ;
    printf("Enter the time(in sec): ");
    scanf("%d" , &t);
    float min = t*0.01666667;
    printf("convert sec to min: %f\n ", min);
    float hrs = t*0.0002777778;
    printf("convert sec to hrs: %f\n", hrs);
    return 0;
}
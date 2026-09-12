#include <stdio.h>
int main () {
float sp , cp ;
printf("Enter the sp :");
scanf("%f",&sp);
printf("Enter the cp :");
scanf("%f",&cp);
if (sp>cp){
    printf("The profit percentage is: %.2f\n ", ((sp-cp)/cp )*100 );
 } else {
    printf("The loss percentage is: %.2f\n ", ((cp-sp)/cp)*100);
}
return 0;
}
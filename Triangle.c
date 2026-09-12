#include <stdio.h>
int main() {
    int a , b , c;
    printf("Enter the value of a :");
    scanf("%d" , &a);
    printf("Enter the value of b :");
    scanf("%d" , &b);
    printf("Enter the value of c :");
    scanf("%d" , &c);
    if(a==b==c){
        printf("Triangle is equaliteral");
    }else if (a==b || a==c || b==c){
        printf("Triangle is isosceles");
    }else {
        printf("Trangle is scalene");
    }
    return 0 ;
}
#include <stdio.h>
int main () {
    int n , isprime = 1 ;
    printf("Enter the number :");
    scanf("%d", &n);
    if (n <= 1) {
      isprime = 0 ;
    } else {
        for (int i = 2 ; i * i <= n ; i++) {
            if (n % i == 0) {
                isprime = 0 ;
                break ;
            }
        }
    }
    if (isprime){
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    return 0 ;
}
// we used i*i instead of i because every number is divisible by itself thus when we took n = 7 , the output was not a prime number 
// but when we took i * i and n = 7 then the output said it was a prime number thus for the purpose of divisibility we took i*i instad of i
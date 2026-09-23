// WAP to print first 50 prime numbers
#include <stdio.h>

int main() {
    int count = 1, num = 3, i, isPrime;
    printf("2 is a prime number.\n");
    while(count<50) {
        isPrime=1;
        for(i = 2; i<num; i++) {
            if( num%i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d is a prime number.\n", num);
            count++;
       }
        num++;
    }
    return 0;
}
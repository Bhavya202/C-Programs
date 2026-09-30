// WAP to print all prime numbers upto 500
#include <stdio.h>

int main(){
    int i, num = 3, isPrime;
    printf("The prime numbers upto 500 are:-\n");
    printf("2 is prime.\n");
    while(num<500){
        isPrime = 1;
        for (i = 2; i<num; i++){
            if(num%i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("%d is prime.\n", num);
        }
        num++;
    }
    return 0;
}

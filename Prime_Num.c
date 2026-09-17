// WAP to check whether a number is prime or not
#include <stdio.h>

int main(){
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i=2; i<a; i++){
        if (a%i == 0){
            printf("The number %d is not prime as it is divisible by %d.\n", a, i);
            return 0;
        }
    }

    printf("The number %d is prime.", a);

    return 0;
}

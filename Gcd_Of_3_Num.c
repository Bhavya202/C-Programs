// WAP to find GCD for 3 numbers
#include <stdio.h>

int main(){
    int a, b, c, gcd;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    for (int i=1; i<=a && i<=b && i<=c; i++){
        if(a%i==0 && b%i==0 && c%i == 0){
            gcd = i;
        }
    }

    printf("GCD of %d, %d and %d is %d.", a, b, c, gcd);
    
    return 0;
}

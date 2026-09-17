// WAP to get sum of even numbers from 1 to a certain number
#include <stdio.h>

int main(){
    int a, sum=0;

    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i=1; i<=a; i++) {
        if (i%2 == 0){
            sum+=i;
        }
    }

    printf("The sum of even numbers from 1 to %d is %d.", a, sum);
    
    return 0;
}

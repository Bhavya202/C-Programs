// WAP to create average of two numbers
#include <stdio.h>

int main(){
    int num1, num2;
    float avg;

    printf("Enter Two Numbers: ");
    scanf("%d %d", &num1, &num2);

    avg = (num1 + num2) / (float)2;
    printf("The average of %d and %d is %f.", num1, num2, avg);

    return 0;
}
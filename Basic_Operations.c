// WAP to add, subtract, multiply and divide two numbers
#include <stdio.h>

int main(){
    int num1, num2, sum, sub, multiply;
    float divide;

    printf("Enter Number 1: ");
    scanf("%d", &num1);

    printf("Enter Number 2: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);

    sub = num1 - num2;
    printf("The difference of %d and %d is %d.\n", num1, num2, sub);

    multiply = num1 * num2;
    printf("The multiplication of %d and %d is %d.\n", num1, num2, multiply);

    divide = (float)num1 / num2;
    printf("The division of %d and %d is %f.\n", num1, num2, divide);

    return 0;
}
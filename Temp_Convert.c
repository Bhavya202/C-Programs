// WAP to convert temperature form fahrenheit to celsius
#include <stdio.h>

int main(){
    float tempf;

    printf("Enter Temperature In Fahrenheit: ");
    scanf("%f", &tempf);
    
    printf("Temperature In Celsius Is: %.3f.", (5*(tempf-32))/9);
    return 0;
}

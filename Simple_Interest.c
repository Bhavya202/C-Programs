// WAP to calculate the simple interest
#include <stdio.h>

int main(){
    int pr, rt, tm; 
    float si;

    printf ("Enter Principal Value: ");
    scanf("%d", &pr);

    printf ("Enter Rate Of Interest: ");
    scanf("%d", &rt);

    printf ("Enter Time Period: ");
    scanf("%d", &tm);

    si = (pr*rt*tm)/(float)100;
    printf("The simple interest is %f.", si);

    return 0;
}
// WAP to calculate the compound interest
#include <stdio.h>
#include <math.h>

int main(){
    int pr, tm;
    float rt, ci;

    printf ("Enter Principal Value: ");
    scanf("%d", &pr);

    printf ("Enter Rate Of Interest: ");
    scanf("%f", &rt);

    printf ("Enter Time Period: ");
    scanf("%d", &tm);

    ci = pr * pow((1+(rt/100)), tm);
    printf("The compound interest is %f.", ci);

    return 0;
}
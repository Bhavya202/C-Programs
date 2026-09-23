// WAP to check whether a year is a leap year or not
#include <stdio.h>

int main() {
    int yr, ld;
    printf("Enter a year: ");
    scanf("%d", &yr);
    ld = yr%100;
    if(ld%4 == 0){
        printf("%d is a leap year.", yr);
    }
    else{
        printf("%d is not a leap year.", yr);
    }
    return 0;
}
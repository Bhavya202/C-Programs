// WAP to create a table of a number upto a certain number
#include <stdio.h>

int main(){
    int num, up;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter number upto which you need to see table: ");
    scanf("%d", &up);

    for (int i=1; i<=up; i++){
        printf("%d X %d = %d.\n", num, i, num*i);
    }
    
    return 0;
}

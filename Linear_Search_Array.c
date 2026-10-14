// WAP to search a number within an array
#include <stdio.h>

int main(){
    int a[5], i, num, found=0;
    printf("Enter Values For Array: ");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    printf("Array: ");
    for(i=0; i<5; i++){
        printf("%d ", a[i]);
    }
    printf("\nEnter Number To Be Searched: ");
    scanf("%d", &num);
    for(i=0; i<5; i++){
        if(num == a[i]){
            printf("\nNumber Found!!");
            printf("\nNumber %d Is %d Element Of Array.", a[i], i+1);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("\nNumber Not Found!!");
    return 0;
}

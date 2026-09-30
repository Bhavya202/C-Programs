// WAP to merge two arrays into a single array
#include <stdio.h>

int main(){
    int a[5], b[3], c[8], i;
    printf("Enter 5 values for array A: ");
    for(i = 0; i<5; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter 3 values for array B: ");
    for(i = 0; i<3; i++){
        scanf("%d", &b[i]);
    }
    for(i = 0; i<8; i++){
        if(i<5){
            c[i] = a[i];
        }
        if(i>=5){
            c[i] = b[i-5];
        }
    }
    for(i = 0; i<8; i++){
        printf("%d ", c[i]);
    }
    return 0;
}

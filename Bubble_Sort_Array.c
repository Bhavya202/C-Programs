// WAP to sort an array using bubble sort
#include <stdio.h>

int main(){
    int a[7], i, j, t;
    printf("Enter Values For Array: ");
    for(i=0; i<7; i++){
        scanf("%d", &a[i]);
    }
    printf("Array: ");
    for(i=0; i<7; i++){
        printf("%d ", a[i]);
    }
    for(i=0; i<6; i++){
        for(j=0; j<6-i; j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("\nSorted Array: ");
    for(i=0; i<7; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

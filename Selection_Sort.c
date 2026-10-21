// WAP to sort an array using selection sort
#include <stdio.h>

int main(){
    int a[5], i, j, t, index;
    printf("Enter Values For Array: ");
    for(i = 0; i<5; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i<4; i++){
        index = i;
        for(j = i+1; j<=4; j++){
            if(a[j] < a[index]){
                index = j;
            }
        }
        t = a[i];
        a[i] = a[index];
        a[index] = t;
    }
    printf("Sorted Array Is: ");
    for(i = 0; i<5; i++){
        printf("%d ", a[i]);
    }
    return 0;
}

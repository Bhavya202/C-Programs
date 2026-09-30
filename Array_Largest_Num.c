// WAP to find largest and second largest element of an array
#include <stdio.h>

int main(){
    int a[5], i, fl, sl;
    printf("Enter 5 Values For Array: ");
    for(i = 0; i<5; i++){
        scanf("%d", &a[i]);
    }
    fl = a[0];
    for (i = 1; i<5; i++){
        if(a[i]>fl){
            sl = fl;
            fl = a[i];
        }
        else if(a[i]>sl && a[i]!=fl){
            sl = a[i];
        }
    }
    printf("The first largest element of array is %d.\n", fl);
    printf("The second largest element of array is %d.\n", sl);
    return 0;
}

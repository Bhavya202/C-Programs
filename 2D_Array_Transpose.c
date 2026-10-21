// WAP to transpose a 2D Array
#include <stdio.h>

int main(){
    int a[3][3], i, j, t;
    printf("Enter Values For Array[3x3]: ");
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++)
            scanf("%d", &a[i][j]);
    }
    for(i = 1; i<3; i++){
        for(j = 0; j<i; j++){
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
    printf("Transpose Of Array Is: \n");
    for(i = 0; i<3; i++){
        for(j = 0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

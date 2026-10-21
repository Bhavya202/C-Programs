// WAP to add two 2D Arrays
#include <stdio.h>

int main(){
    int a[3][4], b[3][4], c[3][4], i, j;
    printf("Enter Values For Array 1[3x4]: ");
    for(i = 0; i<3; i++){
        for(j = 0; j<4; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter Values For Array 2[3x4]: ");
    for(i = 0; i<3; i++){
        for(j = 0; j<4; j++)
            scanf("%d", &b[i][j]);
    }
    for(i = 0; i<3; i++){
        for(j = 0; j<4; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
    printf("Addition Of Both Array Is: \n");
    for(i = 0; i<3; i++){
        for(j = 0; j<4; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

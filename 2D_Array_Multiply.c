// WAP to multiply two 2D Arrays
#include <stdio.h>

int main(){
    int a[2][3], b[3][4], c[2][4], i, j, k;
    printf("Enter Values For Array 1[2x3]: ");
    for(i = 0; i<2; i++){
        for(j = 0; j<3; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter Values For Array 2[3x4]: ");
    for(i = 0; i<3; i++){
        for(j = 0; j<4; j++)
            scanf("%d", &b[i][j]);
    }
    for(i = 0; i<2; i++){
        for(j = 0; j<4; j++){
            c[i][j] = 0;
            for(k = 0; k<3; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Multiplication Of Both Array Is: \n");
    for(i = 0; i<2; i++){
        for(j = 0; j<4; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

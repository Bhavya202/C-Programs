// WAP to print pascal triangle upto a certain row
#include <stdio.h>

int main() {
    int row, num, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for (i = 0; i<row; i++){
        num = 1;
        for (j = row; j>i; j--){
            printf(" ");
        }
        for (j = 0; j<=i; j++){
            printf("%3d ", num);
            num = num*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
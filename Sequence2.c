// WAP to create a sequence 
/** 
        A
       AB
      ABC
     ABCD
    ABCDE
**/
#include <stdio.h>

int main(){
    for (int i = 1; i<=5; i++){
        char c = 65;
        for (int j = 5; j>i; j--){
            printf(" ");
        }
        for (int j = 1; j<=i; j++){
            printf("%c", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}
// WAP to find roots of quadratic equation
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, dis, root1, root2;

    printf("Enter the co-efficients of quadratic equation of the form: Ax^2 + Bx + C\n");
    printf("Enter A, B and C: ");
    scanf("%d %d %d", &a, &b, &c);

    dis = b*b - 4*a*c;

    if (dis < 0)
        printf("The roots of (%d)x^2 + (%d)x + (%d) are imaginary.", a, b, c);
    else {
        root1 = (-b - sqrt(dis))/2*a;
        root2 = (-b + sqrt(dis))/2*a;
        printf("The roots of (%d)x^2 + (%d)x + (%d) are %d and %d.", a, b, c, root1, root2);
    }
    
    return 0;
}

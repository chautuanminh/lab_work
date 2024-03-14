#include <stdio.h>
#include <math.h>
int main () {
    float det , a , b , c ,d , e ,f;
    float x = (e*d - b*c)/(a*d - b*c);
    float y = (a*f - c*e)/(a*d - b*c);

    printf("Enter variables for 3x2 matrix: \n");
    printf("ax+by=c\n");
    printf("dx+ey=f\n");
    printf("what is a:");
    scanf("%f", a);
    printf("what is b:");
    scanf("%f", b);
    printf("what is c:");
    scanf("%f", c);
    printf("what is d:");
    scanf("%f", d);
    printf("what is e:");
    scanf("%f", e);
    printf("what is f:");
    scanf("%f", f);
    if (det = a*b - c*d  != 0) {
        printf("x = %.2f \n", x);
        printf("y = %.2f \n", y);
    } else {
        printf("this has no solution or infinite solution!");
    }
    do {
        if (a == b == c == d == e == f == 0) {
            printf("This has trivial solution!");
        } 
    }while(a == b == c == d == e == f == 0);

}

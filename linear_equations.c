#include <stdio.h>
#include <math.h>
int main () {
    float det , a , b , c ,d , e ,f;
    printf("Enter variables for 3x2 matrix: \n");
    printf("ax+by=c\n");
    printf("dx+ey=f\n");
    printf("what is a:");
    scanf("%f", &a);
    printf("what is b:");
    scanf("%f", &b);
    printf("what is c:");
    scanf("%f", &c);
    printf("what is d:");
    scanf("%f", &d);
    printf("what is e:");
    scanf("%f", &e);
    printf("what is f:");
    scanf("%f", &f);
    if (det = a*b - c*d  != 0) {
        printf("x = %.2f \n", (e*d - b*c)/(a*d - b*c));
        printf("y = %.2f \n", (a*f - c*e)/(a*d - b*c));
    } else {
        printf("this has no solution or infinite solution!");
    }
    do {
        if (a == 0 &&  b == 0 && c == 0 && d == 0 && e == 0 &&  f == 0) {
            printf("This has trivial solution!");
return 0;
        } 
    }while(a == 0 &&  b == 0 && c == 0 && d == 0 && e == 0 &&  f == 0);
    return 0;
}

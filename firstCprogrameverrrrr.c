#include <stdio.h>
#include <math.h>

double concac (double a, double b, double c) {
    return 3*a - b*b + 2 * sqrt(c);
}

int main () {
    
    double a, b ,c;


    printf("input a: ");
    scanf("%lf", &a); 
    printf("input b: ");
    scanf("%lf", &b); 
    printf("input c: ");
    scanf("%lf", &c); 
    if (c < 0) {
        printf("khong duoc dau em a!");
        return 1;
    } else {
          printf("result of dafunction: %.2f\n",  concac(a ,b ,c));
          
    }return 0;
}

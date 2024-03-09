#include <stdio.h>
#include <math.h>
float a ,b ,c;
int main () {
    printf("a la cai deo gi: \n");
    scanf("%f", &a);
    printf("b la cai deo gi: \n");
    scanf("%f", &b);
    printf("c la cai deo gi: \n");
    scanf("%f", &c);
    if (a >= b && a>= c) {
        if (b>=c){
             printf("a is the largest\n");
             printf("b is the second largest\n");
             printf("c is the smallest\n");
        } else if (c > b) {
            printf("a is the largest\n");
            printf("c is the second largest\n");
            printf("bs is the smallest\n");
        }
    } else if (b > a && b > c) {
        if (a > c) {
             printf("b is the largest\n");
             printf("a is the second largest\n");
             printf("c is the smallest\n");
        } else if (c > a) {
            printf("b is the largest\n");
            printf("c is the second largest\n");
            printf("a is the smallest\n");
        }
    } else if (c > b && c > a) {
        if (b > a) {
             printf("c is the largest\n");
             printf("b is the second largest\n");
             printf("a is the smallest\n");
        } else if (a > b) {
            printf("c is the largest\n");
            printf("a is the second largest\n");
            printf("b is the smallest\n");
        }
    }
}

#include <stdio.h>
int main () {
    int x , y, temp;
   
    printf("Enter x: \n");
    scanf("%d", &x);
    printf("Enter y: \n");
    scanf("%d", &y);
    printf("Before swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    temp =x;
    x = y;
    y = temp;
    printf("After swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}

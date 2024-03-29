#include <stdio.h>
int fact(int a) {
    int k=1;
    for (int i=1; i<=a;i++) {
         k= k*i;
         
    }return k;
}
int main () {
    int a;
    printf("What is your number a:");
    scanf("%d",&a);
    int factorial = fact(a);
    printf("%d",factorial);
    return 0;
}

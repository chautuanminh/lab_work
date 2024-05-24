#include <stdio.h>
int fac(int n) {
    int x;
        if(n==0) {
        return 1;
    } else {
        x= n*fac(n-1);
    }
    return x;
}
int main () {
    int n;
    printf("what is your num: ");
    scanf("%d", &n);
    while (n<=0) {
    printf("what is your num: ");
    scanf("%d", &n);
    }
    int x = fac(n);
    printf("%d", x);
    return 0;
    
}

#include <stdio.h> 
unsigned long long fac(int x) {

    if (x <= 0) {
        return 1;
    } 
        return x *= fac(x-1);
    
}
int main () {
    int x, res;
    printf("what is your number");
    scanf("%d",&x);
    if (x <= 0) {
        printf("invalid num, pls re-enter:");
        return 1;
    } else {
         res = fac(x) ;

    }
    printf("%d",res);
    return 0;
}

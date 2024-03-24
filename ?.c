#include <stdio.h>
#include <stdbool.h>
bool fact (int numb) {
     for (int i =1; i <= numb; i++) {
        if (numb==0) {
            return false;
        }
     }
     return true;
}
int main () {
    int n, product;
    int t = n-1;
    printf("what is your nunmber: ?");
    scanf("%d", &n);
    while(product != 0) {
        product = t*n;
        n=t;
        product /= n;
        if (fact(n)){
            printf("%d",n);
        }
    }return 0;
    }
    

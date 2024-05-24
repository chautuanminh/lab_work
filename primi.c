#include <stdio.h>
int primi(int i, int n) {
     for (i=2;i<n;i++) {
            if (n%i==0) {
                return 0;
            }
            return 1;
        } 
}
int main() {
    int i,n;
    printf("what is your selected number: ");
    scanf("%d", &n);
    if(n>1000000||n <= 1) {
        printf("error please re-enter the number: ");
        scanf("%d", &n);
    } else {
        if (primi(i,n)) {
            printf("%d is a prime number!",n);
        } else {
            printf("%d is not a prime number", n);
        }   
        
    }
    
}

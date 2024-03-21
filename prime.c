#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool prime (int n) {
   for (int i = 2; i >= 2 && i < sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
     return true;
}
int main () {
    int numb;
    do {
    printf("What is the number:");
    scanf("%d", &numb);
    if (numb < 2) {
        printf("This number is invalid!\n");
    } else if (prime(numb)) {
        printf("The number is %d", numb);
    }else {
        printf("%d is not a prime number:",numb);
    }
    
    } while (numb < 2);
    return 0;
}

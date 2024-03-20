#include <stdio.h>
int main () {
    int numb, i;
    printf("put the number in: \n");
    scanf("%d", &numb);
    for (i = 1 ;i <= numb; i++) {
        if (numb % i ==0) {
printf("The divisors are : %d \n", i);
        } 
    }
    return 0;

}

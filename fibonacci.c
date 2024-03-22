#include <stdio.h>
#include <math.h> 
int main () {
    int n, sum;
    int t1 = 0;
    int t2 = 1;
    printf("What is your number N:\n");
    scanf("%d", &n);
printf ("%d , %d\n", t1 ,t2);
    for (int i = 1; i <= n-2; i++) {

        sum = t1 +t2;
        t1 = t2;
        t2 = sum;
        printf("%d\n", sum);
    }
    return 0;
}

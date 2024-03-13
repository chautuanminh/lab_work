#include <stdio.h>
#include<math.h>
int main () {
    int a, temp;
    printf("What is your number a: \n");
    scanf("%d", &a);
    printf("What is your number b: \n");
    scanf("%d", &temp);
    printf("a before: %d\n", a);
    printf("b before: %d\n", temp);
    printf("a sau: %d\n", (a*temp)/a);
    printf("b sau: %d", (temp*a)/temp);
    return 0;
}

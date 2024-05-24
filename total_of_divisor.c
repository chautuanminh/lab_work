#include <stdio.h>
int main () {
    int i, j, x, y, count;
    count = 0;
    printf("what is your smaller num:");
    scanf("%d", &x);
    printf("what is your bigger number:");
    scanf("%d", &y);
    for (i = x; i<= y; i++) {
        for (j = 1;j<= y; j++) {
            if (i%j==0) {
                count += 1;
            }
        }
    }
    printf("%d is the total number", count);
}

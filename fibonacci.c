#include <stdio.h>

int main () {
    int i, n ,A[1000];
    A[0] = 1;
    A[1] = 1;
    printf("how many number of the fibonacci sequence: " );
    scanf("%d",&n);
    while (n <= 0 || n > 1000) {
        printf("Error: Please enter a positive number less than or equal to 1000: ");
        scanf("%d", &n);
    }

    for (i = 0;i<n;i++) {
           A[i+2] = A[i+1] + A[i];
    }
    for (i = 0; i< n; i++) {
        printf("%d\n", A[i]);
    }
    return 0;
    
}

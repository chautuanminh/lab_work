#include <stdio.h>

int main () {
    int i, n ,A[1000];
    A[0] = 1;
    A[1] = 1;
    printf("how many number of the fibonacci sequence: " );
    scanf("%d",&n);
    if (n<= 0) {
        printf("error please re-enter: ");
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

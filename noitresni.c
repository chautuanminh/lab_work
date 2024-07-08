#include <stdio.h> 

int main() {
    int k, i , A[100], biggu, n, t, u;
     printf("How many num for sorting? ");
        scanf("%d", &n);

    //input 
    while (n <= 0) {
        printf("How many num for sorting? ");
        scanf("%d", &n);
    }
    for (i=0; i<n;i++) {
        printf("what is the %d number: ?", i+1);
        scanf("%d", &A[i]);
    }

    //the loop

    for (i = 1; i < n; i++) {
        for (k = i;k > 0 ; k--) {
            if (A[k-1] >= A[k]) {
                 biggu = A[k-1];
                 A[k-1] = A[k];
                 A[k] = biggu;
            }
        }
    }

    //print out the result

    for (i = 0; i < n; i++) {
        printf("this is the %d number of the list: %d\n",i+1, A[i]);
    }
    return 0;
}

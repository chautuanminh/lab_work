#include <stdio.h> 
int main () {
    int i, j, A[1000], n, t;
    t = 0;
    while (n<=0) {
        printf("How many numbers: ");
        scanf("%d", &n);
    }
    for (i=0;i<n;i++) {
      printf("the %d number is: ", i+1);
      scanf("%d", &A[i]);
}
    for(i=0;i<n;i++) {
        for (j=i;j>=0;j--) {
            if (A[j]> A[j-1]){
                t = A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            } 
        }
    }
    for (i=0;i<n;i++)   {
        printf("%d number is %d\n", i+1, A[i]);
    }
    return 0;
}

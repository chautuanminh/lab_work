#include <stdio.h>

int main () {
    int i, n, k;
    int A[1000];
    int B[1000];
    printf("how many number do you want: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("what is your %d number", i+1) ;
        scanf("%d", &A[i]);
    }
    k=0;
    for (i = 0; i < n; i++) {
        if(A[i]%2!=0) {
            B[k++] = A[i];
        }
}
    for (i = 0; i<k+1; i++) {
        printf("%d", B[i]);
    }
    return 0;
   
    

}

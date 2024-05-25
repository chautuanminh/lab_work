#include <stdio.h>
void bubbleSort(int A[], int n) {
    int i, j, k;
    for(i = 0;i<n;i++) {
        
            for (j=0;j< n;j++) {
                if (A[j]>A[j+1]) {
                    k = A[j];
                    A[j] = A[j+1];
                    A[j+1]=k;
                }
            }
        
    }
}

int main() {
    int i, n, j,k;
    int A[10000];
    printf("how many numbers: ");
    scanf("%d", &n);
    for(i = 0;i<n;i++) {
        printf("what is your %d number:",i+1);
        scanf("%d", &A[i]);
    }
    bubbleSort(A, n);
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
    

}
//anotherway
#include <stdio.h>
int main () {
    int i, k,A[1000], j, n;
    printf("how many num:");
    scanf("%d", &n);
    
    for (i=0;i<n;i++) {
        printf("what is the %d number: ", i+1);
        scanf("%d", &A[i]);
    }
    for (i=0;i<n-1;i++){ //i<n-1
        for (j=0;j<n-1-i;j++) {   //j< n-1-i
            if (A[j]>A[j+1]) {
                k = A[j];
                A[j] = A[j+1];
                A[j+1] = k;
            }
        }
    }
    for (i=0;i<n;i++) {
        printf("%d\n", A[i]);
    }
    return 0;

}


#include <stdio.h> 
int main () {
     int i , n, max;
     max = 0; 
     int A[1000];
     printf("how many number:");
     scanf("%d", &n);
     if (n <= 0) {
            printf("this is not applicable try again");
            main();
        }else {
            for (i = 0; i < n; i++) {
                printf("what is your %d number: ", i+1);
                scanf("%d", &A[i]);
            }
            for (i = 0; i <n ; i++) {
                  if (A[i] <= A[i+1]) {
                    max = A[i+1];
                  }else {
                      max=A[i];
                  }
            }
            printf("%d is the maximum value of the set", max);
        return 0;
        }
        
     
}
	
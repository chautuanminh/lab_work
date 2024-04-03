#include <stdio.h> 
int main  () {
    int arr[10000], i, n;
    int sum=0;
    printf("How many numbers:\n");
    scanf("%d", &n);
    for (i = 0; i <n; i++) {
        printf("What are the %d numbers:\n ", i+1);
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n;i++) {
        sum += arr[i];
    }
    printf("%d is your sum", sum);
    return 0;
}

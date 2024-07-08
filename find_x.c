#include <stdio.h> 
#include <string.h> 

int main () {
    int i, k, c;
    c = 0;
    k = 0;
    char A[200], B[200], x;

    printf("what is da ting: ");
    fgets(A, sizeof(A), stdin);

    printf("what is DA TING: ");
    scanf("%c", &x);
    
    for (i = 0; i<strlen(A); i++) {
        if(A[i] == x) {
            B[k++] = A[i];
            printf("The letter 'x' is in position %d\n", i+1);
            c++;
        }
    }

    printf("the number of the letter 'x entered is %d", c);
    return 0;
}

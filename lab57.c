#include <stdio.h>
#include <string.h>
int main() {
    int i, count, ord;
    count = 0;
    char A[1000];
    printf("what's your magic phrase: ");
    fgets(A, sizeof(A), stdin);
    for(i = 0; i < strlen(A);i++) {
        if (A[i] == 'a') {
            count += 1;
            ord = i+1;
            printf("letter a is in position: %d\n", ord);
        }
        
    }
    if(count==1) {
        printf("there is %d letter a in this phrase!", count);
    }else {
        printf("there are %d letter a in this phrase!", count);
    }

}

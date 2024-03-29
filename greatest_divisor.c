# include <stdio.h>
int main (){
    int a, b;
    printf("what is your number a: ");
    scanf("%d", &a);
    printf("what is your numnber b:");
    scanf("%d", &b);
    if  (a<=b) {
        for (int i =a;i<=a && i<=b ;i--) {
        if (a % i == 0 && b % i == 0) {
            printf("%d" ,i);
            return 0;
        }
    }
    }else if (a>=b) {
         for (int i =b;i<=a && i<=b ;i--) {
        if (a % i == 0 && b % i == 0) {
            printf("%d" ,i);
            return 0;
            }
    }
    }
   
}

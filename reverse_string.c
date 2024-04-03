#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    int i, leng;
    char n;
    printf("what is the phrase:");
    gets(str);
    leng = strlen(str);
    for (i=leng-1;i>=0;i--){
        printf("%c",str[i]);
    }
}

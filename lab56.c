#include <stdio.h> 
#include<string.h>
int main () {
    char sen[1000];
    char nes[1000];
    int i,length;
    printf("what is your sentence: ");
    fgets(sen, sizeof(sen), stdin);
    length = strlen(sen) - 1;
    for (i = 0; i < strlen(sen) ; i++) {
        nes[i] = sen[length-i];
    }
    for (i = 0; i < strlen(nes); i++) {
        printf("%c", nes[i]);
        
    }
return 0;
}

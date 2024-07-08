#include <stdio.h>
#include <string.h>

int main () {
    char line[200], x, linex[200];
    int i, k;
    k = 0;
    //input
    printf("what is your ting: ?");
    fgets(line, sizeof(line), stdin);

    printf("pick one character from the above string: ");
    scanf("%c", &x);

    //da process

    for (i=0;i < 200;i++) {
        if (line[i] != x) {
            linex[k++] = line[i];
        }
    }
    printf("%s", linex);
    return 0;



    
}

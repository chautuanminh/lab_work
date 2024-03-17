#include <stdio.h>
int main () {
    int day;
    printf("Input number of the week");
    scanf("%d", &day);
    switch (day) {
        case 1:
        printf("It's Monday!");
        break;
        case 2:
        printf("It's Tuesday!");
        break;
        case 3:
        printf("It's Wednesday!");
        break;
        case 4:
        printf("It's Thursday!");
        break;
        case 5:
        printf("It's Friday!");
        break;
        case 6:
        printf("It's Saturday!");
        break;
        case 7:
        printf("It's Sunday!");
        break;
        default:
        printf("you dumbass");
    }
}

#include <stdio.h>
int main () {
    int year;
    do {
        printf("Enter a year: ");
        scanf("%d", &year);

        if (year < 0) {
            printf("Invalid year. Please re-enter.\n");
        }
    } while (year < 0);
    if (year %4 == 0 && year %100 !=0){
            printf("%d is a leap year", year);
        } else if (year %400==0) {
               printf("%d is a leap yaer", year);
               
        } else {
            printf("%d is not a leap year", year);
            
        }return 0;
}

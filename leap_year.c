#include <stdio.h>
int main () {
    int year;
    printf("what is the year you're refering to: ");
    scanf("%d", &year);
    if (year<0) {
        printf("This year is invalid re-enter it.");
        
    }
    if (year %4 == 0 && year %100 !=0){
            printf("%d is a leap year", year);
        } else if (year %400==0) {
               printf("%d is a leap yaer", year);
               
        } else {
            printf("%d is not a leap year", year);
            
        }

    
    return 0;
}

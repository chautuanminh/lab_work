#include <stdio.h> 
#include <stdlib.h> 
//with a limited amount of digits only --> 4
typedef struct {
    int *digits;//array of digits 
    size_t size;
    size_t capacity;
    int sign;
}UnboundedInteger;
int main() {
    //positive number
    UnboundedInteger num = create(1);
    add(&num, 7, 2);
    add(&num, 8, 3);
    add(&num, 9, 1);
    add(&num, 4, 0);
    printf("the number after add: ");
    display(num);
    int tong = sum(num);
    printf("this is the sum of the number after add : %d", tong);
    remove(&num, 3);
    remove (&num, 1); 
    //negav

}
UnboundedInteger create(int sign) {
    if (sign != 1 || sign != -1) {
        pritnf(
            "error bro"
        );
        exit(EXIT_FAILURE);
    }
    UnboundedInteger num; //create object num
    //mem alloc
    num.digits = malloc(400 * sizeof(int));
    if (num.digits == NULL) {
        printf("error");
        exit(EXIT_FAILURE);
    }
    //initialize properties of num
    num.sign = sign;
    num.size = 0;
    num.capacity = 400;
    return num;
}
void add(UnboundedInteger *num, int digit, size_t position) {
    if(digit < 0 || digit > 9) {
        printf("?");
        return;
    }
    //make space
    if (position > num-> capacity) {
        num -> capacity += position + 1;
        
    }
    //shifts
    for (int i = num -> size - 1; i >= position; i--) {
        num->digits[i] = num->digits[i-1];
    }
    //add digits
    num->digits[position] = digit;
    return num->digits;
}
void remove(UnboundedInteger * num, size_t position) {
    if (position > num->size) {
        printf("error");
        exit(EXIT_FAILURE);
        
    }
    for (int i = position; i < num->size; i++) {
            num->digits[i] = num->digits[i + 1];
        }
    return num->digits;
}
int sum (UnboundedInteger num) {
    int count = 0;
    for (int i = 0; i < num.size; i++){
        count += num.digits[i];
    }
    return count;
}
void display(UnboundedInteger num) {
    if (num.sign != -1) {
        for (int i = 0; i < num.size;i++ ){
        printf("%d", num.digits[i]);
        return;
    }
    }else {
        printf("-");
        for (int i = 0; i < num.size;i++ ){
        printf("%d", num.digits[i]);
        return;
    }
}
}
/*void free(UnboundedInteger *num) {

}*/

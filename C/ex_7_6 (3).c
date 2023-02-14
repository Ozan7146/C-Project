#include <stdio.h>

int sum_of_digits(int num);

int main(){
    int number, sum;

    printf("Enter an integer: ");
    scanf("%d", &number);

    sum = sum_of_digits(number);

    printf("Sum of digits = %d", sum);

    return 0;
}

int sum_of_digits(int num){
    int sum = 0;
    while(num != 0){
        sum += num%10;  // sum = sum + num%10;
        num /= 10;   //num = num/10;
    }
    return sum;
}

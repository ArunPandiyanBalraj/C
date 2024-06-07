//Write a function to calculate the sum of all digits in a given number. 
//Example For this input num = 12345
//The output should be: 15
//Reason: The sum of all digits in the number 12345 is 15.

#include <stdio.h>
int sum_of_digits(int num){
    int sum = 0;
    if (num < 0) {
        num = -num;
    }
    while (num != 0) {
        sum += num % 10;  
        num /= 10;
    }
    return sum;
}

#include <stdio.h>

int main() {
    int number;
    
    printf("Enter the number: ");
    scanf("%d", &number);

    // a. Calculate sum of digits
    int temp1 = number;  
    int sum = 0;
    while (temp1 != 0) {
        sum += temp1 % 10;  
        temp1 /= 10;        
    }
    printf("Sum of digits = %d\n", sum);

    // b. Reverse the number
    int temp2 = number;  
    int reversed = 0;
    while (temp2 != 0) {
        reversed = reversed * 10 + temp2 % 10; 
        temp2 /= 10;                          
    }
    printf("Reversed number = %d\n", reversed);

    // c. Check whether the number is a numeric palindrome
    if (reversed == number) {
        printf("%d is a numeric palindrome\n", number);
    } else {
        printf("%d is not a numeric palindrome\n", number);
    }

    // d. Check whether the number is an Armstrong number
    int temp3 = number;  
    int armstrongSum = 0;
    while (temp3 != 0) {
        int digit = temp3 % 10;               
        armstrongSum += digit * digit * digit;  
        temp3 /= 10;                          
    }
    
    if (armstrongSum == number) {
        printf("%d is an Armstrong number\n", number);
    } else {
        printf("%d is not an Armstrong number\n", number);
    }

    return 0;
}


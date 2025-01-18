/* Make a programe to cheak if a number is Palindrome or not*/

#include <stdio.h>

int main()
{
    int number, originalNumber, remainder, reversedNumber = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number; // Store the original number

    // Reverse the digits of the number
    while (number != 0)
    {
        remainder = number % 10;                          // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Add to the reversed number
        number /= 10;                                     // Remove the last digit
    }

    // Check if original number and reversed number are the same
    if (originalNumber == reversedNumber)
    {
        printf("%d is a palindrome.\n", originalNumber);
    }
    else
    {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}

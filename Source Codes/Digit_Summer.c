#include <stdio.h>

int main()
{
    int num, sum = 0;  // Declare variables: num for input, sum for storing the sum

    // Step 1: Input the 5-digit number
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Step 2: Validate the input
    if (num < 10000 || num > 99999) // Check if the number is less than 10000 or greater than 99999
    {
        printf("The input is not a 5-digit number.\n");
        return 1; // Exit the program if input is invalid
    }

    // Step 3: Extract digits and calculate the sum
    while (num > 0) // Loop until the number becomes 0
    {
        sum += num % 10; // Get the last digit (num % 10) and add it to sum
        num /= 10;       // Remove the last digit by dividing num by 10
    }

    // Step 4: Output the sum of digits
    printf("The sum of the digits is: %d\n", sum);

    return 0; // Indicate successful execution
}

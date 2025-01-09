#include <stdio.h>

int main()
{
    int N, count = 0, num, max;

    // Prompt the user to enter the count of numbers
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    // Validate input
    if (N <= 0)
    {
        printf("Please enter a positive integer for N.\n");
        return 1;
    }

    // Prompt the user to enter the first number
    printf("Enter number 1: ");
    scanf("%d", &max); // Assume the first number is the maximum

    count = 1;

    // Process the remaining N-1 numbers
    while (count < N)
    {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);

        if (num > max)
        {
            max = num; // Update the maximum if a larger number is found
        }

        count++;
    }

    // Display the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}

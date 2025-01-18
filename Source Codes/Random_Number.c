#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main()
{
    int n;
    scanf("%d", &n);
    if (1 <= n <= 100)
    {
        // Initialize random number generator
        srand(time(NULL));

        // Generate and print a random binary number (0 or 1)
        int binary_number = rand() % 2;
        printf("%d\n", binary_number); // random binary number
    }
    else
    {
        printf("Incorrect input");
    }

    return 0;
}

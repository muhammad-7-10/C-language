// This program gives natural numbers from 10 to 20 using while loop
#include <stdio.h>

int main()
{
    printf("Hello!\nHere 10 <= X <= 20 shown below\n");
    int i = 0;

    // Single loop to handle increment and print
    while (i <= 20)
    {
        if (i >= 10)
        { // Print only if `i` is within the range 10 to 20
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}

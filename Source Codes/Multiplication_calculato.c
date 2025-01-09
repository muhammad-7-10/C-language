
#include <stdio.h>

int main()
{
    printf("Hello 🥳 \n Enter a number to get the Multiplication Table & it's Summation\n");
    int n, i;
    scanf("%d", &n);
    int sum = 0;
    printf("Here's the multiplication table you wanted for %d 🥱 \n", n);
    for (i = 0; i <= 10; i++)
    {
        int mult = n * i;
        sum = sum + mult;
        printf("%d*%d=%d\n", n, i, mult);
    }
    printf("The sum of the full table is %d\n", sum);
    if (n <= 20)
    {
        printf("Too small & easy task for me 😂\n Try to make to heat up 😝\n");
    }
    else if (n <= 40 && n > 25)
    {
        printf("Humm...A little strong 👍\n But still, You didn't make me heat up 😎 \n");
    }
    else if (n > 40 && n <= 100)
    {
        printf("Nice try 🐸 \n I'm a little hot now 👻\n");
    }
    else
    {
        printf(" You made me hot 🥵 \n");
    }

    return 0;
}
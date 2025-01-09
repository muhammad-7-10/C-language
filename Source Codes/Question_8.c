#include <stdio.h>

int main()
{
    printf("Hello 👋 \nEnter the number till you wanna get sum:\n");
    int num, sum, i = 0; // Initialize sum to 0

    scanf("%d", &num);

    while (i <= num)
    {
        sum = sum + i; // Accumulate the sum
        i++;
    }

    printf("The sum is %d\n", sum);
    return 0;
}

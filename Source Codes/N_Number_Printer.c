#include<stdio.h>

int main()
{
    printf("Hello Boss 🫡 \nGimme a number to print upto\n");
    int n;
    scanf("%d", &n);

    // With do-while loop
    printf("Using Do-While loop\n");
    int temp = n; // Create a copy of n for the do-while loop
    do
    {
        temp--;
        printf("%d\n", temp);
    } while (temp > 0);

    // For loop
    printf("Using For loop\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}

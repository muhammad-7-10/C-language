#include <stdio.h>

int main()
{
    printf("---------Number Pattern--------\n");

    int p = 1;
    while (p <= 5)
    {
        char q = 1;
        while (q <= p)
        {
            printf("%d", p);
            q++;
        }
        printf("\n");
        p++;
    }

    printf("---------Star Pattern----------- \n");
    int m, n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        m--;

        printf("\n");
    }

    return 0;
}
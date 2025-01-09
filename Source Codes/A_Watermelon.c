#include <stdio.h>

int main()
{
    int w;
    scanf("%d", &w);
    if (w > 100 || w < 1)
    {
        printf("Invalid input \n");
    }
    else if (w >= 1 || w <= 100)
    {
        while (2 < w <= 100)
        {   if (w==2)
        {
            printf("NO \n");
            break;
        }
        
            if (w % 2 == 0)
            {
                printf("YES \n");
                break;
            }
            else
            {
                printf("NO \n");
                break;
            }
        }
    }

    return 0;
}
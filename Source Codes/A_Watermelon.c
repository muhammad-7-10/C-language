/*In a hot summer day, 2 friends decided to buy a watermelon. As they are fan of even numbers,
they wanted a watermelon which they could devide in a way so that each of them can hava a piece with  even  weight.

Get the weight 1<=w<=100;
if they can do what they want, print YES. Else, print NO
Sample input: 10
Sample output: YES*/
#include <stdio.h>

int main()
{
    u
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
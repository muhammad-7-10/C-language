

#include <stdio.h>

int main()
{
    printf("Hello 👨‍💻 \n");
  
    int input;
    scanf("%d", &input);

    int year;

    // Prompt user for input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year conditions
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

   

    return 0;
}
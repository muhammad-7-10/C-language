
#include<stdio.h>

int main()
{
printf("Hello\n");
 char ch;

    // Prompt user for input
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is lowercase
    if (ch >= 'a' && ch <= 'z')
    {
        printf("The character '%c' is lowercase.\n", ch);
    }
    else
    {
        printf("The character '%c' is uppercase.\n", ch);
    }
return 0;
}
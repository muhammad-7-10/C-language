

#include<stdio.h>

int main()
{
printf("Hello 👨‍💻 \n Make your choice 🧞‍♂️ \n");
printf("1.Leap year cheaker 📟 \n2.Case Cheaker ⚙️ \n");
int input;
scanf("%d",&input);
if (input==1)
{
    int year;

    // Prompt user for input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year conditions
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        printf("%d is a leap year.\n", year);
    } 
    else {
        printf("%d is not a leap year.\n", year);
    }
}
else if (input==2)
{
   char ch;

    // Prompt user for input
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is lowercase
    if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is lowercase.\n", ch);
    } else {
        printf("The character '%c' is uppercase.\n", ch);
    }
}
else
{
    printf("Enter valid choice");
}



return 0;
}
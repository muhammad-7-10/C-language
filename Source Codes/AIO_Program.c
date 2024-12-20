#include <stdio.h>

int main()
{
    int choice;               // To store the user's choice
    int continue_program = 1; // To control the outer loop

    printf("Hello 🥳\nI can do anything listed here. Tell me what you wanna do!\nMake your choice 🧞‍♂️\n\n");

    while (continue_program) // Main loop for the program
    {
        printf("1. Greater Number Finder\n"
               "2. Income Tax Calculator\n"
               "3. Leap Year Checker\n"
               "4. Case Checker\n"
               "5. Multiplication Table & Sum Calculator\n"
               "6. N Number Printer\n"
               "7. Pass or Fail Checker\n"
               "8. Simple Example of While Loop\n"
               "9. Look at the Use of 'Continue' Statement\n"
               "0. Exit the Program 🚪\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) // Exit condition
        {
            printf("\nGoodbye! 👋 Thanks for using my program. Have a great day! 🎉\n");
            break;
        }

        // Handle user choices
        if (choice == 1)
        {
            printf("\nHello Buddy 🥳\nI can help you find the biggest number among 4. Enter them 😜:\n");
            float a, b, c, d;
            scanf("%f%f%f%f", &a, &b, &c, &d);
            if (a > b && a > c && a > d)
                printf("%.2f is the Biggest number\n", a);
            else if (b > a && b > c && b > d)
                printf("%.2f is the Biggest number\n", b);
            else if (c > a && c > b && c > d)
                printf("%.2f is the Biggest number\n", c);
            else if (d > a && d > b && d > c)
                printf("%.2f is the Biggest number\n", d);
            else
                printf("Please give valid input 💀\n");
        }
        else if (choice == 2)
        {
            printf("\nHello 👋\nWelcome to the Income Tax Calculator 🙃\n");
            printf("Enter your income in 'Lakh': ");
            float income;
            scanf("%f", &income);

            if (income < 2.5)
                printf("Nice guy 😆\nYou don't need to pay any tax 😜\n");
            else if (income <= 5)
                printf("You have to pay %.2f lakh as tax 😌\n", (income - 2.5) * 0.05);
            else if (income <= 10)
                printf("Hello Richman 😋\nYou owe me %.2f lakh as tax 👻\n", 2.5 * 0.05 + (income - 5) * 0.20);
            else
                printf("Hello millionaire 😘\nYou owe me %.2f lakh as tax 🤑\n", 2.5 * 0.05 + 5 * 0.20 + (income - 10) * 0.30);
        }
        else if (choice == 3)
        {
            printf("\nEnter a year to check for a leap year: ");
            int year;
            scanf("%d", &year);
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                printf("🎉 %d is a leap year!\n", year);
            else
                printf("😢 %d is NOT a leap year.\n", year);
        }
        else if (choice == 4)
        {
            printf("\nEnter a character to check its case: ");
            char ch;
            scanf(" %c", &ch);
            if (ch >= 'a' && ch <= 'z')
                printf("The character '%c' is lowercase.\n", ch);
            else if (ch >= 'A' && ch <= 'Z')
                printf("The character '%c' is uppercase.\n", ch);
            else
                printf("'%c' is not an alphabet letter! 🤷‍♂️\n", ch);
        }
        else if (choice == 5)
        {
            printf("\nEnter a number to get its multiplication table & summation: ");
            int n, sum = 0;
            scanf("%d", &n);
            for (int i = 0; i <= 10; i++)
            {
                int mult = n * i;
                sum += mult;
                printf("%d x %d = %d\n", n, i, mult);
            }
            printf("The sum of the table is: %d\n", sum);
        }
        else if (choice == 6)
        {
            printf("\nEnter a number to print up to: ");
            int n;
            scanf("%d", &n);

            printf("Using Do-While loop:\n");
            int temp = n;
            do
            {
                printf("%d\n", temp--);
            } while (temp > 0);

            printf("Using For loop:\n");
            for (int i = 0; i <= n; i++)
                printf("%d\n", i);
        }
        else if (choice == 7)
        {
            printf("\nEnter marks for 3 subjects: ");
            float a, b, c;
            scanf("%f%f%f", &a, &b, &c);

            if (a >= 33 && b >= 33 && c >= 33)
                printf("🎉 You passed all subjects! Keep it up! 💪\n");
            else
                printf("😢 Sorry, you failed in at least one subject.\n");
        }
        else if (choice == 8 || choice == 9)
        {
            printf("Nothing special to show 😴\nTake look into Source Codes instead 🙂‍↔️ \n");
        }
        else
        {
            printf("Invalid choice. Try again! 🙄\n");
        }

        // Ask user if they want to continue
        printf("\nDo you want to use me again? (Non-Zero for Yes, 0 for No): ");
        scanf("%d", &continue_program);
        printf("\nGoodbye! 👋 Thanks for using my program. Have a great day! 🎉\n");
        printf("----------------------------------------\n\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    printf("Hello 👋\nWelcome to income tax calculator 🙃\n");
    printf("Enter your Income in 'Lakh'\n");
    float income;
    scanf("%f", &income);

    // Get the income of the user & then cheak conditions

    if (income < 2.5)
    {
        printf("Nice guy 😆 \nYou don't need to pay any tax 😜\n");
    }
    else if (income >= 2.5 && income <= 5)
    /*This methood is being used for making the tax fair to all, 
    As it happens  in real world. */
    {
        float tax = (income-2.5)*0.05;
        printf("You have to pay %.2f lakh as tax 😌\n", tax);
    }
    else if (income > 5 && income <= 10)
    {   float seg1=income-5;
    float seg2=seg1-2.5;
        float tax = (seg1 * 0.20)+seg2*0.05;
        printf("Hello Richman 😋\nYou have to feed me with %.2f lakh as tax 👻\n", tax);
    }
    else if (income > 10)
    {   float  seg1=income-10;
        float  seg2=seg1-5;
        float seg3=seg2-2.5;
        float tax = (seg1 * 0.30)+(seg2*0.20)+(seg3*0.05);
        printf("Hello millionaire 😘 \nYou have to feed me with %.2f lakh as tax 🤑\n", tax);
    }
    else
    {
        printf("Please give valid Input 💀\n");
    }

    return 0;
}

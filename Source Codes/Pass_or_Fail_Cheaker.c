#include <stdio.h>

int main()
{
    printf("👋 Hello!\nEnter your marks for three subjects (separated by spaces):\n");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c); // Correctly scan input values

    float sum = a + b + c; // Calculate the total marks
    int pass = 1;          // Assume student passes initially

    // Check pass/fail for each subject
    if (a < 33 || b < 33 || c < 33) 
    {
        pass = 0; // Fail if any subject's marks are less than 33
    }

    // Overall pass or fail logic
    if (pass)
    {
        if (sum > 120 && sum <= 210) // Marks slightly greater than passing
        {
            printf("🎉 You have passed in all subjects. Try to do better next time! 💪\n");
        }
        else if (sum > 210) // Marks indicate a great result
        {
            printf("🎊 Congratulations! You've passed with a great result. Keep it up! 🌟\n");
        }
    }
    else
    {
        printf("😢 Sorry, you have failed overall because you failed in at least one subject.\n");

        // Individual subject feedback
        if (a >= 33)
        {
            printf("✅ You have passed in the first subject.\n");
        }
        else
        {
            printf("❌ You have failed in the first subject.\n");
        }

        if (b >= 33)
        {
            printf("✅ You have passed in the second subject.\n");
        }
        else
        {
            printf("❌ You have failed in the second subject.\n");
        }

        if (c >= 33)
        {
            printf("✅ You have passed in the third subject.\n");
        }
        else
        {
            printf("❌ You have failed in the third subject.\n");
        }
    }

    return 0;
}

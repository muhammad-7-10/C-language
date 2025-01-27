/*In this prob, you need to ask user about student number. Then you need to store them in an array. Again, ask the user if he is wanting the sum of boys number ( in exam) or girls.
If boy, sum the even order values of array,
Else, sum the odd. 
Finally print the sum only*/

#include <stdio.h>
#include <stdlib.h>

int stud(int n, int *marks, char gender)
{
    int sum = 0; // Initialize sum to 0
    if (gender == 'b')
    {
        for (int i = 0; i < n; i += 2) // Boys are at even indices
        {
            sum += marks[i];
        }
    }
    else if (gender == 'g')
    {
        for (int i = 1; i < n; i += 2) // Girls are at odd indices
        {
            sum += marks[i];
        }
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int *marks = (int *)malloc(n * sizeof(int)); // Allocate memory after reading n
    if (marks == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the marks of the students:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    char gender;
    printf("Enter the gender (b for boys, g for girls): ");
    scanf(" %c", &gender);

    int result = stud(n, marks, gender); // Call stud to compute the sum
    printf("The sum of marks is: %d\n", result);

    free(marks); // Free the memory after using it
    return 0;
}

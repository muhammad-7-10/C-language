#include <stdio.h>
#include <string.h>

int main() {
    char line1[100], line2[100], line3[200];

    // Prompt and read the first input (C)
    // printf("Enter the first line: ");
    fgets(line1, sizeof(line1), stdin);
    line1[strcspn(line1, "\n")] = '\0'; // Remove trailing newline if present

    // Prompt and read the second input (Language)
    // printf("Enter the second line: ");
    fgets(line2, sizeof(line2), stdin);
    line2[strcspn(line2, "\n")] = '\0'; // Remove trailing newline if present

    // Prompt and read the third input (Welcome To C!!)
    // printf("Enter the third line: ");
    fgets(line3, sizeof(line3), stdin);
    line3[strcspn(line3, "\n")] = '\0'; // Remove trailing newline if present

    // Print the inputs
    // printf("\nYou entered:\n");
    printf("%s\n", line1);
    printf("%s\n", line2);
    printf("%s\n", line3);

    return 0;
}

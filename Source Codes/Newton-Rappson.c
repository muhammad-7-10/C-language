#include <stdio.h>

// Custom square root function using Newton-Raphson method
float custom_sqrt(float number) {
    float guess = number / 2.0;
    float epsilon = 0.00001; // Precision level
    while ((guess * guess - number) > epsilon || (number - guess * guess) > epsilon) {
        guess = (guess + number / guess) / 2.0;
    }
    return guess;
}

int main() {
    printf("Enter the coefficients for the equation ax^2 + bx + c = 0\n");

    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        printf("Roots are real and distinct\n");
        root1 = (-b + custom_sqrt(discriminant)) / (2 * a);
        root2 = (-b - custom_sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        printf("Roots are real and equal\n");
        root1 = root2 = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        printf("Roots are complex and distinct\n");
        realPart = -b / (2 * a);
        imaginaryPart = custom_sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    if (a == 1 && b <= 0 && c >= 0) {
        printf("The equation is x^2 - %.0fx + %.0f = 0\n", b, c);
    } else {
        printf("The equation is %.0fx^2 + %.0fx + %.0f = 0\n", a, b, c);
    }

    return 0;
}
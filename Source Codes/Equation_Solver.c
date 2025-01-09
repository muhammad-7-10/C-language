#include <stdio.h>
#include <math.h>
#include <complex.h>

int main()
{
    printf("Enter the coefficients for the equation ax^2 + bx + c = 0\n");

    double a, b, c, discriminant;
    double complex root1, root2;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);

    discriminant = b * b - 4 * a * c;

    if (a == 1)
    {
        printf("The equation is x^2 + %.0fx + %.0f = 0\n", b, c);
    }
    else if (a==-1)
    {
        printf("The equation is -x^2 + %.0fx + %.0f = 0\n", b, c);
    }
    
    else
    {
        printf("The equation is %.0fx^2 + %.0fx + %.0f = 0\n", a, b, c);
    }

    if (discriminant > 0)
    {
        printf("Roots are real and distinct\n");
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2f\n", creal(root1));
        printf("Root 2 = %.2f\n", creal(root2));
    }
    else if (discriminant == 0)
    {
        printf("Roots are real and equal\n");
        root1 = root2 = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2f\n", creal(root1));
    }
    else
    {
        printf("Roots are complex and distinct\n");
        root1 = (-b + csqrt(discriminant)) / (2 * a);
        root2 = (-b - csqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2f + %.2fi\n", creal(root1), cimag(root1));
        printf("Root 2 = %.2f - %.2fi\n", creal(root2), cimag(root2));
    }

    return 0;
}
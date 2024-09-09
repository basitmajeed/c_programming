// Find roots of a quadratic equation
#include <stdio.h>

int main() {
    double a1, b1, c1;
    printf("Enter coefficients a, b, and c for the quadratic equation ax^2 + bx + c = 0: ");
    scanf("%lf %lf %lf", &a1, &b1, &c1);

    double discriminant = b1 * b1 - 4 * a1 * c1;
    if (discriminant > 0) {
        double root1 = (-b1 + sqrt(discriminant)) / (2 * a1);
        double root2 = (-b1 - sqrt(discriminant)) / (2 * a1);
        printf("Roots are real and different.\n");
        printf("Root 1 = %lf\n", root1);
        printf("Root 2 = %lf\n", root2);
    } else if (discriminant == 0) {
        double root = -b1 / (2 * a1);
        printf("Root is real and same.\n");
        printf("Root = %lf\n", root);
    } else {
        double realPart = -b1 / (2 * a1);
        double imaginaryPart = sqrt(-discriminant) / (2 * a1);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %lf + %lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %lf - %lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
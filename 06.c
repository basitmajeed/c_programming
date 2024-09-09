//  Use math library functions
#include <stdio.h>
#include <math.h>

int main() {
    double number = 16.0;
    printf("Square root of %.2f is %.2f\n", number, sqrt(number));
    printf("%.2f raised to the power of 2 is %.2f\n", number, pow(number, 2));
    
    return 0;
}
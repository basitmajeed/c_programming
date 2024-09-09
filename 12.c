//12. Use switch-case to display Salaam when user enters 1, Aadaab when user enters 2, Hello when user enters 3 and Incorrect Option when user enters any other number
#include <stdio.h>

int main() {
    int option;

    printf("Enter a number (1-3): ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Salaam\n");
            break;
        case 2:
            printf("Aadaab\n");
            break;
        case 3:
            printf("Hello\n");
            break;
        default:
            printf("Incorrect Option\n");
            break;
    }

    return 0;
}
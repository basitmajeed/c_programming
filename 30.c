// Demonstrate the use of continue and break keywords (in loops)

#include <stdio.h>

int main() {
    printf("Demonstrating 'continue' and 'break' in loops:\n");

    printf("Numbers from 1 to 10 excluding 5:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    printf("Numbers from 1 to 10, stopping at 5:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; 
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

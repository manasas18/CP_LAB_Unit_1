//nested if :positively of two numbers
#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Check positivity using nested if
    if (num1 > 0) {
        if (num2 > 0) {
            printf("Both numbers are positive.\n");
        } else {
            printf("First number is positive, second is not.\n");
        }
    } else {
        if (num2 > 0) {
            printf("First number is not positive, second is positive.\n");
        } else {
            printf("Both numbers are not positive.\n");
        }
    }

    return 0;
}

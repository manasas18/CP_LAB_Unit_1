//c program to find largest of three numbers
#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check for the largest number
    if (a >= b && a >= c) {
        printf("The largest number is %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The largest number is %d\n", b);
    } else {
        printf("The largest number is %d\n", c);
    }

    return 0;
}

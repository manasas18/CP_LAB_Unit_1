// c program to print multiplication table
#include <stdio.h>

int main() {
    int num, i;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);

    // Print table using for loop
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

//c program for input and display various data types
#include <stdio.h>

int main() {
    int a;
    float b;
    char c;

    printf("Enter int, float, char: ");
    scanf("%d %f %c", &a, &b, &c);

    printf("You entered: %d %.2f %c", a, b, c);
    return 0;
}

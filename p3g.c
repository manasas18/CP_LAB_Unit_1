//comma operator
#include <stdio.h>

int main() {
    int a;

    a = (1, 2, 3, 4, 5);  // Final value becomes 5

    printf("Value of a: %d", a);

    return 0;
}

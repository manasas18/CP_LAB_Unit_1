//coniditional opertor 
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int large = (a > b) ? a : b;

    printf("Largest = %d", large);

    return 0;
}

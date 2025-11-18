//c program to calculate the sum of first n natural numbers for loop
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum using for loop
    for (int i = 1; i <= n; i++) {
        sum += i;  // sum = sum + i
    }

    // Display the result
    printf("The sum of first %d natural numbers is %d\n", n, sum);

    return 0;
}

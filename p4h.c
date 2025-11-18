//cprogram to calculate the sum of first n natural numbers do while loop
#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    // Input the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum using do-while loop
    do {
        sum += i;  // sum = sum + i
        i++;       // increment i
    } while (i <= n);

    // Display the result
    printf("The sum of first %d natural numbers is %d\n", n, sum);

    return 0;
}

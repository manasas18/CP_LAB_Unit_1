//c program to print size of each data types
#include <stdio.h>

int main() {
    printf("int: %lu bytes\n", sizeof(int));
    printf("float: %lu bytes\n", sizeof(float));
    printf("char: %lu bytes\n", sizeof(char));
    printf("double: %lu bytes\n", sizeof(double));
    return 0;
}

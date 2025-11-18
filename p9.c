// program to compute a compute student grade based on total marks and display result
#include <stdio.h>

int main() {
    int marks;

    printf("Enter total marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("Result: Pass\n");

        if (marks >= 90)
            printf("Grade: A\n");
        else if (marks >= 75)
            printf("Grade: B\n");
        else if (marks >= 60)
            printf("Grade: C\n");
        else
            printf("Grade: D\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}

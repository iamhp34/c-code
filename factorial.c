#include <stdio.h>

int main() {
    int n, i;
    // Use unsigned long long to handle larger factorials before overflow
    unsigned long long factorial = 1; 

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check if the number is negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\\n");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial *= i; // Multiply factorial by each number from 1 to n
        }
        printf("Factorial of %d = %llu\\n", n, factorial);
    }

    return 0;
}

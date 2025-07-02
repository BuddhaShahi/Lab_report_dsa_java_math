// 5. Write a program to find the factorial and Fibonacci series using recursion.

#include <stdio.h>

// Recursive function to find factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int choice, num, i;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Factorial (Recursive)\n");
        printf("2. Fibonacci Series (Recursive)\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter number for factorial: ");
            scanf("%d", &num);
            if (num < 0)
                printf("Factorial not defined for negative numbers.\n");
            else
                printf("Factorial of %d = %d\n", num, factorial(num));
            break;

        case 2:
            printf("Enter number of terms for Fibonacci series: ");
            scanf("%d", &num);
            printf("Fibonacci series: ");
            for (i = 0; i < num; i++) {
                printf("%d ", fibonacci(i));
            }
            printf("\n");
            break;

        case 3:
            printf("Exiting program.\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

// Menu:
// 1. Factorial (Recursive)
// 2. Fibonacci Series (Recursive)
// 3. Exit
// Enter choice: 1
// Enter number for factorial: 5
// Factorial of 5 = 120

// Enter choice: 2
// Enter number of terms for Fibonacci series: 7
// Fibonacci series: 0 1 1 2 3 5 8

// Enter choice: 3
// Exiting program.

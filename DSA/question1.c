// 1. Write a c program to implement stack operation

#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

// Function to push an element onto the stack
void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop.\n");
    } else {
        printf("%d popped from stack.\n", stack[top]);
        top--;
    }
}

// Function to display all elements in the stack
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}




// Stack Operations:
// 1. Push
// 2. Pop
// 3. Display
// 4. Exit
// Enter choice: 1
// Enter value to push: 5
// 5 pushed to stack.

// Enter choice: 1
// Enter value to push: 15
// 15 pushed to stack.

// Enter choice: 3
// Stack elements: 15 5

// Enter choice: 2
// 15 popped from stack.

// Enter choice: 3
// Stack elements: 5

// Enter choice: 4
// Exiting program.

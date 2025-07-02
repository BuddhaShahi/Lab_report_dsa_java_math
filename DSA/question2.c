// 2. Write a c program to implement linear queue operation.

#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Function to add element to queue
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        printf("%d enqueued to queue.\n", value);
    }
}

// Function to remove element from queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Cannot dequeue.\n");
    } else {
        printf("%d dequeued from queue.\n", queue[front]);
        front++;
    }
}

// Function to display queue elements
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}


// Queue Operations:
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Exit
// Enter choice: 1
// Enter value to enqueue: 10
// 10 enqueued to queue.

// Enter choice: 1
// Enter value to enqueue: 20
// 20 enqueued to queue.

// Enter choice: 3
// Queue elements: 10 20

// Enter choice: 2
// 10 dequeued from queue.

// Enter choice: 3
// Queue elements: 20

// Enter choice: 4
// Exiting program.

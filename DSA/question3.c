// 3. Write a c program to implement circular queue operation.

#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

// Function to add an element to the circular queue
void enqueue(int value) {
    if ((front == 0 && rear == SIZE - 1) || (rear + 1) % SIZE == front) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (front == -1) {  // First insertion
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % SIZE;
        }
        queue[rear] = value;
        printf("%d enqueued to circular queue.\n", value);
    }
}

// Function to remove an element from the circular queue
void dequeue() {
    if (front == -1) {
        printf("Queue Underflow! Cannot dequeue.\n");
    } else {
        printf("%d dequeued from circular queue.\n", queue[front]);
        if (front == rear) {
            // Only one element was present
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }
}

// Function to display elements in the circular queue
void display() {
    if (front == -1) {
        printf("Circular Queue is empty.\n");
    } else {
        printf("Circular Queue elements: ");
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\nCircular Queue Operations:\n");
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


// Circular Queue Operations:
// 1. Enqueue
// 2. Dequeue
// 3. Display
// 4. Exit
// Enter choice: 1
// Enter value to enqueue: 10
// 10 enqueued to circular queue.

// Enter choice: 1
// Enter value to enqueue: 20
// 20 enqueued to circular queue.

// Enter choice: 1
// Enter value to enqueue: 30
// 30 enqueued to circular queue.

// Enter choice: 2
// 10 dequeued from circular queue.

// Enter choice: 1
// Enter value to enqueue: 40
// 40 enqueued to circular queue.

// Enter choice: 3
// Circular Queue elements: 20 30 40

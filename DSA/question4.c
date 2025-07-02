// 4. Write a c program to implement the different operation on singly linked list.

#include <stdio.h>
#include <stdlib.h>

// Define structure of a node
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Insert at beginning
void insertAtBeginning(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printf("%d inserted at beginning.\n", value);
}

// Insert at end
void insertAtEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    printf("%d inserted at end.\n", value);
}

// Delete from beginning
void deleteFromBeginning() {
    if (head == NULL) {
        printf("List is empty! Cannot delete.\n");
        return;
    }

    struct Node* temp = head;
    head = head->next;
    printf("%d deleted from beginning.\n", temp->data);
    free(temp);
}

// Delete from end
void deleteFromEnd() {
    if (head == NULL) {
        printf("List is empty! Cannot delete.\n");
        return;
    }

    if (head->next == NULL) {
        printf("%d deleted from end.\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    struct Node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    printf("%d deleted from end.\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

// Display the list
void display() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main menu
int main() {
    int choice, value;

    while (1) {
        printf("\nSingly Linked List Operations:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Delete from beginning\n");
        printf("4. Delete from end\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertAtBeginning(value);
            break;
        case 2:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertAtEnd(value);
            break;
        case 3:
            deleteFromBeginning();
            break;
        case 4:
            deleteFromEnd();
            break;
        case 5:
            display();
            break;
        case 6:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}


// Singly Linked List Operations:
// 1. Insert at beginning
// 2. Insert at end
// 3. Delete from beginning
// 4. Delete from end
// 5. Display
// 6. Exit
// Enter choice: 1
// Enter value to insert: 10
// 10 inserted at beginning.

// Enter choice: 2
// Enter value to insert: 20
// 20 inserted at end.

// Enter choice: 5
// Linked List: 10 -> 20 -> NULL

// Enter choice: 3
// 10 deleted from beginning.

// Enter choice: 4
// 20 deleted from end.

// Enter choice: 5
// List is empty.

// Enter choice: 6
// Exiting program.

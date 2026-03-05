/*
3. Implement a Double-ended Queue (Deque) using a linked list with functions to insert and delete
elements from both the front and rear.
*/

#include <stdio.h>
#include <stdlib.h>

// Node structure for doubly linked list
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

// Head pointer for the deque (points to the front) --
// declared and initialized before use in main
static struct Node *head = NULL;

// Function definitions (moved above main)

// Insert a node at the front of the deque
void insertFront(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;
    head = newNode;

    printf("Inserted %d at front\n", value);
}

// Insert a node at the rear of the deque
void insertRear(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        // empty deque
        newNode->prev = NULL;
        head = newNode;
    } else {
        struct Node *temp = head;
        // traverse to the last node
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    printf("Inserted %d at rear\n", value);
}

// Delete a node from the front of the deque
void deleteFront(void)
{
    if (head == NULL) {
        printf("Deque is empty, nothing to delete\n");
        return;
    }

    struct Node *temp = head;
    printf("Deleted %d from front\n", temp->data);
    head = head->next;
    if (head != NULL)
        head->prev = NULL;
    free(temp);
}

// Delete a node from the rear of the deque
void deleteRear(void)
{
    if (head == NULL) {
        printf("Deque is empty, nothing to delete\n");
        return;
    }

    struct Node *temp = head;
    // if only one node
    if (temp->next == NULL) {
        printf("Deleted %d from rear\n", temp->data);
        free(temp);
        head = NULL;
        return;
    }

    // traverse to the last node
    while (temp->next != NULL)
        temp = temp->next;

    printf("Deleted %d from rear\n", temp->data);
    temp->prev->next = NULL;
    free(temp);
}

// Display the elements of the deque from front to rear
void displayDeque(void)
{
    if (head == NULL) {
        printf("Deque is empty\n");
        return;
    }

    struct Node *temp = head;
    printf("Deque contents: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(void)
{
    int choice, value;

    // Simple menu-driven interface for demonstration
    while (1) {
        printf("\nDeque operations:\n");
        printf("1. Insert at front\n");
        printf("2. Insert at rear\n");
        printf("3. Delete from front\n");
        printf("4. Delete from rear\n");
        printf("5. Display deque\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            // clear invalid input
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
        case 1:
            printf("Enter value to insert at front: ");
            scanf("%d", &value);
            insertFront(value);
            break;
        case 2:
            printf("Enter value to insert at rear: ");
            scanf("%d", &value);
            insertRear(value);
            break;
        case 3:
            deleteFront();
            break;
        case 4:
            deleteRear();
            break;
        case 5:
            displayDeque();
            break;
        case 6:
            // free remaining nodes before exit
            while (head)
                deleteFront();
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}

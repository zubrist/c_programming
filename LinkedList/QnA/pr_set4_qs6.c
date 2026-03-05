/*
 6. Write a program to implement a Doubly Linked List with a search function to find a number in the list
and return its position. Implement a function to reverse the doubly linked list.
 */

#include <stdio.h>
#include <stdlib.h>

// Definition of a node in a doubly linked list
struct Node {
    int data;             // Data stored in the node
    struct Node* prev;    // Pointer to previous node
    struct Node* next;    // Pointer to next node
};

// Head pointer for the list
struct Node* head = NULL;

// Create a new node containing the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insert a new element at the end of the list
void insertAtEnd(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Display the list from left to right
void displayList() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Search for a value and return its 1-based position, -1 if not found
int search(int key) {
    struct Node* temp = head;
    int pos = 1;
    while (temp != NULL) {
        if (temp->data == key) {
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    return -1; // not found
}

// Reverse the doubly linked list in place
void reverseList() {
    if (head == NULL) return;
    struct Node* current = head;
    struct Node* temp = NULL;
    // swap next and prev for all nodes
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev; // move to what was previously next
    }
    // adjust head to the new first node
    if (temp != NULL) {
        head = temp->prev; // temp ended on old head's prev after loop
    }
}

int main() {
    int choice, value;
    while (1) {
        printf("\n--- Doubly Linked List Menu ---\n");
        printf("1. Insert at end\n");
        printf("2. Display list\n");
        printf("3. Search element\n");
        printf("4. Reverse list\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                if (scanf("%d", &value) != 1) {
                    printf("Invalid input\n");
                    // Clear input buffer
                    while (getchar() != '\n');
                    break;
                }
                insertAtEnd(value);
                break;
            case 2:
                displayList();
                break;
            case 3:
                printf("Enter value to search: ");
                if (scanf("%d", &value) != 1) {
                    printf("Invalid input\n");
                    // Clear input buffer
                    while (getchar() != '\n');
                    break;
                }
                {
                    int pos = search(value);
                    if (pos != -1)
                        printf("Value %d found at position %d\n", value, pos);
                    else
                        printf("Value %d not present in list\n", value);
                }
                break;
            case 4:
                reverseList();
                printf("List reversed\n");
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
/*
3.write  an C  program to perform the follomng operations in a Singly linked list 
with the node structure :{Data, Next}.
a) Take commant line  inputs to initialize the linked list.
b) Display the content of the linked list using a function.
c) Write a function to delete the maximum value node from the linked list.
d) Write a function to reverse the linked list.
make it a menu driven program 
and write necessary comments to explain the code to the students
*/

#include <stdio.h>
#include <stdlib.h>

// Define a node in the singly linked list
struct Node {
    int data;             // data held by the node
    struct Node* next;    // pointer to the next node
};

// Create a new node with given data and next = NULL
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // allocate memory
    if (newNode == NULL) { // check allocation success
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data; // set node data
    newNode->next = NULL; // next initially NULL
    return newNode;
}

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data); // print current node data
        temp = temp->next;         // move to next node
    }
    printf("\n");
}

// Function to delete the node with maximum value
void deleteMaxNode(struct Node** head) {
    if (*head == NULL) return; // empty list, nothing to delete

    struct Node* temp = *head;
    struct Node* maxNode = temp; // start with head as max
    struct Node* prev = NULL;    // to track previous node of max
    struct Node* prevTemp = NULL; // to track previous node during traversal

    // Traverse the list to find the max node
    while (temp != NULL) {
        if (temp->data > maxNode->data) {
            maxNode = temp; // update max node
            prev = prevTemp; // update previous node of max
        }
        prevTemp = temp; // update previous temp
        temp = temp->next; // move to next node
    }

    // If max node is head, update head pointer
    if (maxNode == *head) {
        *head = maxNode->next;
    } else {
        prev->next = maxNode->next; // bypass the max node
    }
    free(maxNode); // free memory of deleted node
}

// Function to reverse the linked list
void reverseList(struct Node** head) {
    struct Node* prev = NULL; // previous node
    struct Node* current = *head; // current node
    struct Node* next = NULL; // next node

    while (current != NULL) {
        next = current->next; // store next node
        current->next = prev; // reverse current node's pointer
        prev = current; // move prev to current
        current = next; // move to next node
    }
    *head = prev; // update head to new first node
}

// Function to insert a node at a specific position (1-indexed)
void insertAtPosition(struct Node** head, int data, int pos) {
    struct Node* newNode = createNode(data); // create new node
    
    if (pos == 1) {
        // Insert at the beginning
        newNode->next = *head;
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    // Traverse to find the node before the insertion point
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newNode);
        return;
    }
    
    // Insert the new node at the specified position
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    struct Node* head = NULL; // initialize head of the list
    int choice, data;

    while (1) {
        printf("Menu:\n");
        printf("1. Insert at position\n");
        printf("2. Display list\n");
        printf("3. Delete max node\n");
        printf("4. Reverse list\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            fprintf(stderr, "Invalid input\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                if (scanf("%d", &data) != 1) {
                    fprintf(stderr, "Invalid input\n");
                    break;
                }
                int pos;
                printf("Enter position to insert: ");
                if (scanf("%d", &pos) != 1) {
                    fprintf(stderr, "Invalid input\n");
                    break;
                }
                insertAtPosition(&head, data, pos);
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                deleteMaxNode(&head);
                break;
            case 4:
                reverseList(&head);
                break;
            case 5:
                exit(EXIT_SUCCESS);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
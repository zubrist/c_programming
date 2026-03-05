/*
 *
 * 5) Write a program to find the minimum element in a singly linked list.
 *              Implement a function that traverses the list and returns the smallest value.
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>  // For INT_MAX constant

// Define the structure for a linked list node
struct Node {
    int data;              // Data stored in the node
    struct Node* next;     // Pointer to the next node in the linked list
};

// Global head pointer - points to the first node of the linked list
struct Node* head = NULL;

// Function: createNode() - Create a new node with given data
// Parameters: data - the value to be stored in the node
// Returns: pointer to the newly created node
struct Node* createNode(int data) {
    // Allocate memory for a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    // Check if memory allocation was successful
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    
    // Initialize the node
    newNode->data = data;   // Store the data
    newNode->next = NULL;   // Next pointer is initially NULL
    return newNode;
}

// Function: insertAtEnd() - Insert a new element at the end of the linked list
// Parameters: data - the value to be inserted
void insertAtEnd(int data) {
    // Create a new node with the given data
    struct Node* newNode = createNode(data);
    
    // Check if node creation was successful
    if (newNode == NULL) {
        return;
    }
    
    // If the list is empty, the new node becomes the head
    if (head == NULL) {
        head = newNode;
        printf("%d inserted at the beginning.\n", data);
        return;
    }
    
    // If list is not empty, traverse to the end
    struct Node* temp = head;
    
    // Traverse the list until we find the last node (next is NULL)
    while (temp->next != NULL) {
        temp = temp->next;  // Move to the next node
    }
    
    // Link the new node at the end of the list
    temp->next = newNode;
    printf("%d inserted at the end.\n", data);
}

// Function: findMinimum() - Find the minimum (smallest) element in the linked list
// This function traverses the entire list and keeps track of the minimum value
// Returns: the minimum value found, or INT_MAX if the list is empty
int findMinimum() {
    // Check if the list is empty
    if (head == NULL) {
        printf("List is empty! No minimum element found.\n");
        return INT_MAX;  // Return a very large value to indicate empty list
    }
    
    // Initialize minimum with the first node's data
    int minimum = head->data;  // Start by assuming the first element is minimum
    
    // Create a temporary pointer to traverse the list
    struct Node* temp = head->next;  // Start from the second node
    
    // Traverse through all remaining nodes
    while (temp != NULL) {
        // If current node's data is smaller than minimum, update minimum
        if (temp->data < minimum) {
            minimum = temp->data;  // Update the minimum value
        }
        temp = temp->next;  // Move to the next node
    }
    
    // Return the minimum value found
    return minimum;
}

// Function: display() - Print all elements in the linked list
// This function traverses the entire list and displays all values
void display() {
    // Check if the list is empty
    if (head == NULL) {
        printf("List is empty! Nothing to display.\n");
        return;
    }
    
    // Create a temporary pointer to traverse the list
    struct Node* temp = head;
    
    // Print header
    printf("\nLinked List elements: ");
    
    // Traverse through all nodes and print each value
    while (temp != NULL) {
        printf("%d -> ", temp->data);  // Print current element with arrow
        temp = temp->next;              // Move to the next node
    }
    
    // Print NULL at the end to indicate end of list
    printf("NULL\n");
}

// Main function: Menu-driven program to manage linked list operations
int main() {
    int choice, data;  // Variables to store user's choice and data input
    
    // Infinite loop that continues until user chooses to exit
    while (1) {
        // Display the menu options
        printf("\n========== LINKED LIST MENU ==========\n");
        printf("1. Insert element at the end\n");
        printf("2. Find Minimum element\n");
        printf("3. Display the list\n");
        printf("4. Exit\n");
        printf("======================================\n");
        printf("Enter your choice: ");
        
        // Read user's choice with input validation
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            // Clear the input buffer for next iteration
            while (getchar() != '\n');
            continue;
        }
        
        // Process user's choice using switch statement
        switch (choice) {
            case 1:
                // Insert element at the end of the list
                printf("Enter the value to insert: ");
                // Check if input is valid
                if (scanf("%d", &data) != 1) {
                    printf("Invalid input!\n");
                    // Clear input buffer
                    while (getchar() != '\n');
                    break;
                }
                insertAtEnd(data);
                break;
                
            case 2:
                // Find and display the minimum element
                printf("Finding minimum element in the list...\n");
                int min = findMinimum();
                if (min != INT_MAX) {
                    printf("Minimum element in the list: %d\n", min);
                }
                break;
                
            case 3:
                // Display all elements in the linked list
                display();
                break;
                
            case 4:
                // Exit: Terminate the program
                printf("Exiting the program. Goodbye!\n");
                return 0;
                
            default:
                // Handle invalid menu choice
                printf("Invalid choice! Please select from 1 to 4.\n");
        }
    }
    
    return 0;
}
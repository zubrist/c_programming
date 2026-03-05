/*
 * Program: Stack Implementation using Linked List
 * Description: Implement a stack using a linked list with the following operations:
 *              Push, Pop, Peek, isEmpty, and Display
 * 
 * Stack is a LIFO (Last In First Out) data structure where:
 * - Insertion happens at the top (head)
 * - Deletion happens from the top (head)
 */

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a stack node
// Each node contains data and a pointer to the next node
struct Node {
    int data;              // Data stored in the node
    struct Node* next;     // Pointer to the next node in the stack
};

// Global head pointer - points to the top of the stack
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

// Function: push() - Insert an element at the top of the stack
// This operation adds a new element to the top (head) of the stack
void push() {
    // Get the value to be pushed from user
    int data;
    printf("Enter the value to push: ");
    if (scanf("%d", &data) != 1) {
        printf("Invalid input!\n");
        return;  // Exit if invalid input
    }
    
    // Create a new node with the entered data
    struct Node* newNode = createNode(data);
    
    // Check if node creation was successful
    if (newNode == NULL) {
        return;
    }
    
    // Link the new node to the current top of the stack
    newNode->next = head;
    
    // Make the new node the new top of the stack
    head = newNode;
    printf("%d pushed onto the stack.\n", data);
}

// Function: pop() - Remove and return the top element from the stack
// This operation removes the element at the top (head) and frees memory
void pop() {
    // Check if the stack is empty
    if (head == NULL) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
        return;
    }
    
    // Create a temporary pointer to the current top node
    struct Node* temp = head;
    
    // Display the value being removed
    printf("Popped value: %d\n", temp->data);
    
    // Move the head pointer to the next node (new top)
    head = head->next;
    
    // Free the memory of the removed node
    free(temp);
}

// Function: peek() - View the top element without removing it
// This operation returns the top element value without modifying the stack
void peek() {
    // Check if the stack is empty
    if (head == NULL) {
        printf("Stack is empty! No element to peek.\n");
        return;
    }
    
    // Display the top element
    printf("Top element (Peek): %d\n", head->data);
}

// Function: isEmpty() - Check if the stack is empty
// This operation checks whether the stack has any elements
void isEmpty() {
    // If head is NULL, the stack is empty
    if (head == NULL) {
        printf("Stack is EMPTY.\n");
    } else {
        printf("Stack is NOT empty.\n");
    }
}

// Function: display() - Print all elements in the stack
// This operation traverses the entire stack from top to bottom
void display() {
    // Check if the stack is empty
    if (head == NULL) {
        printf("Stack is empty! Nothing to display.\n");
        return;
    }
    
    // Create a temporary pointer to traverse the stack
    struct Node* temp = head;
    
    // Print header
    printf("\nStack elements (from top to bottom):\n");
    printf("------------------------------------\n");
    
    // Traverse through all nodes using the next pointer
    while (temp != NULL) {
        printf("| %d |\n", temp->data);  // Print current element
        temp = temp->next;                // Move to the next node
    }
    printf("------------------------------------\n");
}

// Main function: Menu-driven program to manage stack operations
int main() {
    int choice;  // Variable to store user's menu choice
    
    // Infinite loop that continues until user chooses to exit
    while (1) {
        // Display the menu options
        printf("\n========== STACK MENU ==========\n");
        printf("1. Push (Insert element)\n");
        printf("2. Pop (Remove element)\n");
        printf("3. Peek (View top element)\n");
        printf("4. isEmpty (Check if empty)\n");
        printf("5. Display (Show all elements)\n");
        printf("6. Exit\n");
        printf("================================\n");
        printf("Enter your choice: ");
        
        // Read user's choice with input validation
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }
        
        // Process user's choice using switch statement
        switch (choice) {
            case 1:
                // Push: Insert a new element at the top of the stack
                push();
                break;
                
            case 2:
                // Pop: Remove and display the top element
                pop();
                break;
                
            case 3:
                // Peek: View the top element without removing it
                peek();
                break;
                
            case 4:
                // isEmpty: Check if the stack is empty
                isEmpty();
                break;
                
            case 5:
                // Display: Show all elements in the stack
                display();
                break;
                
            case 6:
                // Exit: Terminate the program
                printf("Exiting the Stack program. Goodbye!\n");
                return 0;
                
            default:
                // Handle invalid menu choice
                printf("Invalid choice! Please select from 1 to 6.\n");
        }
    }
    
    return 0;
}
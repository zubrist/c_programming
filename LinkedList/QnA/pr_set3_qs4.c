/* 
Write a menu driven program in C to perform the following operations in a Stack using linked list with the node 
structure (Roll, Name, Next):
    (a) Push
    (b) Pop
    (c) Display
    (d) Reverse
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Node structure to store student data (Roll Number and Name)
struct Node {
    int rollNo;              // Student's roll number
    char name[30];           // Student's name (max 30 characters)
    struct Node* next;       // Pointer to the next node in the linked list
};

// Global head pointer - points to the top of the stack
struct Node* head = NULL;

// Function: push() - Insert a new student record at the top of the stack
// This function takes input from user and adds a new node at the beginning (top)
void push() {
    // Allocate memory for a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    // Check if memory allocation was successful
    if (newNode == NULL) {
        printf("\nMemory not available.");
        return;
    }
    
    // Get roll number from user
    printf("Enter Roll Number: ");
    scanf("%d", &newNode->rollNo);
    
    // Get student name from user (note: %s reads the string directly into the array)
    printf("Enter Name: ");
    scanf("%s", newNode->name); // Removed &

    // Link the new node to the current top of the stack
    newNode->next = head;
    
    // Make the new node the new top (head) of the stack
    head = newNode;
    printf("Node Pushed Successfully.\n");
}

// Function: pop() - Remove and return the top element from the stack
// This function removes the node at the top (head) and frees its memory
void pop() {
    // Check if stack is empty
    if (head == NULL) {
        printf("\nStack Underflow.\n");
        return;
    }
    
    // Store temporary pointer to the current top node
    struct Node* temp = head;
    
    // Display the removed student's information
    printf("\nPopped -> Roll: %d, Name: %s\n", temp->rollNo, temp->name);
    
    // Move head pointer to the next node (new top of stack)
    head = head->next;
    
    // Free the memory of the removed node
    free(temp);
}

// Function: display() - Print all elements in the stack
// Traverses the linked list from head and displays all student records
void display() {
    // Check if stack is empty
    if (head == NULL) {
        printf("\nStack is Empty.\n");
        return;
    }
    
    // Create a temporary pointer to traverse the list
    struct Node* temp = head;
    
    // Print header for the table
    printf("\nStack Elements:\nRoll No.\tName\n-------------------------");
    
    // Traverse through all nodes and print each student's details
    while (temp != NULL) {
        printf("\n| %d\t\t%s |", temp->rollNo, temp->name);
        temp = temp->next;  // Move to the next node
    }
    printf("\n");
}

// Function: reverse() - Reverse the order of all elements in the stack
// This function reverses the entire linked list by changing pointer directions
void reverse() {
    // Check if stack is empty or has only one element (no reversal needed)
    if (head == NULL || head->next == NULL) {
        printf("\nStack reversed (or too short to change).\n");
        return;
    }
    
    // Pointers used for reversal process
    struct Node *prev = NULL;      // Tracks the previous node we've processed
    struct Node *current = head;   // Tracks the current node being processed
    struct Node *next = NULL;      // Temporarily stores the next node before reversing
    
    // Traverse the list and reverse pointers
    while (current != NULL) {
        next = current->next;      // Store the next node before we lose the link
        current->next = prev;      // Reverse the pointer - make it point to previous node
        prev = current;            // Move prev forward to current
        current = next;            // Move current forward to the next node
    }
    
    // Update head to point to the last node (which is now the first)
    head = prev;
    printf("\nStack Reversed Successfully.\n");
}

// Main function: Menu-driven program to manage stack operations
int main() {
    int choice;  // Variable to store user's menu choice
    
    // Do-while loop runs at least once and continues until user chooses to exit
    do {
        // Display the menu options
        printf("\n---Menu---\n1.Push\n2.Pop\n3.Display\n4.Reverse\n5.Exit\nChoice: ");
        
        // Read user's choice with basic input validation
        if (scanf("%d", &choice) != 1) break;

        // Process user's choice using switch statement
        switch (choice) {
            case 1: 
                // Push: Insert a new student record at the top of stack
                push(); 
                break;
            case 2: 
                // Pop: Remove and display the top element
                pop(); 
                break;
            case 3: 
                // Display: Show all elements currently in the stack
                display(); 
                break;
            case 4: 
                // Reverse: Reverse the order of all elements in the stack
                reverse(); 
                break;
            case 5: 
                // Exit: Terminate the program
                printf("Exiting...\n"); 
                break;
            default: 
                // Handle invalid input
                printf("Invalid choice!\n");
        }
    } while (choice != 5);  // Loop continues until user selects 5 (Exit)
    
    return 0;
}
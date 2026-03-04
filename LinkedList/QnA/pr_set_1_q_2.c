/*
2. Write a program in C to perform merging of two singly linked list. The two input lists need to be created
after taking the necessary details from the user.


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

// Simple merge: append list2 to the end of list1
struct Node* mergeLists(struct Node* list1, struct Node* list2) {
    if (list1 == NULL) return list2; // if first list empty, return second
    
    // Find the last node of list1
    struct Node* temp = list1;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    // Append list2 to the end of list1
    temp->next = list2;
    return list1;
}

// Print all elements of the list from head to tail
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data); // print current node data
        temp = temp->next;         // move to next node
    }
    printf("\n");
}

int main() {
    struct Node* list1 = NULL;      // head pointer for first list
    struct Node* list2 = NULL;      // head pointer for second list
    struct Node* mergedList = NULL; // head pointer for merged list
    int n1, n2, data;

    // Read first list from user
    printf("Enter the number of elements in the first list: ");
    if (scanf("%d", &n1) != 1) return 0;
    for (int i = 0; i < n1; i++) {
        printf("Enter element %d: ", i + 1);
        if (scanf("%d", &data) != 1) data = 0;
        // Insert at head: new nodes become the new head.
        // Note: inserting at head reverses the input order.
        struct Node* newNode = createNode(data);
        newNode->next = list1;
        list1 = newNode;
    }

    // Read second list from user
    printf("Enter the number of elements in the second list: ");
    if (scanf("%d", &n2) != 1) n2 = 0;
    for (int i = 0; i < n2; i++) {
        printf("Enter element %d: ", i + 1);
        if (scanf("%d", &data) != 1) data = 0;
        // Insert at head (again reverses input order)
        struct Node* newNode = createNode(data);
        newNode->next = list2;
        list2 = newNode;
    }

    // Merge the two lists (expects sorted lists for correct sorted merge)
    mergedList = mergeLists(list1, list2);

    // Display the merged list
    printf("Merged list: ");
    displayList(mergedList);

    // Note: program does not free allocated memory before exit.


    return 0;
}
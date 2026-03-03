#include <stdio.h>
#include <stdlib.h>

/*
=====================================================
        BINARY SEARCH TREE NODE STRUCTURE
=====================================================
*/
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

/*
=====================================================
        CREATE NEW NODE
=====================================================
*/
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

/*
=====================================================
        INSERT INTO BST
=====================================================
*/
struct Node* insert(struct Node* root, int value) {

    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}



/*
=====================================================
        DELETE NODE FROM BST
=====================================================

There are THREE main deletion cases:

-----------------------------------------------------
CASE 1: Deleting a LEAF NODE
-----------------------------------------------------
• Node has NO children
• Simply remove the node
• Free memory
• Return NULL to parent

-----------------------------------------------------
CASE 2: Deleting a NODE WITH ONE CHILD
-----------------------------------------------------
• Node has ONLY LEFT child OR ONLY RIGHT child
• Replace node with its child
• Free the deleted node
• Return child to parent

-----------------------------------------------------
CASE 3: Deleting a NODE WITH TWO CHILDREN
-----------------------------------------------------
• Find Inorder Successor (smallest in right subtree)
• Copy successor's value to current node
• Delete the successor node recursively
• BST property remains maintained

=====================================================
*/

/*
=====================================================
        FIND MINIMUM VALUE NODE
        (Used in deletion Case 3)
=====================================================
*/
struct Node* findMin(struct Node* root) {

    while (root->left != NULL)
        root = root->left;

    return root;
}

struct Node* deleteNode(struct Node* root, int key) {

    if (root == NULL)
        return NULL;

    // Traverse tree to find the node
    if (key < root->data)
        root->left = deleteNode(root->left, key);

    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    else {
        // ===== NODE FOUND =====

        /*
        --------------------------
        CASE 1: Leaf Node
        --------------------------
        */
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }

        /*
        --------------------------
        CASE 2: One Child
        --------------------------
        */
        else if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }

        else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        /*
        --------------------------
        CASE 3: Two Children
        --------------------------
        */
        else {
            struct Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }

    return root;
}

/*
=====================================================
        INORDER TRAVERSAL
=====================================================
*/
void inorder(struct Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

/*
=====================================================
        MAIN FUNCTION
=====================================================
*/
int main() {

    struct Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder before deletion: ");
    inorder(root);

    root = deleteNode(root, 30);   // Try deleting 20, 30, or 50

    printf("\nInorder after deletion: ");
    inorder(root);

    return 0;
}
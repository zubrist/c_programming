#include <stdio.h>
#include <stdlib.h>

// structure of NOde
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};


// create a node

struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value; // (*newNode).data = value ;
    newNode->left = NULL;
    newNode-> right = NULL;

    return newNode;//400

}


struct Node* insert(struct Node* root , int value){
    if(root == NULL)
        return createNode(value);

    if (value < root->data){
        root->left = insert(root->left, value);
    }

    else if ( value> root->data) // 40
        root->right = insert(root->right, value); // 400
}

void inorder(struct Node* root){
    if(root == NULL)
        return;

    inorder(root->left);
    printf("%d->",root->data);
    inorder(root->right);    
}



void preorder(struct Node* root){
    if(root == NULL)
        return;

    printf("%d->",root->data);
    preorder(root->left);
    preorder(root->right);    
}

void postorder(struct Node* root){
    if(root == NULL)
        return;

    
    postorder(root->left);
    postorder(root->right);  
    printf("%d->",root->data);  
}




int main(){

    struct Node* root = NULL;
    // ask user how many elements in the BST 
    // run a for loop for those elemts
    // ask user to give the element 
    // give me value , val =50
    // enter root element
    root = insert(root,50); // 500

    // enter other elements
    insert(root, 30);
    insert(root,40);
    insert(root,70);
    insert(root,20);

    printf("Indorder traversal:\n");
    inorder(root);

    printf("\nPostorder traversal:\n");
    postorder(root);



    return 0;
}
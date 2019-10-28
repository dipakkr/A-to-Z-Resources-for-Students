#include<stdio.h>
#include<stdlib.h>
#include"que.h"
/* A binary tree node has key, pointer to left  
child and a pointer to right child */

  
/* function to create a new node of tree and  
return pointer */
node* newNode(int key) 
{ 
    node* temp = (node *)malloc(sizeof(node)); 
    temp->key = key; 
    temp->left = temp->right = NULL; 
    return temp; 
}; 
  
/* Inorder traversal of a binary tree*/
void inorder(node* temp) 
{ 
    if (!temp) 
        return; 
    inorder(temp->left); 
    printf("\t %d", temp->key ); 
    inorder(temp->right); 
} 
  
/* function to delete the given deepest node  
(d_node) in binary tree */
void deletDeepest(node* root, node* d_node){ 
    que q; 
    q.front=-1;
    q.rear=-1;
    qinsert(&q,root); 
  
    // Do level order traversal until last node 
    node *temp; 
    while (!isempty(&q)) { 
        temp =qfront(&q); 
        qdelete(&q); 
        if (temp == d_node) { 
            temp = NULL; 
            free(d_node); 
            return; 
        }
           if (temp->left) { 
            if (temp->left == d_node) { 
                temp->left = NULL; 
                free(d_node); 
                return; 
            } 
            else
                qinsert(&q,temp->left); 
        } 
        if (temp->right) { 
            if (temp->right == d_node) { 
                temp->right = NULL; 
                free(d_node); 
                return; 
            } 
            else
                qinsert(&q,temp->right); 
        } 
  
      
    } 
} 
  
/* function to delete element in binary tree */
node* deletion(node* root, int key) 
{ 
    que q;
    q.front=-1;
    q.rear=-1;
    if (root == NULL) 
        return NULL; 
  
    if (root->left == NULL && root->right == NULL) { 
        if (root->key == key) 
            return NULL; 
        else
            return root; 
    } 
    qinsert(&q,root); 

  
    node* temp; 
    node* key_node = NULL; 
  
    // Do level order traversal to find deepest 
    // node(temp) and node to be deleted (key_node) 
    while (!isempty(&q)) { 
        temp = qfront(&q); 
        qdelete(&q); 
  
        if (temp->key == key) 
            key_node = temp; 
  
        if (temp->left) 
            qinsert(&q,temp->left); 
  
        if (temp->right) 
            qinsert(&q,temp->right); 
    } 
  
    if (key_node != NULL) { 
        int x = temp->key; 
        //printf("\n x= %d\n",x);
        deletDeepest(root, temp); 
        key_node->key = x; 
    } 
    return root; 
} 
  
// Driver code 
int main() 
{ 
    node* root = newNode(10); 
    root->left = newNode(11); 
    root->left->left = newNode(7); 
    root->left->right = newNode(12); 
    root->right = newNode(9); 
    root->right->left = newNode(15); 
    root->right->right = newNode(8); 
  
    printf("Inorder traversal before deletion : "); 
    inorder(root); 
  
    int key = 11; 
    root = deletion(root, key); 
  
    printf("\nInorder traversal after deletion : "); 
    inorder(root); 
  
    return 0; 
} 
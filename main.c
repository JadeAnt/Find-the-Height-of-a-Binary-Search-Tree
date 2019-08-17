#include <stdio.h>
#include <stdlib.h>

struct BSTNode{
  int data;
  struct BSTNode* left;
  struct BSTNode* right;
}

BSTNode* FindHeight(BSTNode** root){
 
 if(root == NULL){
    return;
  }
  
  return max(FindHeight(root->left), FindHeight(root->right)) + 1;
}

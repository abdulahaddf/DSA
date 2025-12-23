
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution


void cnt(Node* root, int &count){
    if(!root){
            return;
        }
    
        if(!root->left && !root->right){
            count++;
        }
        cnt(root->left, count);
        cnt(root->right, count);
        // return count;
}

class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        
        // write code here
         int count =0;
         cnt(root, count);
         return count;
       
        
    }
};
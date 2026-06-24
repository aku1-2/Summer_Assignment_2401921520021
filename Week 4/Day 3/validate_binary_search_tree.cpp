/*Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys strictly less than the node's key.
The right subtree of a node contains only nodes with keys strictly greater than the node's key.
Both the left and right subtrees must also be binary search trees.*/

class Solution {
public:
    bool helper(TreeNode* root, long long minV= -10000000000 , long long maxV=+10000000000){
      if(root==NULL)
      return true;
      bool left=helper(root->left,minV,root->val);
      bool right=helper(root->right,root->val,maxV);
      if(left && right && root->val>minV && root->val<maxV)
      return true;
      else
      return false;
    }
    bool isValidBST(TreeNode* root) {
       return helper(root);
    }
};

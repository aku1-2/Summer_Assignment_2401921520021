/*
Given the root of a binary tree, return the length of the diameter of the tree.
The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
The length of a path between two nodes is represented by the number of edges between them.

*/

class Solution {
public:
   pair<int,int> diameter(TreeNode* root){
      if(root==nullptr){
        pair<int,int> p= make_pair(0,0);
        return p;
      }
      pair<int,int> left=diameter(root->left);
      pair<int,int> right=diameter(root->right);
      int op1 = left.first;
      int op2 = right.first;
      int op3 = left.second+ right.second +1;
      pair<int,int> ans;
      ans.first=max(op1,max(op2,op3));;
      ans.second= max(left.second, right.second) + 1;
      return ans;
   }
    int diameterOfBinaryTree(TreeNode* root) {
        return diameter(root).first -1;
    }
};

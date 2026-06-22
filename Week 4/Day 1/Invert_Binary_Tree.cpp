/*
Given the root of a binary tree, invert the tree, and return its root.
*/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        if(root==nullptr){
            return nullptr;
        }
       /* TreeNode* root1 = new TreeNode(root->val);
        root1->left = invertTree(root->right);
        root1->right = invertTree(root->left);

        return root1;*/
        //Swapping technique
        TreeNode* left = invertTree(root->left);
        TreeNode* right = invertTree(root->right);
        root->left=right;
        root->right=left;
        return root;

    }
};

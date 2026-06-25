/*
A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. 
A node can only appear in the sequence at most once. 
Note that the path does not need to pass through the root.
The path sum of a path is the sum of the node's values in the path.
Given the root of a binary tree, return the maximum path sum of any non-empty path.
*/

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxsum=INT_MIN;
        inorder(root, maxsum);
        return maxsum;

    }
    int inorder(TreeNode* root,int& maxsum){
        if(root==nullptr){
            return 0;
        }
        int leftsum=max(0,inorder(root->left,maxsum));
        int rightsum=max(0,inorder(root->right,maxsum));

        int currentsum= root->val+ leftsum+ rightsum;
        maxsum=max(currentsum,maxsum);

        return root->val + max(leftsum, rightsum); 

    }
};

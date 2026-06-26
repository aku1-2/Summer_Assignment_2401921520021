/*
Given two integer arrays preorder and inorder, where preorder is the preorder traversal of a binary tree and 
inorder is the inorder traversal of the same tree, construct and return the binary tree.
*/
class Solution {
public:
   unordered_map<int,int> m;
   int index=0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]] = i;
        }
        return Helper(preorder, 0, inorder.size()-1);
    }

    TreeNode* Helper(vector<int>& preorder, int left, int right){
         if(left>right){
            return nullptr;
         }
         int mid = m[preorder[index]];
         TreeNode* ans= new TreeNode(preorder[index++]);
         

         ans->left= Helper(preorder, left, mid-1);
         ans->right= Helper(preorder, mid+1, right);
         return ans;
    }
};

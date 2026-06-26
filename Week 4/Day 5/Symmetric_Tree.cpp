/*
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
*/
class Solution {
public:
bool isSymmetric(TreeNode* root){
   if(root==nullptr)
   return true;
   return check(root->left,root->right);
   }
private:
 bool check(TreeNode* left , TreeNode* right) {
        if(left==nullptr && right==nullptr)
        return true;
        if(left==nullptr || right==nullptr) return false;
        return (left->val==right->val && check(left->left ,right->right) && check(left->right , right->left));
    }


};

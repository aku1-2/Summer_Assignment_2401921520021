/*
Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (
i.e., from left to right, then right to left for the next level and alternate between).
*/
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        bool lefttoright=true;

        if(root==nullptr)
        {
            return result;
        }

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int> currentlevel(size);
            
            
            for(int i=0; i<size; i++)
        {
            TreeNode* node = q.front();
            q.pop();
             
             int index = lefttoright? i : (size-1-i);
              currentlevel[index]= node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            
         }
         lefttoright=!lefttoright;
         result.push_back(currentlevel);
        }
        return result;
    }
};

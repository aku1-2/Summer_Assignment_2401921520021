/*
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
*/
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root==nullptr)
        { 
          return v;
        }
       queue <TreeNode* > q;

       q.push(root);
       
       while(!q.empty())
       { 
         int levelsize = q.size();

         vector<int> currentlevel;

           for(int i=0;i<levelsize;i++)
           {
               TreeNode* node = q.front();
               q.pop();
               currentlevel.push_back(node->val);

               if(node->left) q.push(node->left);
               if(node->right) q.push(node->right);
           }

           v.push_back(currentlevel);
       }

       return v;
    }
};

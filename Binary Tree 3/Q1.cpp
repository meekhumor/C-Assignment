// Q1: Left View of Binary Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*> qu;
        vector<int> v;
        qu.push(root);
        while(qu.size()){
            int n = qu.size();
            for(int i = 0; i < n; i++){
                TreeNode* temp = qu.front();
                if(i == n-1) v.push_back(temp->val);
                if(temp->right) qu.push(temp->right);
                if(temp->left) qu.push(temp->left);
                qu.pop();
            }
        }
        return v;
    }
};
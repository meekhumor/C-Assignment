// Q3: Balanced Binary Tree [Leetcode 110]

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

    int nthlevel(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(nthlevel(root->left), nthlevel(root->right));
    }

    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;

        int l = nthlevel(root->left);
        int r = nthlevel(root->right);

        if(abs(l-r) > 1) return false;

        return isBalanced(root->left) && isBalanced(root->right);
        
    }
};
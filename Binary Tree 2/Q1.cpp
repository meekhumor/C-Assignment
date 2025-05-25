// Q1: Diameter of Binary Tree


class Solution {
public:

    int maxDia = 0;
    int dfs(TreeNode* root){
        if(root == NULL) return 0;
        
        maxDia = max(maxDia, dfs(root->left) + dfs(root->right));
        return 1+ max(dfs(root->left), dfs(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxDia;
    }
};
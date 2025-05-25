// Q2: Level Order Traversal (Using Queue) [LeetCode 102]  


class Solution {
public:

    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};
        queue<TreeNode*> qu;
        vector<vector<int>> ans;

        qu.push(root);
        while(qu.size()){
            vector<int> v;
            int n = qu.size();
            for(int i = 0; i < n; i++){
                TreeNode* temp = qu.front();
                qu.pop();
                v.push_back(temp->val);
                if(temp->left) qu.push(temp->left);
                if(temp->right) qu.push(temp->right);
            }
            ans.push_back(v);
        }

        return ans;
    }
};
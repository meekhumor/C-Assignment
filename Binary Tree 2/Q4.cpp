// Q4: Zigzag Level Order Traversal [LeetCode 103]

class Solution {
public:

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};
        queue<TreeNode*> qu;
        vector<vector<int>> ans;

        qu.push(root);
        int level = 0;
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
            level += 1;
            if(level%2 == 0) reverse(v.begin(), v.end());
            ans.push_back(v);
        }

        return ans;
    }
};


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr)
            return {};
        vector<vector<int>> res;
        queue<TreeNode*> pq;
        pq.push(root);
        while (!pq.empty()) {
            int n = pq.size();
            vector<int> t;
            for (int i = 0; i < n; i++) {
                TreeNode* temp = pq.front();
                pq.pop();
                t.push_back(temp->val);
                if (temp->left)
                    pq.push(temp->left);
                if (temp->right)
                    pq.push(temp->right);
            }
            res.push_back(t);
        }
        return res;
    }
};
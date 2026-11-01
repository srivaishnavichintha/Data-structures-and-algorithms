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
        while(!pq.empty()){
           vector<int> curr;
           int n=pq.size();
           for(int i=0;i<n;i++){
             TreeNode* pre=pq.front();
             pq.pop();
             if(pre->left!=NULL)pq.push(pre->left);
             if(pre->right!=NULL)pq.push(pre->right);
             curr.push_back(pre->val);
           }
           res.push_back(curr);
        }
        return res;
    }
};
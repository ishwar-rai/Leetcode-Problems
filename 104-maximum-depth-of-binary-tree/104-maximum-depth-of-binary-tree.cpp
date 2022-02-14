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
    int solve(TreeNode* root, int left, int right){
        if(!root->left && !root->right) return 0;
        if(root->left) left = 1 + solve(root->left, left, 0);
        if(root->right) right = 1 + solve(root->right, 0, right);
        return max(left, right);
    }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int left = 0, right = 0;
        int count = solve(root, left, right);
        
        return count+1;
    }
};
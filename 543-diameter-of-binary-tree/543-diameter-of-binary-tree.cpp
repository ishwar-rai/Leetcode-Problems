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
//int len = 0;
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        int x = solve(root->left) + solve(root->right);
        int y = diameterOfBinaryTree(root->left);
        int z = diameterOfBinaryTree(root->right);
        
        return max(x, max(y,z)); 
        
    }
    
    int solve(TreeNode* root){
        if(!root)
            return 0;
       //len++;
        return 1 + max (solve(root->left), solve(root->right));
        
    }
};
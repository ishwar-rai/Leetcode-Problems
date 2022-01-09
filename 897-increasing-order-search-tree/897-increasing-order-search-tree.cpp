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
    TreeNode *prev=NULL;
    TreeNode* increasingBST(TreeNode* root) {
        Helper(root);
        return prev;
        
    }
    void Helper(TreeNode * root){
        if(!root)
            return;
        Helper(root->right);
        root->right=prev;
        prev=root;
        Helper(root->left);
          root->left=NULL;
    }
};
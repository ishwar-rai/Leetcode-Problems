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
vector<string> v;
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root)
            return v;
        v.clear();
        if(!root->left && !root->right){
            v.push_back(to_string(root->val));
            return v;
        }
        
        
        string str = to_string(root->val);
        if(root->left) solve(root->left, str);
        if(root->right) solve(root->right, str);
        
       return v; 
    }
    
    void solve(TreeNode* root, string str){
        // if(!root)
        //     return v;
        if(root->left){
            string ans = str + "->" + to_string(root->val);
            solve(root->left, ans);
        }
        if(root->right){
            string ans = str + "->" + to_string(root->val);
            solve(root->right, ans);
        }
        if(!root->left && !root->right){
            string ans = str + "->" + to_string(root->val);
            v.push_back(ans);
        }
    }
    
    
};
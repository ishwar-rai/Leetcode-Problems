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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v;
        stack<int> s1, s2;
        preOrder(root1, s1);
        preOrder(root2, s2);
        while(!s1.empty() && !s2.empty()){
            if(s1.top() < s2.top()){
                v.push_back(s1.top());
                s1.pop();
            } else {
                v.push_back(s2.top());
                s2.pop();
            }
        }
        while(!s1.empty()){
            v.push_back(s1.top());
            s1.pop();
        }
        
        while(!s2.empty()){
            v.push_back(s2.top());
            s2.pop();
        }
        return v;
    }
    
    void preOrder(TreeNode* root, stack<int> &s){
        if(!root) return;
        if(root->right) preOrder(root->right, s);
        s.push(root->val);
        if(root->left) preOrder(root->left, s);
        
    }
};
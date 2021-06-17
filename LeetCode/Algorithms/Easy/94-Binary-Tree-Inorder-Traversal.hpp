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
    
private:
    vector<int> arr;
    
    void reaversal(TreeNode *root) {
        if (root != nullptr) {
            reaversal(root->left);
            this->arr.push_back(root->val);
            reaversal(root->right);
        }
    }
    
public:
    vector<int> inorderTraversal(TreeNode* root) {
        this->reaversal(root);
        return this->arr;
    }
};

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
            reaversal(root->right);
            this->arr.push_back(root->val);
        }
    }
    
public:
    vector<int> postorderTraversal(TreeNode* root) {
        this->reaversal(root);
        return this->arr;
    }
};

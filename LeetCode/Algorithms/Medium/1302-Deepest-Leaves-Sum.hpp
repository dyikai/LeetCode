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
    int sum = 0;
    int deepest = -1;
public:
    
    int deepestLeavesSum(TreeNode* root) {
        dfs(root, 0);
        return sum;
    }
    
    void dfs(TreeNode *root, int depth) {
        if (root == nullptr) {
            return;
        }
        if (depth > deepest) {
            deepest = depth;
            sum = root->val;
        } else if (depth == deepest) {
            sum += root->val;
        }
        dfs(root->left, depth + 1);
        dfs(root->right, depth + 1);
    }
};

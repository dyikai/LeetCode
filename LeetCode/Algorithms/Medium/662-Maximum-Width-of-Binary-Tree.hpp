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
    int widthOfBinaryTree(TreeNode* root) {
        int width = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({ root, 0 });
        while (!q.empty()) {
            long long start = q.front().second;
            long long n = q.size();
            long long index = start;
            for (long long i = 0; i < n; i++) {
                TreeNode* node = q.front().first;
                index = q.front().second;
                if (node->left != nullptr) q.push({ node->left, index * 2 - start });
                if (node->right != nullptr) q.push({ node->right, index * 2 - start + 1 });
                q.pop();
            }
            width = max(width, (int)(index - start + 1));
        }
        return width;
    }
};
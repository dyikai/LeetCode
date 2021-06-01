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
    long long tmp = LLONG_MIN;
    bool isValidBST(TreeNode * root) {
        if (root == nullptr)
        {
            return true;
        }

        if (isValidBST(root->left))
        {
            if (tmp < root->val)
            {
                tmp = root->val;
                return isValidBST(root->right);
            }
        }

        return false;
    }
};
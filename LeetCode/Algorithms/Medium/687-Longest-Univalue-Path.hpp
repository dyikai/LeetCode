class Solution {
private:
    int res = 0;
public:
    int longestUnivaluePath(TreeNode* root) {
        dfs(root);
        return res;
    }

    int dfs(TreeNode* root) {
        if (!root)
        {
            return;
        }

        int l = dfs(root->left), r = dfs(root->right);
        int ans = 0, cur = 0;

        if (root->left != nullptr && root->left->val == root->val)
        {
            ans = l + 1;
            cur += l + 1;
        }
        if (root->right != nullptr && root->right->val == root->val)
        {
            ans = max(ans, r + 1);
            cur += r + 1;
        }

        res = max(res, cur);
        return ans;
    }
};
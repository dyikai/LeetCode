class Solution {
public:
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        TreeNode *parent = nullptr, *cur = root;

        while (cur != nullptr && cur->val > val)
        {
            parent = cur;
            cur = cur->right;
        }

        if (!parent)
        {
            return new TreeNode(val, cur, nullptr);
        }
        else
        {
            parent->right = new TreeNode(val, cur, nullptr);
            return root;
        }
    }
};
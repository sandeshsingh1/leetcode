class Solution {
public:
    TreeNode* invert(TreeNode* node) {
        if (node == nullptr) return nullptr;

        // Swap the left and right child nodes
        TreeNode* temp = node->left;
        node->left = node->right;
        node->right = temp;

        // Recursively invert the left and right subtrees
        invert(node->left);
        invert(node->right);

        return node;
    }

    TreeNode* invertTree(TreeNode* root) {
        return invert(root);
    }
};

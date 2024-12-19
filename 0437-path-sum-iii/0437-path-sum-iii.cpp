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
    void helper(TreeNode* root, int targetSum,long long s,int &c)
    {   if(root==NULL) return;
        s=s+ root->val;
        if(s== targetSum)c++;
         helper(root->left,targetSum,s,c);
         helper(root->right,targetSum,s,c);

    }
    int pathSum(TreeNode* root, int targetSum) {
        if (root == NULL) return 0;

        int count = 0;

        // Count paths starting from the current root
        helper(root, targetSum, 0, count);

        // Count paths in the left and right subtrees
        count += pathSum(root->left, targetSum);
        count += pathSum(root->right, targetSum);

        return count;
    }
};
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool exists(TreeNode* root,TreeNode*target)
//     {
//         if(root==NULL)return false;
//         if(root==target)return true;
//            return  exists(root->left,target)|| exists(root->right,target);
//     }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root==p or root==q) return root;
//         else if(exists(root->left,p)and exists(root->right,q))return root;
//         else if(exists(root->right,p)and exists(root->left,q))return root;
//         else if(exists(root->left,p)and exists(root->left,q))return lowestCommonAncestor(root->left,p,q);
//         else return lowestCommonAncestor(root->right,p,q);
        

//     }
// };
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base cases
        if (root == NULL || root == p || root == q) return root;

        // Recursively search in the left and right subtrees
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        // If both left and right are non-null, current node is the LCA
        if (left != NULL && right != NULL) return root;

        // Otherwise, return the non-null child
        return (left != NULL) ? left : right;
    }
};

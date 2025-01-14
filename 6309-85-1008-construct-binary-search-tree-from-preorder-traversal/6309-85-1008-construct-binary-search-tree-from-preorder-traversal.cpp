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
    void insert(TreeNode*root,int val)
    {
        if(root==NULL)root=new TreeNode(val);
            
            if(root->val>val)
            {
                if(root->left==NULL)root->left=new TreeNode(val);
                else{
                    insert(root->left,val);
                }}
               else if(root->val<val)
            {
                if(root->right==NULL)root->right=new TreeNode(val);
                else{
                    insert(root->right,val);
                }
            }
        
    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode*root=new TreeNode(pre[0]);
        int n=pre.size();
        for(int i=1;i<n;i++)
        {
            insert(root,pre[i]);
        }
        return root;
        
    }
};
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
    TreeNode* build(vector<int>& in, vector<int>& post,int inlo,int inhi,int postlo,int posthi)
    {   
        if(postlo>posthi)return NULL;
        TreeNode*root=new TreeNode(post[posthi]);
        if(postlo==posthi)return root;
        int i=inlo;
        while(i<=inhi)
        {
            if(in[i]==post[posthi])break;//got the value of i
            i++;
        }
        int leftcount=i-inlo;
        root->left=build(in,post,inlo,i-1,postlo,postlo+leftcount-1);
        root->right=build(in,post,i+1,inhi,leftcount+postlo,posthi-1);//postlo+leftcount is critical
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int n=in.size();
        return build(in,post,0,n-1,0,n-1);
    }
};
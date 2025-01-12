/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        return helper(head, nullptr); // Pass head and nullptr as bounds
    }
    
private:
    TreeNode* helper(ListNode* left, ListNode* right) {
        // Base case: if the bounds are equal, return nullptr
        if (left == right) return nullptr;
        
        // Find the middle element
        ListNode* mid = findMiddle(left, right);
        
        // Create a new tree node with the middle value
        TreeNode* root = new TreeNode(mid->val);
        
        // Recursively build left and right subtrees
        root->left = helper(left, mid);
        root->right = helper(mid->next, right);
        
        return root;
    }
    
    ListNode* findMiddle(ListNode* left, ListNode* right) {
        ListNode* slow = left;
        ListNode* fast = left;
        // Move slow by 1 step and fast by 2 steps until fast reaches the boundary
        while (fast != right && fast->next != right) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

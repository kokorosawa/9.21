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
     void inorder(TreeNode* root,TreeNode* &temp){ //  ＆為在函式(function)使用時設為參考 (reference)，temp更改結果在凾式外延用
        if(!root) return ;                         //  因為root與temp指向不同的樹
        inorder(root->left,temp);
        temp->right=new TreeNode(root->val);
        temp=temp->right;
        inorder(root->right,temp);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans = new TreeNode();
        TreeNode* temp=ans;
        inorder(root,temp);
        return ans->right;
    }
};
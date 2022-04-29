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
    string tree;
    vector<int> num;
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        int ans=0;
        order(root,0,ans);
        return ans;
    }
    
    void order(TreeNode* root,int temp,int &ans){
        if(!root) return ;
        temp=temp*10+root->val;
        if(root->left==nullptr and root->right==nullptr){
            ans+=temp;
        } 
        order(root->left,temp,ans);
        order(root->right,temp,ans);
    }
};

//利用遞迴特性讓結束時回到上一個

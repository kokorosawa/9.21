class Solution {
public:
    vector<int> a;
    void recoverTree(TreeNode* root) {
        around(root);
        sort(a.begin(),a.end());
        ioi(root);
    }
    int i=0;
    void ioi(TreeNode* root){
        if (!root) return;
        ioi(root->left);
        root->val=a[i];
        i++;
        ioi(root->right);
    }
    
    void around(TreeNode* root){
        if (!root) return;
        around(root->left);
        a.push_back(root->val);
        around(root->right);
    }
};
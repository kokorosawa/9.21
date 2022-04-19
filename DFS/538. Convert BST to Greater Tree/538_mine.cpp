class Solution {
public:
    vector<int> tree;
    vector<int> ans;
    TreeNode* convertBST(TreeNode* root) {
        order(root);
        for(int i=0;i<tree.size();i++){
            int temp=0;
            for(int j=i;j<tree.size();j++){
                temp+=tree[j];
            }
            ans.push_back(temp);
        }
        putback(root);
        return root;
    }
    int i=0;
    void putback(TreeNode* root){
        if(!root) return;
        putback(root->left);
        root->val=ans[i];
        i++;
        putback(root->right);
    }
    
    void order(TreeNode* root){
        if(!root) return;
        order(root->left);
        tree.push_back(root->val);
        order(root->right);
    }
  
/*
class Solution {
    void inorder(TreeNode* root , vector<int> &ans){
        if(root==NULL) return ;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
         vector<int> arr;
         inorder(root,arr);

         return arr[k-1];
    }
};
*/
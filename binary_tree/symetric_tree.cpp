/// in this question we have to check whether the given tree is symetric or not 
/*
class Solution {
    bool isSymetricHelp(TreeNode* left,TreeNode* right){
        if(left==NULL || right==NULL ){
            return left==right;
        }
        if(left->val!=right->val){
            return false ;
        }
        return isSymetricHelp(left->left,right->right) && isSymetricHelp(left->right,right->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return root==NULL || isSymetricHelp(root->left,root->right);
    }
};
*/
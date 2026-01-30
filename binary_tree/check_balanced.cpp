// in this question we have to find out if the tree is balanced or not 
// balanced tree is tree which satisfy abs(leftHeight-rightHeight)<=1
/*
class Solution {
public:
    bool isBalanced(TreeNode* root) {
      return checkHeight(root) != -1 ;  
    }
    int checkHeight(TreeNode* root ){
        if(root==NULL) return 0;

        int leftHeight=checkHeight(root->left);
        if(leftHeight==-1) return -1 ;
        int rightHeight=checkHeight(root->right);
        if(rightHeight==-1) return -1 ;

        if(abs(leftHeight-rightHeight)>1) return -1 ;

        return max(leftHeight,rightHeight)+1;

    }
};
*/
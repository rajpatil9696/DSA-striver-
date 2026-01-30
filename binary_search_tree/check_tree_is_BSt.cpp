// in this question we have to check whether the given tree BT is BST or not ;
// bruteforce solution 
// we do inorder traversal of the tree is the inorder traversal of the BT is in sorted ascending order then the tree is BST otherwise it is not BSt 
/*
class Solution {
     void inorder(TreeNode* root , vector<int> &ans){
        if(root==NULL) return ;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
public:
    bool isValidBST(TreeNode* root) {
         vector<int> arr;
         inorder(root,arr);

         int i=0;
         for(int j=1;j<arr.size();j++){
            if(arr[j]<arr[i]){
                return false ;
            }
            i++;
         }

         return true ;
    }
};
*/
// optimal solution 
/*
class Solution {
    bool isValidBST(TreeNode* root, long long minval, long long maxval) {
        if (root == NULL) return true;
        if (root->val <= minval || root->val >= maxval) return false;

        return isValidBST(root->left, minval, root->val) &&
               isValidBST(root->right, root->val, maxval);
    }
public:
    bool isValidBST(TreeNode* root) {
        return isValidBST(root, LLONG_MIN, LLONG_MAX);
    }
}
*/
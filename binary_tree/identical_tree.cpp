// in this question we have to find out wheather the two trees are identical or not 
/*
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL){
            return (p==q);
        }
        return (p->val==q->val)
        && isSameTree(p->left,q->left)
        && isSameTree(p->right,q->right);
    }
};
*/
/*
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Check if both are null
        if (p == nullptr && q == nullptr)
            return true;

        // If only one is null
        if (p == nullptr || q == nullptr)
            return false;

        // If values are not equal
        if (p->val != q->val)
            return false;

        // Manually check left and right
        bool leftSame = isSameTree(p->left, q->left);
        bool rightSame = isSameTree(p->right, q->right);

        return leftSame && rightSame;
    }
};

*/
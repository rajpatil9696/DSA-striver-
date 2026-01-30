// diameter is maximum difference between any two nodes 
// not nesessary to pass throught the root 
/*
class Solution {
    int height(TreeNode* node, int& diameter) {
        if (!node) {
            return 0;
        }
        int lh = height(node->left, diameter);
        int rh = height(node->right, diameter);

        diameter = std::max(diameter, lh + rh); // update diameter
        return 1 + std::max(lh, rh); // return height
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }
};
*/
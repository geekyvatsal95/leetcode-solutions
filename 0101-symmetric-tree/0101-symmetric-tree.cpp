class Solution {
public:
    bool symmetric(TreeNode* left, TreeNode* right){
        if(left==NULL && right==NULL) return true;
        if(left==NULL || right==NULL) return false;
        if(left->val != right->val) return false;
        return (symmetric(left->left,right->right) && symmetric(left->right,right->left));

    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;

        return symmetric(root->left,root->right);
    }
};
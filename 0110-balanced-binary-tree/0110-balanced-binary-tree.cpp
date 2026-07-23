class Solution {
public:
    int height(TreeNode*root){
        if(root==NULL) return 0;
        return (1+(max(height(root->left),height(root->right))));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int left_height= height(root->left);
        int right_height= height(root->right);

        if(abs(left_height-right_height)>1) return false;

        return (isBalanced(root->left) && isBalanced(root->right));
    }
};
class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root){
        if(root==NULL) return 0;
        int currentDiameter = height(root->left)+ height(root->right);
        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);
        return max(currentDiameter,max(leftDiameter,rightDiameter));
        
    }
};
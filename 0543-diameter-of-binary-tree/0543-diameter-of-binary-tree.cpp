class Solution {
public:
    int height(TreeNode* root, int& diameter){
        if(root==NULL) return 0;
        int left_height= height(root->left,diameter);
        int right_height= height(root->right,diameter);
        diameter=max(diameter,left_height+right_height);
        return 1+max(left_height,right_height);

    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
};
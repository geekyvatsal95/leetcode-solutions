// class Solution {
// public:
//     int height(TreeNode*root){
//         if(root==NULL) return 0;
//         return (1+(max(height(root->left),height(root->right))));
//     }
//     bool isBalanced(TreeNode* root) {
//         if(root==NULL) return true;
//         int left_height= height(root->left);
//         int right_height= height(root->right);

//         if(abs(left_height-right_height)>1) return false;

//         return (isBalanced(root->left) && isBalanced(root->right));
//     }
// };


class Solution{
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int left_height = height(root->left);
        if(left_height == -1) return -1;
        int right_height = height(root->right);
        if(right_height == -1) return -1;
        if(abs(left_height-right_height)>1) return -1;
        return (1 + max(left_height,right_height));
    }
    bool isBalanced(TreeNode *root){
    	return (height(root)!=-1);
    }
};
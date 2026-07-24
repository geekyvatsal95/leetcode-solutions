class Solution {
public:
    int solve(TreeNode* root, int& maxSum){
        if(root==NULL) return 0;
        int left_sum=solve(root->left,maxSum);
        int right_sum=solve(root->right,maxSum);
        int neeche_hi_mil_gya_answer= left_sum+right_sum + root->val;
        int koi_ek_acha= max(left_sum,right_sum) + root->val;
        int only_root_achha = root->val;
        maxSum=max({maxSum,neeche_hi_mil_gya_answer,koi_ek_acha,only_root_achha});
        return max(koi_ek_acha,only_root_achha);
    }
    int maxPathSum(TreeNode* root) {
        int maxSum=INT_MIN;
        solve(root,maxSum);
        return maxSum;
        
    }
};
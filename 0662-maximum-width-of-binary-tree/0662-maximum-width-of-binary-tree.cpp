class Solution {
public:
    typedef unsigned long long ll;
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        queue<pair<TreeNode*,ll>> q;
        q.push({root,0});
        ll maxi=0;
        while(!q.empty()){
            ll size=q.size();
            ll L = q.front().second;
            ll R = q.back().second;
            maxi=max(maxi,R-L+1);
            for(int i=0;i<size;i++){
                TreeNode* curr = q.front().first;
                ll idx = q.front().second;
                q.pop();
                if(curr->left) q.push({curr->left,2*(idx)+1});
                if(curr->right) q.push({curr->right,2*(idx)+2});

            }
        }
        return maxi;
        
    }
};
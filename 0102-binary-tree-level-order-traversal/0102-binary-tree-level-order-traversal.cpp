class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                root=q.front();
                if(root->left!=NULL) q.push(root->left);
                if(root->right!=NULL) q.push(root->right);
                level.push_back(root->val);
                q.pop();
            }
            ans.push_back(level);
        }
        return ans;
        
    }
};
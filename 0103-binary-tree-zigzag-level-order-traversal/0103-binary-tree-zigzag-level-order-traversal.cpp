class Solution {
public:
    vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        bool flag=false;
        while(!q.empty()){
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                root=q.front();
                if(root->left!=NULL) q.push(root->left);
                if(root->right!=NULL) q.push(root->right);
                level.push_back(root->val);
                q.pop();
            }
            flag=!flag;
            if(flag==true){
                ans.push_back(level);
            }
            else{
                reverse(level.begin(),level.end());
                ans.push_back(level);
            }
        }
        return ans;
        //your code goes here
    }
};
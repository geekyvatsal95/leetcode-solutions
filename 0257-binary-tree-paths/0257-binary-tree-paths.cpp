class Solution {
public:
    void solve(TreeNode* root, vector<string>& ans,string& path){
        if(root==NULL) return;
        int len=path.size();

        if(root->left == NULL && root->right ==NULL) path+=(to_string(root->val)); 
        else path+=(to_string(root->val)+"->");
        if(root->left == NULL && root->right ==NULL){
            ans.push_back(path);
            path.resize(len);
            return;
        }
        solve(root->left,ans,path);
        solve(root->right,ans,path);
        path.resize(len);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string path ="";
        solve(root,ans,path);
        return ans;

        
    }
};
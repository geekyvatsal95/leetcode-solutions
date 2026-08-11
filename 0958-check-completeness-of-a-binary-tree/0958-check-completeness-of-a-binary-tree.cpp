class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool past=false; //this is telling ki hamne past mein koi NULL node dekha hain kya?
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            if(it==NULL) past=true;
            else{
                if(past==true) return false;
                else{
                    q.push(it->left);
                    q.push(it->right);
                }
            }
        }
        return true;
        
    }
};
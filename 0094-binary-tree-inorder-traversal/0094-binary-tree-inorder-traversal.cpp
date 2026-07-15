// class Solution{
// 	public:
//         void helper(TreeNode* root , vector<int>& res){
//             if(root == NULL) return;
//             helper(root->left,res);
//             res.push_back(root->val);
//             helper(root->right,res);
//         }
// 		vector<int> inorderTraversal(TreeNode* root){
//             vector<int> res;
//             helper(root,res);
//             return res;
// 		}
// };

class Solution{
	public:
		vector<int> inorderTraversal(TreeNode* root){
            stack<TreeNode*> st;
            vector<int> res;
            TreeNode* curr= root;
            while(true){
                if(curr!=NULL){
                    st.push(curr);
                    curr=curr->left;
                }
                else{
                    if(st.empty()) break;
                    curr=st.top();
                    st.pop();
                    res.push_back(curr->val);
                    curr=curr->right;
                }
            }
            return res;
		}
};


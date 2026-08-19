class Solution {
public:
    void paranthesis(int open , int close, int n , string s, vector<string>& ans){
        if(open==close && open+close==2*n){
            ans.push_back(s);
            return;
        }
        if(open<n) paranthesis(open+1,close,n,s+'(',ans);
        if(close<open) paranthesis (open,close+1,n,s+')',ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        paranthesis(0,0,n,"",ans);
        return ans;
        
    }
};
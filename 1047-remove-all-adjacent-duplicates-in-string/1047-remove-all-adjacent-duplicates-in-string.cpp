class Solution {
public:
    void reverseStack(stack<char>& st , string& s){
        if(st.size()==0) return;
        char ch = st.top();
        st.pop();
        reverseStack(st,s);
        s+=ch;
        st.push(ch);
    }
    string removeDuplicates(string s) {
        int n=s.size();
        stack<char> st;
        for(auto it : s){
            if(st.empty()==true) st.push(it);
            else{
                if(it==st.top()) st.pop();
                else st.push(it);
            }
        }
        string ans="";
        reverseStack(st,ans);
        return ans;
    }
};
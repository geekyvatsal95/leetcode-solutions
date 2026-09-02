class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        for (char ch : s){
            if(st.size()>0 && st.top().first==ch){
                st.top().second++;
                if(st.top().second==k) st.pop();
            }
            else st.push({ch,1});
        }
        string ans="";
        while(st.size()>0){
            auto [ch,cnt]=st.top();
            st.pop();
            ans+=string(cnt,ch);
        }
        reverse (ans.begin(),ans.end());
        return ans;
        
    }
};
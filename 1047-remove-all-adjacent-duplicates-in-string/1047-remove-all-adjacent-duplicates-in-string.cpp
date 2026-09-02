class Solution {
public:

    string removeDuplicates(string s) {
        int n= s.size();
        stack<char> st;
        for(auto it: s){
            if(st.size()>0 && it==st.top()) st.pop();
            else st.push(it);
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;


    }
};
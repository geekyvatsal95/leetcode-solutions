class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n= temperatures.size();
        stack<int> st;
        vector<int> ans(n);
        ans[n-1]=0;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && temperatures[st.top()]<=temperatures[i]) st.pop();
            ans[i]=st.size()>0?st.top()-i:0;
            st.push(i);
        }
        return ans;

        
    }
};
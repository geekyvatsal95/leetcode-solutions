class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        vector<int> psi(n);
        vector<int> nsi(n);
        stack<int> st;
        st.push(0);
        psi[0]=-1;
        for(int i=1;i<n;i++){
            while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
            psi[i]=st.size()>0?st.top():-1;
            st.push(i);
        }
        st={};
        nsi[n-1]=n;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
            nsi[i]=st.size()>0?st.top():n;
            st.push(i);
        }
        int maxi = INT_MIN;
        for(int i =0;i<n;i++){
            maxi=max(maxi,arr[i]*(nsi[i]-psi[i]-1));
        }
        return maxi;
        
    }
};
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans (2001);
        for(int i=0;i<arr.size();i++){
            ans[arr[i]+1000]++;
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<2000;i++){
            if(ans[i]!=0 && ans[i]==ans[i+1]) return false;
        }
        return true;












        // map<int,int> mpp; // key : number , value :  occurence
        // for(int i=0;i<arr.size();i++){
        //     mpp[arr[i]]++;
        // }
        // unordered_set<int> st;
        // for(auto it : mpp){
        //     if(st.find(it.second)!=st.end()) return false;
        //     st.insert(it.second);
        // }
        // return true;

        
    }
};
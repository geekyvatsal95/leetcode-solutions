class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mpp; // key : number , value :  occurence
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        unordered_set<int> st;
        for(auto it : mpp){
            if(st.find(it.second)!=st.end()) return false;
            st.insert(it.second);
        }
        return true;

        
    }
};
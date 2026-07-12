class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> res;
        res=arr;
        sort(res.begin(),res.end());
        unordered_map<int,int> mpp;
        int count=0;
        for(int i=0;i<res.size();i++){
            if(mpp.find(res[i])!=mpp.end()) mpp[res[i]]=count;
            else mpp[res[i]]=++count;
        }
        for(int i=0;i<res.size();i++){
            res[i]=mpp[arr[i]];
        }
        return res;

        
    }
};
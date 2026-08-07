class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> hash(n+1,0);
        for(auto it: nums){
            hash[it]++;
        }
        for(int i=0;i<hash.size();i++){
            if(hash[i]==0) return i;
        }
        return -1;
        
    }
};
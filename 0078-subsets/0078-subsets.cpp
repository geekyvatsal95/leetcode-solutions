class Solution {
public:
    void solve(int idx, int n, vector<int>& nums, vector<int>& arr, vector<vector<int>>& ans){
        if(idx==n){
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[idx]);
        solve(idx+1,n,nums,arr,ans);
        arr.pop_back();
        solve(idx+1,n,nums,arr,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> arr;
        solve(0,n,nums,arr,ans);
        return ans;
        
    }
};
class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int first_occ= lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int last_occ= upper_bound(nums.begin(),nums.end(),target)-nums.begin() -1;
        if(first_occ==nums.size() || nums[first_occ]!=target) return {-1,-1};
        if(last_occ==nums.size() ||nums[last_occ]!=target) return {-1,-1};
        return {first_occ,last_occ};
        
    }
};
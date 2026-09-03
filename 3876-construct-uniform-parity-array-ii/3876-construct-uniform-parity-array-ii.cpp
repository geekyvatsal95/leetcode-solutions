class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = *min_element(nums1.begin(), nums1.end());
        int targetParity = mn % 2;

        // find smallest odd
        int smallestOdd = INT_MAX;
        for (int x : nums1) {
            if (x % 2 == 1) {
                smallestOdd = min(smallestOdd, x);
            }
        }

        for (int x : nums1) {
            if (x % 2 == targetParity) continue;

            // need to convert → requires smaller odd
            if (smallestOdd >= x) return false;
        }

        return true;
    }
};
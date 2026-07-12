const long long MOD = 1e9 + 7;

class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {

        long long res = k;
        long long ops = 0;
        long long ans = 0;

        for (long long x : nums) {

            if (res < x) {

                long long need = (x - res + k - 1) / k;

                __int128 sum =
                    (__int128)need * (2 * (__int128)ops + need + 1) / 2;

                ans = (ans + (long long)(sum % MOD)) % MOD;

                ops += need;
                res += need * 1LL * k;
            }

            res -= x;
        }

        return ans;
    }
};
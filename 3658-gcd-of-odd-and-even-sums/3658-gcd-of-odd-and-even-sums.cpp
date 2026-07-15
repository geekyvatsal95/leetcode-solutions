class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum_odd = n*n; 
        int sum_even = n*(n+1);
        return __gcd(sum_odd, sum_even);
    }
};
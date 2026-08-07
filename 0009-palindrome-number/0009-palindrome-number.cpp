class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        int rev=0;
        while(x>0){
            rev=rev*1LL*10+(x%10);
            x/=10;
        }
        return rev==original;

        
    }
};
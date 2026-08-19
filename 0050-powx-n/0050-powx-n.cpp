class Solution {
public:
    double myPow(double x, long long n) {
        if(n==0) return 1;
        if(n<0){
            x=1/x;
            n=-1*(n);
        }
        double ans=1;
        while(n>0){
            if(n%2==0){
                n/=2;
                x*=x;
            }
            else{
                n-=1;
                ans*=x;
            }
        }
        return ans;
        
    }
};
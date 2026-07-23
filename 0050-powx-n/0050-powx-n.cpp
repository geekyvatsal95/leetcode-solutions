class Solution {
public:
    double myPow(double x, long long n) {
        if(n<0){
            x=1/x;
            n=-1*n;
        }
        if(n==0) return 1;
        if(n%2==0) return myPow(x*x,n/2) ;
        else return (x*myPow(x,n-1));


    }
};
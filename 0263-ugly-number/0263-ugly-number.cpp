class Solution {
public:
    bool isUgly(int n) {
        //hum kya karenge apne number n ko divide karte rahenge by 2 , 3 and 5 , and in case isme se kisi se bhi wo divisible nhi hua to return kar denge false;
        while(n>1){
            if(n%2==0) n/=2;
            else if(n%3==0) n/=3;
            else if(n%5==0) n/=5;
            else return false;
        }
        return n==1;
        
    }
};
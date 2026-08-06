class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1=s.size();
        int n2=goal.size();
        if(n1!=n2) return false;
        string left="";
        for(int i=0;i<n1;i++){
            string right= s.substr(i);
            if(right+left==goal) return true;
            left+=s[i];
        }
        return false;
        
    }
};
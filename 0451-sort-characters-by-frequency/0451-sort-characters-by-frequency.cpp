class Solution {
public:
    static bool comparator (pair<int,char> a , pair<int,char>b){
        return a.first>b.first ; // agar ye true aaya to a > b chala jayega otherwise b jayega false aane pe
    }
    string frequencySort(string s) {
    pair<int,char> freq[128];
    for(int i=0;i<128;i++){
        freq[i]={0,char(i)};
    }
    for(int i=0;i<s.size();i++){
        freq[(int)s[i]].first++;
    }
    sort(freq,freq+128,comparator);
    string ans="";
    for(int i=0;i<128;i++){
        if(freq[i].first>0) ans.append(freq[i].first,freq[i].second);
    }
    return ans;

        
    }
};
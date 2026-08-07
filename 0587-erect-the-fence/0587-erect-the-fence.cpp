class Solution {
public:
    int findEquationValue(const pair<int,int>& P1 ,const pair<int,int>& P2,const pair<int,int>& P3 ){
        int X1=P1.first;
        int X2=P2.first;
        int X3=P3.first;

        int Y1=P1.second;
        int Y2=P2.second;
        int Y3=P3.second;

        return (Y3-Y2)*(X2-X1) - (Y2-Y1)*(X3-X2);
    }
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        sort(trees.begin(),trees.end());
        vector<vector<int>> result;
        deque<pair<int,int>> upper,lower;
        for (auto &point : trees){
            int l = lower.size();
            int u = upper.size();

            //sabse pehle lower ka dekhenge
            while(l>=2 && findEquationValue(lower[l-2],lower[l-1],{point[0],point[1]})<0){
                l--;
                lower.pop_back();
            }
            while(u>=2 && findEquationValue(upper[u-2],upper[u-1],{point[0],point[1]})>0){
                u--;
                upper.pop_back();
            }
            upper.push_back({point[0],point[1]});
            lower.push_back({point[0],point[1]});
        }
        set<pair<int,int>> st;
        for(auto &point : upper){
            st.insert(point);
        }
        for(auto &point : lower){
            st.insert(point);
        }
        for(auto &point : st){
            result.push_back({point.first,point.second});
        }
        return result;
        
    }
};
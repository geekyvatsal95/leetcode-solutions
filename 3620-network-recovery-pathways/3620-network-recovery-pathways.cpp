class Solution {
public:
    bool check(int mid,int n,long long k,vector<vector<pair<int,int>>> &adj){
        vector<long long> dist(n,LLONG_MAX);
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;
        dist[0]=0;
        pq.push({0,0});

        while(!pq.empty()){
            auto [d,node]=pq.top();
            pq.pop();

            if(d>k) return false;
            if(node==n-1) return true;
            if(d>dist[node]) continue;

            for(auto &[adjNode,edgeCost]:adj[node]){
                if(edgeCost<mid) continue;
                if(d+edgeCost<dist[adjNode]){
                    dist[adjNode]=d+edgeCost;
                    pq.push({dist[adjNode],adjNode});
                }
            }
        }

        return false;
    }

    int findMaxPathScore(vector<vector<int>>& edges,vector<bool>& online,long long k){
        int n=online.size();

        if(!online[0]||!online[n-1]) return -1;

        vector<vector<pair<int,int>>> adj(n);
        int l=INT_MAX,r=0;

        for(auto &edge:edges){
            int u=edge[0],v=edge[1],w=edge[2];

            if(!online[u]||!online[v]) continue;

            adj[u].push_back({v,w});
            l=min(l,w);
            r=max(r,w);
        }

        if(l==INT_MAX) return -1;

        int ans=-1;

        while(l<=r){
            int mid=l+(r-l)/2;

            if(check(mid,n,k,adj)){
                ans=mid;
                l=mid+1;
            }else{
                r=mid-1;
            }
        }

        return ans;
    }
};
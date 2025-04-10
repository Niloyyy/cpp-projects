#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
using namespace __gnu_pbds; 
const double PI = acos(-1);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
        int n , k; cin >> n >> k;
        queue<pair<int,int>>q;
        q.push({1 , n});
        int64_t sum = 0 , mn = 1e18;
        vector<int64_t>v;
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            if(abs(p.f - p.s) + 1 < k) continue;
            int len = p.s - p.f + 1;
            if(len % 2 == 0){
                int m = (p.f + p.s) / 2;
                if(m - p.f + 1 >= k) q.push({p.f , m});
                if(p.s - m >= k) q.push({m + 1 , p.s});
            }else{
                int64_t m = (p.f + p.s) / 2;
                sum += m;
                if(m - p.f >= k) q.push({p.f , m-1});
                if( p.s - m >= k) q.push({m + 1 , p.s});
                mn = min(mn , m);
                v.push_back(m);
            }
            
        }
        sort(v.begin() , v.end());
        for(auto i = 1 ; i < v.size();i++) cout<<v[i]-v[i-1]<<endl;
        //cout<<sum<<endl;
    }
    return 0;
}
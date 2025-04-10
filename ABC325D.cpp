#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ordered_set __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>
#define ll long long
#define endl '\n'
#define f first
#define s second
using pii = pair<int64_t, int64_t>;

const double PI = acos(-1);
const int mod = 1e9 + 7;
const int inf = INT_MAX;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n; 
    cin >> n;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    priority_queue<int64_t, vector<int64_t>, greater<int64_t>> pp;
    int64_t st = 1e18;
    for(int i = 0 ; i < n;i++){
        int64_t x , y; cin >> x >> y;
        pq.push({x , x + y});
        st = min(st , x);
    }
    int ans = 0;
    pii t;
    while(!pq.empty()){
        t = pq.top();
        pq.pop();
        if(t.f == st){
            pp.push(t.s);
        }else{
            pq.push(t);
            int64_t tt  = 0;
            if(!pp.empty()){
                tt = pp.top();
                pp.pop();
            }
            if(tt >= st) ans++;
            int end = t.f , cnt = 0;
            while(!pp.empty() and pp.top() < end){
                pp.pop();
                cnt++;
            }
            //cout<<st<<' '<<ans<<endl;
            ans += cnt;
            st = t.f;                
        }
    }
    // int64_t tt  = 0;
    // if(!pp.empty()){
    //     tt = pp.top();
    //     pp.pop();
    // }
    // if(tt >= t.f) ans++;
    int end = t.s , cnt = 0;
    while(!pp.empty() and pp.top() < end){
        pp.pop();
        cnt++;
    }
    //cout<<st<<' '<<ans<<endl;
    ans += min(t.s - t.f + 1 , 1ll * cnt);
                 
   cout<<ans;

    return 0;
}

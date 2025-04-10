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

ll solve(int l , int r , vector<int>&a){
    if(l >= r) return 0;
    int m = l + (r-l) / 2;
    ll ans = solve(l , m , a);
    ans += solve(m+1 , r , a);

    vector<int>right_vec;
    for(int i = m+1 ; i <= r;i++){
        right_vec.push_back(a[i]);
    }
    sort(right_vec.begin() , right_vec.end());
    for(int i = l ; i <= m;i++){
        ans += (lower_bound(right_vec.begin() , right_vec.end() , a[i]) - right_vec.begin());
    }
    return ans;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<int>a(n);
        for(auto &i : a) cin >> i;
        cout<<solve(0 , n-1 , a)<<endl;    
    }
    return 0;
}	
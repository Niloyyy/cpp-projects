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
        vector<int>a(n+1 , 0) , b(n+1 , 0);
        for(int i = 0 ; i < n;i++){
            int x; cin >> x;
            a[x]++;
        }
        for(int i = 0 ; i < n;i++){
            int x; cin >> x;
            b[x]++;
        }
        bool f = 0;
        for(int i = 1 ; i <= n;i++){
            if(a[i] and b[i] and k > 0){
                f = 1;
                cout<<i<<' '; 
                k--;
            }
        }
        if(!f){
            for(int i )
        }
        cout<<endl; 
    }
    return 0;
}
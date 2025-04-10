#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define int long long int
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
        int n; cin >> n;
        vector<int>v;
        for(int i = 0 ; i < n;i++){
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin() , v.end());
        int j = -1;
        for(int i = 0 ; i + 1 < n;i++){
            if(v[i] == v[i+1]){
                j = i;
            }
        }
        //cout<<j<<' ';
        if(j == -1){
            cout<<-1<<endl;
            continue;
        }
        int x = v[j];
        v.erase(v.begin() + j);
        v.erase(v.begin() + j);
        bool ff = 1;
        for(int i = 0 ; i + 1 < v.size();i++){
            if(2 * x + v[i] > v[i+1]){
                cout<<x<<' '<<x<<' '<<v[i]<<' '<<v[i+1]<<endl;
                ff = 0;
                break;
            }
        }
        if(ff) cout<<-1<<endl;
    }
    return 0;
}
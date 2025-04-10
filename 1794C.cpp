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
const int N = 1e5 + 9;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
        int arr[n];
        for(int i = 0 ; i < n;i++){
            cin >> arr[i];
        }
        int id = 1;
        for(int i = 0 ; i < n;i++){
            if(1.0 * (log(arr[i]) - log(id)) > 0){
                cout<<id++<<' ';
            }else cout<<id<<' ';
        }
        cout<<endl;
    }
    return 0;
}
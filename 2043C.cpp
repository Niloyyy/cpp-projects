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
    	vector<int>arr(n);
        set<int>res{0};
    	int id , mx = INT_MIN , sum = 0;
    	for(int i = 0 ; i < n;i++){
    		cin >> arr[i];
    		if(abs(arr[i]) > mx and abs(arr[i]) > 1){
    			mx = arr[i];
    			id = i;
    		}
    	}
        if(mx != INT_MIN){
            int mn1 = 0 , mn2 = 0 , mx1 = 0 , mx2 = 0 , x = 0 , y = 0;
            for(int i = 0 ; i < id;i++){
                x += arr[i];
                y += (-1 * arr[i]);
                mx1 = max(mx1 , x);
                mn1 = max(y , mn1);
                if(y < 0) y = 0;
                if(x < 0) x = 0;
            }
            x = 0 , y = 0 , mn1 = -1 * mn1;
            for(int i = id+1 ; i < n;i++){
                x += arr[i];
                y += (-1 * arr[i]);
                mx2 = max(mx2 , x);
                mn2 = max(y , mn2);
                if(y < 0) y = 0;
                if(x < 0) x = 0;
            }
            x = 0 , y = 0 , mn2 = -1 * mn2;
            int lmn = 0 , lmx = 0 , rmn = 0 , rmx = 0;
            for(int i = id-1; i >= 0;--i){
                y += arr[i];
                lmx = max(y , lmx);
                lmn = min(y , lmn);
            }
            for(int i = id+1; i < n;++i){
                x += arr[i];
                rmx = max(x , rmx);
                rmn = min(x , rmn);
            }
            for(int i = mn1 ; i <= mx1;i++) res.insert(i);
            for(int i = mn2 ; i <= mx2;i++) res.insert(i);
            for(int i = mx + lmn + rmn ; i <= mx + lmx + rmx;i++) res.insert(i);    
        }else{
            int mn = 0 , mx = 0 , x = 0 , y = 0;
            for(int i = 0 ; i < n;i++){
                x += arr[i];
                y += (-1 * arr[i]);
                mx = max(mx , x);
                mn = max(y , mn);
                if(y < 0) y = 0;
                if(x < 0) x = 0;
            }
            mn = -1 * mn;
            for(int i = mn ; i <= mx;i++) res.insert(i);   
        }
        cout<<res.size()<<endl;
        for(auto i : res) cout<<i<<' ';cout<<endl;
    }
    return 0;
}
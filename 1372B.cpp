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

int64_t LCM(int a , int b){
    return 1ll * a * b / __gcd(a , b);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
        int lcm = n - 1 , aa , bb;
    	for(int i =  2; 1ll * i * i <= n;i++){
    		if(n % i == 0){
    			int b = n / i;
                int a = n - b;
                if(LCM(a , b) < lcm){
                    aa = a;
                    bb = b;
                    lcm = LCM(a , b);
                }
    		}
    	}
        if(lcm == n - 1) cout<<n-1<<' '<<1<<endl;
        else cout<<aa<<' '<<bb<<endl;

    
    }
    return 0;
}
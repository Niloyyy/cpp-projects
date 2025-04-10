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

vector<long long> sieve(int n){
	vector<long long>p;
	vector<bool>prime(n + 1 , true);
	for(int i = 2 ; 1ll * i * i <= n;i++){
		if(prime[i]){
			for(int j = i * i ; j <= n;j+=i){
				prime[j] = 0;
			}
		}
	}
	for(int i = 2 ; i <= n;i++){
		if(prime[i]) p.push_back(i);
	}
	return p;
}

long long bs(long long x , long long n ,  vector<long long>&p){
	long long l = 0 , r = p.size() - 1 , m;
	while(l <= r){
		m = l + (r - l) / 2;
		if(1ll * p[m] * x > n){
			r = m - 1;
		}else{
			l = m + 1;
		}
	}
	return l;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	long long n , ans = 0; cin >> n;
    	vector<long long> p = sieve(n);
    	for(long long i = 1 ; i <= n;i++){
    		ans += bs(i , n ,  p);
    	}
    	cout<<ans<<endl;
    }
    return 0;
}
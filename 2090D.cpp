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
vector<int>p,np;
void sieve(){
	vector<bool>prime(N , 1);
	for(int i = 2 ; i * i < N;i++){
		if(prime[i]){
			for(int j = i * i ; j < N;j+=i){
				prime[j] = 0;
			}
		}
	}
	np.push_back(1);
	for(int i = 2 ; i < N;i++){
		if(prime[i]) p.push_back(i);
		else np.push_back(i);
	}
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    sieve();
    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	int i = 0 , j = 0;
    	while(p[i] <= n or np[j] <= n){
    		if(p[i] <= n) cout<<p[i++]<<' ';
    		if(np[j] > n) break;
    		cout<<np[j++]<<' ';
    	}
    	cout<<endl;
    }
    return 0;
}
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
const int N = 55555;
vector<int>p;

void sieve(){
	bool prime[N+1];
	for(int i = 2 ; i <= N;i++) prime[i] = 1;
	for(int i = 2 ; i * i <= N;i++){
		if(prime[i]){
			for(int j = i * i ; j <= N;j+=i){
				prime[j] = 0;
			}
		}
	}
	for(int i = 2 ; i <= N;i++){
		if(prime[i] and i % 5 == 1) p.push_back(i);
	}
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    sieve();
    int n; cin >> n;
    for(int i = 0 ; i < n;i++) cout<<p[i]<<' ';

    return 0;
}
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
const int mod = 998244353;
const int inf = INT_MAX;
const int _inf = INT_MIN;
const int N = 2e5 + 9;
int fact[N];
void f(){
	fact[0] = 1;
	for(int i = 1 ; i < N;i++){
		fact[i] = (1ll * i * fact[i-1]) % mod;
		fact[i] %= mod;
	}
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    f();
    int tc = 1; cin >> tc;
    while(tc--){
    	string s; cin >> s;
    	int op = 0 , seq = 0 , cnt = 0;
    	for(int i = 0 ; i + 1 < s.size();i++){
    		if(s[i] != s[i + 1]){
    			op += cnt;
    			if(cnt > 0) seq += fact[cnt+1];
    			seq %= mod;
    			cnt = 0;
    		}else cnt++;
    	}
    	//cout<<seq;
    	op += cnt;
    	if(cnt > 0) seq += fact[cnt+1];
    	seq %= mod;
    	cout<<op<<' '<<(op == 0 ? 1 : seq)<<endl;
    }
    return 0;
}
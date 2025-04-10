#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>v(n);
    	ll sum = 0;
    	for(auto &i : v) cin >> i;
    	if(n < 3){
    		cout<<-1<<endl;
    		continue;
    	}
    	int mx = *max_element(v.begin() , v.end())  , mxx = -2e9 , id;
    	sort(v.begin() , v.end());
    	for(int i = 0 ; i < n;i++){
    		sum += v[i];
    	}
    	id = n / 2;
    	ll  l = 1ll * v[id] * 2 * n - sum;
    	if(l >= 0) cout<<l+1<<endl;
    	else cout<<0<<endl; 
    
    }
    return 0;
}
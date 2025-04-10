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
    	int n , ans = 0; cin >> n;
    	vector<pair < int , int> >v(n);
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		v[i] = {x , i+1};
    	}
    	sort(v.begin() , v.end());	
    	for(int i = 0 ; i < n;i++){
    		for(int j = i+1 ; j < n;j++){
    			if(1ll * v[i].f * v[j].f > 2 * n) break;
    			else if(1ll * v[i].f * v[j].f == v[i].s + v[j].s) ans++;
    		}
    	}
    	cout<<ans<<endl;	
    }
    return 0;
}
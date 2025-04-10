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
    	int p[n+1];
    	for(int i = 1 ; i <= n;i++) cin >> p[i];
    	int l = -1 , r = -1 , mx , mn , pl = 0 , pr = 0;
    	for(int i = 1 ; i <= n;i++){
    		if(p[i] != i and p[i] != n and p[i] != 1){
    			l = i , pl = p[i];
    			mx = p[i] , mn = p[i];
    			break;
    		}
    	}
    	bool f1 = false , f2 = false , f = false;
    	for(int i = l+1 ; i <= n;i++){
    		if(p[i] < pl) f1 = true;
    		if(p[i] > pl) f2 = true;
    		mx = max(p[i] , mx) , mn = min(p[i] , mn);
    		if(f1 and f2 and mx > p[i] and mn < p[i]){
    			f = true;
    			r = i;
    			break;
    		} 
    	}
    	
    	f ? cout<<l<<' '<<r<<endl : cout<<-1<<endl;
    }
    return 0;
}
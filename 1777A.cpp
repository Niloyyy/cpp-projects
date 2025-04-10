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
    	int n , op = 0; cin >> n;
    	int a[n]; for(int i = 0 ; i < n;i++) cin >> a[i];
    	for(int i = 1 ; i < n;i++){
    		if(a[i-1] % 2 != a[i] % 2) continue;
    		else{
    			ll x = 1;
    			for(int j = i; j < n;j++){
    				x *= 1ll * a[j];
    				op++;
    				if(x % 2 != a[i-1] % 2){
    					i += j;
    					i--;
    				}
    			}
    		}
    	}
    	cout<<op<<endl;
    }
    return 0;
}
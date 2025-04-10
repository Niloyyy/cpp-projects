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
    	int mx = -7 , mm = -7;
    	for(auto i = 1 ; i <= n;i++){
    		int x; cin >> x;
    		if(i&1) mx = max(mx , x);
    		else mm = max(x , mm);
    	}
    	cout<<max(mm + n / 2 , mx + n/2  + (n & 1))<<endl;
    
    }
    return 0;
}
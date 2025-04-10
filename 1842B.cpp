#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , x; cin >> n >> x;
    	vector<int>a(n) , b(n) , c(n);
    	bool chk_a = true , chk_b = true , chk_c = true;
    	for(int i = 0 ;i < n;i++){
    		cin >> a[i];
    	}
    	for(int i = 0 ;i < n;i++){
    		cin >> b[i];
    	}
    	for(int i = 0 ;i < n;i++){
    		cin >> c[i];
    	}
    	for(int i = 0 ; i < n;i++){
    		for(int bit = 0 ; bit < 31 ;bit++){
    			if((x & (1 << bit)) == 0 and  (a[i] & (1 << bit))) chk_a = false;
    			if((x & (1 << bit)) == 0 and  (b[i] & (1 << bit))) chk_b = false;
    			if((x & (1 << bit)) == 0 and  (c[i] & (1 << bit))) chk_c = false;
    			if()
    		}
    	}
    	//for(auto i : bt) cout<<i<<" ";
    	cout<<(f ? "YES\n" : "NO\n");
    
    }
    return 0;
}

///111
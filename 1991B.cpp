#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define F first
#define S second
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
    	int a[n-1] , b[n];
    	for(int i = 1 ; i < n;i++) cin >> a[i-1];
    	b[0] = a[0];
    	for(int i = 1 ; i < n - 1;i++){
    		b[i] = a[i-1] | a[i];
    	}
    	b[n-1] = a[n-2];
    	bool f = true;
    	for(int i = 1 ; i < n;i++){
    		if((b[i-1] & b[i]) != a[i-1]){
    			f = false;
    			break;
    		}
    	}
    	if(f){
    		for(int i = 0 ; i < n;i++) cout<<b[i]<<' ';	
    	}else cout<<-1;
    	cout<<endl;
    
    }
    return 0;
}